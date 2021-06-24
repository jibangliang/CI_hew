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


/* �t�@�C���ԍ� */

#define STDIN  0        /* �W������      �i�R���\�[���j */
#define STDOUT 1        /* �W���o��      �i�R���\�[���j */
#define STDERR 2        /* �W���G���[�o�́i�R���\�[���j */

#define FLMIN  0               /* �ŏ��̃t�@�C���ԍ� */
#define FLMAX  (IOSTREAM-1)    /* �ő�̃t�@�C���ԍ� */

/* �t�@�C���̃t���O */

#define O_RDONLY 0x0001     /* �ǂݍ��ݐ�p */
#define O_WRONLY 0x0002     /* �����o����p */
#define O_RDWR   0x0004     /* �ǂݏ������p */

/* ���ꕶ���R�[�h */

#define CR 0x0d     /* ���A     */
#define LF 0x0a     /* ���s     */

const _SINT _nfiles = IOSTREAM;
struct _iobuf _iob[IOSTREAM];
_UBYTE sml_buf[IOSTREAM];


/*************************************************************************/
/* �Q�Ɗ֐��̐錾�F                                                      */
/* �V�~�����[�^�E�f�o�b�K�ŃR���\�[���ւ̕������o�͂��s��                */
/*   �A�Z���u���v���O�����̎Q��                                          */
/*************************************************************************/
extern void charput(_SBYTE);     /* �ꕶ���o�͏���     */
extern _SBYTE charget(void);     /* �ꕶ�����͏���     */

/*************************************************************************/
/* �ÓI�ϐ��̒�`�F                                                      */
/* �ᐅ���C���^�t�F�[�X���[�`���Ŏg�p����ÓI�ϐ��̒�`                  */
/*************************************************************************/
_SBYTE flmod[IOSTREAM];      /* �I�[�v�������t�@�C���̃��[�h�ݒ�ꏊ  */

/*************************************************************************/
/*  open:�t�@�C���̃I�[�v��                                              */
/*        ���^�[���l�F�t�@�C���ԍ��i�����j                               */
/*                    -1          �i���s�j                               */
/*************************************************************************/
_SINT open(_SBYTE *name,               /* �t�@�C����         */
     _SINT  mode,                      /* �t�@�C���̃��[�h   */
     _SINT  flg)                       /* ���g�p             */
{
       /* �t�@�C�����ɏ]���ă��[�h���`�F�b�N���A�t�@�C���ԍ���Ԃ� */

       if(strcmp(name,"stdin")==0){          /* �W�����̓t�@�C��   */
             if((mode&O_RDONLY)==0){
                      return -1;
             }
             flmod[STDIN] = mode;
             return STDIN;
       }

       else if(strcmp(name,"stdout")==0){   /* �W���o�̓t�@�C�� */
             if((mode&O_WRONLY)==0){
                      return -1;
             }
             flmod[STDOUT] = mode;
             return STDOUT;
       }

       else if(strcmp(name,"stderr")==0){   /* �W���G���[�o�̓t�@�C�� */
             if((mode&O_WRONLY)==0){
                      return -1;
             }
             flmod[STDERR] = mode;
             return STDERR;
       }

       else {
             return -1;     /* �G���[ */
       }
}

/*************************************************************************/
/*  close:�t�@�C���̃N���[�Y                                             */
/*       ���^�[���l�F0          �i�����j                                 */
/*                   -1         �i���s�j                                 */
/*************************************************************************/
_SINT close(_SINT fileno)              /* �t�@�C���ԍ� */
{
       if((fileno<FLMIN) || (FLMAX<fileno)){ /* �t�@�C���ԍ��͈̔̓`�F�b�N */
             return -1;
       }
       flmod[fileno] = 0;              /* �t�@�C���̃��[�h���Z�b�g */
       return 0;
}

/*************************************************************************/
/*  read:�f�[�^�̓ǂݍ���                                                */
/*        ���^�[���l�F���ۂɓǂݍ��񂾕����� �i�����j                    */
/*        		      -1 �i���s�j                                        */
/*************************************************************************/
_SINT read(_SINT fileno,          /* �t�@�C���ԍ�           */
     _SBYTE *buf,                 /* �]����o�b�t�@�A�h���X */
     _UINT count)                 /* �ǂݍ��ݕ�����         */
{
       _UINT i;

       /* �t�@�C���ԍ��ɏ]���ă��[�h���`�F�b�N���A�ꕶ���Â��͂��ăo�b�t�@�Ɋi�[ */

       if((flmod[fileno]&O_RDONLY) || (flmod[fileno]&O_RDWR)){
             for(i = count; i > 0u; i--){
                   *buf = charget();
                   if(*buf==CR){              /* ���s�����̒u������ */
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
/*  write:�f�[�^�̏����o��                                               */
/*  	���^�[���l�F���ۂɏ����o����������  �i�����j                     */
/*  		        -1  �i���s�j                                         */
/*************************************************************************/
_SINT write(_SINT fileno,              /* �t�@�C���ԍ�           */
     _SBYTE *buf,                      /* �]�����o�b�t�@�A�h���X */
     _UINT count)                      /* �����o��������         */
{
       _UINT i;
       _SBYTE c;

       /* �t�@�C���ԍ��ɏ]���ă��[�h���`�F�b�N���A�ꕶ���Âo�� */

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
/*  lseek:�t�@�C���̓ǂݍ��݁^�����o���ʒu�̐ݒ�                              */
/*    ���^�[���l�F�ǂݍ��݁^�����o���ʒu�̃t�@�C���擪����̃I�t�Z�b�g�i�����j*/
/*                -1  �i���s�j                                                */
/*      (�R���\�[�����o�͂ł́Alseek�̓T�|�[�g���Ă��܂���)                   */
/******************************************************************************/
_SDWORD lseek(_SINT fileno,            /* �t�@�C���ԍ�           */
       _SDWORD offset,                 /* �ǂݍ��݁^�����o���ʒu */
       _SINT base)                     /* �I�t�Z�b�g�̋N�_       */
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