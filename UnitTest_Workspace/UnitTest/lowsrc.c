/***********************************************************************/
/*                                                                     */
/*  FILE        :lowsrc.c                                              */
/*  DATE        :Fri, May 28, 2021                                     */
/*  DESCRIPTION :Program of I/O Stream                                 */
/*  CPU TYPE    :SH7780                                                */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.19).    */
/*  NOTE:THIS IS A TYPICAL EXAMPLE.                                    */
/***********************************************************************/
                  



#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "typedefine.h"
#include "lowsrc.h"

_SINT open(_SBYTE *name, _SINT mode, _SINT flg);
_SINT close(_SINT fileno);
_SINT read(_SINT fileno, _SBYTE *buf, _UINT count);
_SINT write(_SINT fileno, _SBYTE *buf, _UINT count);
_SDWORD lseek(_SINT fileno, _SDWORD offset, _SINT base);
void _INIT_IOLIB(void);
void _CLOSEALL(void);


/* ファイル番号 */

#define STDIN  0        /* 標準入力      （コンソール） */
#define STDOUT 1        /* 標準出力      （コンソール） */
#define STDERR 2        /* 標準エラー出力（コンソール） */

#define FLMIN  0               /* 最小のファイル番号 */
#define FLMAX  (IOSTREAM-1)    /* 最大のファイル番号 */

/* ファイルのフラグ */

#define O_RDONLY 0x0001     /* 読み込み専用 */
#define O_WRONLY 0x0002     /* 書き出し専用 */
#define O_RDWR   0x0004     /* 読み書き両用 */

/* 特殊文字コード */

#define CR 0x0d     /* 復帰     */
#define LF 0x0a     /* 改行     */

const _SINT _nfiles = IOSTREAM;
struct _iobuf _iob[IOSTREAM];
_UBYTE sml_buf[IOSTREAM];


/*************************************************************************/
/* 参照関数の宣言：                                                      */
/* シミュレータ・デバッガでコンソールへの文字入出力を行う                */
/*   アセンブリプログラムの参照                                          */
/*************************************************************************/
extern void charput(_SBYTE);     /* 一文字出力処理     */
extern _SBYTE charget(void);     /* 一文字入力処理     */

/*************************************************************************/
/* 静的変数の定義：                                                      */
/* 低水準インタフェースルーチンで使用する静的変数の定義                  */
/*************************************************************************/
_SBYTE flmod[IOSTREAM];      /* オープンしたファイルのモード設定場所  */

/*************************************************************************/
/*  open:ファイルのオープン                                              */
/*        リターン値：ファイル番号（成功）                               */
/*                    -1          （失敗）                               */
/*************************************************************************/
_SINT open(_SBYTE *name,               /* ファイル名         */
     _SINT  mode,                      /* ファイルのモード   */
     _SINT  flg)                       /* 未使用             */
{
       /* ファイル名に従ってモードをチェックし、ファイル番号を返す */

       if(strcmp(name,"stdin")==0){          /* 標準入力ファイル   */
             if((mode&O_RDONLY)==0){
                      return -1;
             }
             flmod[STDIN] = mode;
             return STDIN;
       }

       else if(strcmp(name,"stdout")==0){   /* 標準出力ファイル */
             if((mode&O_WRONLY)==0){
                      return -1;
             }
             flmod[STDOUT] = mode;
             return STDOUT;
       }

       else if(strcmp(name,"stderr")==0){   /* 標準エラー出力ファイル */
             if((mode&O_WRONLY)==0){
                      return -1;
             }
             flmod[STDERR] = mode;
             return STDERR;
       }

       else {
             return -1;     /* エラー */
       }
}

/*************************************************************************/
/*  close:ファイルのクローズ                                             */
/*       リターン値：0          （成功）                                 */
/*                   -1         （失敗）                                 */
/*************************************************************************/
_SINT close(_SINT fileno)              /* ファイル番号 */
{
       if((fileno<FLMIN) || (FLMAX<fileno)){ /* ファイル番号の範囲チェック */
             return -1;
       }
       flmod[fileno] = 0;              /* ファイルのモードリセット */
       return 0;
}

/*************************************************************************/
/*  read:データの読み込み                                                */
/*        リターン値：実際に読み込んだ文字数 （成功）                    */
/*        		      -1 （失敗）                                        */
/*************************************************************************/
_SINT read(_SINT fileno,          /* ファイル番号           */
     _SBYTE *buf,                 /* 転送先バッファアドレス */
     _UINT count)                 /* 読み込み文字数         */
{
       _UINT i;

       /* ファイル番号に従ってモードをチェックし、一文字づつ入力してバッファに格納 */

       if((flmod[fileno]&O_RDONLY) || (flmod[fileno]&O_RDWR)){
             for(i = count; i > 0u; i--){
                   *buf = charget();
                   if(*buf==CR){              /* 改行文字の置き換え */
                         *buf = LF;
                   }
                   buf++;
             }
             return count;
       }
       else {
             return -1;
       }
}
 
/*************************************************************************/
/*  write:データの書き出し                                               */
/*  	リターン値：実際に書き出した文字数  （成功）                     */
/*  		        -1  （失敗）                                         */
/*************************************************************************/
_SINT write(_SINT fileno,              /* ファイル番号           */
     _SBYTE *buf,                      /* 転送元バッファアドレス */
     _UINT count)                      /* 書き出し文字数         */
{
       _UINT i;
       _SBYTE c;

       /* ファイル番号に従ってモードをチェックし、一文字づつ出力 */

       if((flmod[fileno]&O_WRONLY) || (flmod[fileno]&O_RDWR)){
             for(i = count; i > 0u; i--){
                   c = *buf++;
                   charput(c);
             }
             return count;
       }
       else {
             return -1;
       }
}

/******************************************************************************/
/*  lseek:ファイルの読み込み／書き出し位置の設定                              */
/*    リターン値：読み込み／書き出し位置のファイル先頭からのオフセット（成功）*/
/*                -1  （失敗）                                                */
/*      (コンソール入出力では、lseekはサポートしていません)                   */
/******************************************************************************/
_SDWORD lseek(_SINT fileno,            /* ファイル番号           */
       _SDWORD offset,                 /* 読み込み／書き出し位置 */
       _SINT base)                     /* オフセットの起点       */
{
       return -1L;
}

/****************************************************************************/
/* _INIT_IOLIB                                                              */
/****************************************************************************/
void _INIT_IOLIB(void)
{
       FILE *fp;

       for(fp = _iob; fp < _iob+_nfiles; fp++){
             fp->_bufptr = NULL;
             fp->_bufcnt = 0L;
             fp->_buflen = 0L;
             fp->_bufbase = NULL;
             fp->_ioflag1 = 0;
             fp->_ioflag2 = 0;
             fp->_iofd = 0;
       }

       if(freopen("stdin", "r", stdin)==NULL){
             stdin->_ioflag1 = 0xff;
       }
       stdin->_ioflag1 |= _IOUNBUF;

       if(freopen("stdout", "w", stdout)==NULL){
             stdout->_ioflag1 = 0xff;
       }
       stdout->_ioflag1 |= _IOUNBUF;

       if(freopen("stderr", "w", stderr)==NULL){
             stderr->_ioflag1 = 0xff;
       }
       stderr->_ioflag1 |= _IOUNBUF;
}

/****************************************************************************/
/* _CLOSEALL                                                                */
/****************************************************************************/
void _CLOSEALL(void)
{
       _SINT i;

       for(i = 0; i < _nfiles; i++){
             if(_iob[i]._ioflag1 & (_IOREAD | _IOWRITE | _IORW )){
                   fclose(&_iob[i]);
             }
       }
}
