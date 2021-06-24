#line 1 "C:\\CI_hew\\UnitTest_Workspace\\UnitTest\\stubs/1.p"

#define CPPTEST_INSTRUMENTATION


#include "cpptest_i.h"
#include "C:\CI_hew\UnitTest_Workspace\.cpptest\UnitTest\unit-data\current_tubf179707\cpptest_stubconfig.h"


struct __CPTR_Dummy_Type {
    char nonEmpty;
};











#define _cpptest_strdata_var(id, bogus) _cpptest_strdata[id]
static 
const char* _cpptest_strdata[] = {
    0,
    0
};

#if defined(CPPTEST_ENABLE_ALL_STUBS)
# define CPPTEST_STUB_func
# define CPPTEST_USER_STUB_func
#endif
#if defined(CPPTEST_STUB_func)
# if defined(CPPTEST_SAFE_STUB_func)
#  define CppTest_Stub__Call_func_func CppTest_Safe_Stub_func_func
#  define CppTest_Stub__Adl_Call_func_func func
#  if defined(CPPTEST_UNDEFINED_func) 
#   define CppTest_Safe_Stub_func_func func
#  endif
# elif defined(CPPTEST_AUTO_STUB_func)
#  define CppTest_Stub__Call_func_func CppTest_Auto_Stub_func_func
#  define CppTest_Stub__Adl_Call_func_func func
#  if defined(CPPTEST_UNDEFINED_func) 
#   define CppTest_Auto_Stub_func_func func
#  endif
# else
#  define CppTest_Stub__Call_func_func CppTest_Stub_func_func
#  define CppTest_Stub__Adl_Call_func_func func
#  if defined(CPPTEST_UNDEFINED_func) 
#   define CppTest_Stub_func_func func
#  endif
# endif
#else
# define CppTest_Stub__Call_func_func func
# define CppTest_Stub__Adl_Call_func_func func
#endif

EXTERN_C struct CppTest_StubInfoStruct CppTest_StubInfo_user_func_1;
#line 11 "C:\\Program Files\\Parasoft\\C++test\\10.5\\engine\\runtime\\include\\cpptest_pre.h"
struct CppTest_Dummy_Type { 
char nonEmpty; 
}; 

struct CppTest_Safe_Dummy_Type { 
char nonEmpty; 
}; 

struct CppTest_Auto_Dummy_Type { 
char nonEmpty; 
}; 
#line 39
typedef struct CppTest_Dummy_Type CppTest_Dummy; 
typedef struct CppTest_Safe_Dummy_Type CppTest_Safe_Dummy; 
typedef struct CppTest_Auto_Dummy_Type CppTest_Auto_Dummy; 
#line 20 "C:\\\\Program Files (x86)\\\\Renesas\\\\Hew\\\\Tools\\\\Renesas\\\\SH\\\\9_4_3\\\\Include\\\\stddef.h"
typedef int ptrdiff_t; 




typedef unsigned long size_t; 
#line 32 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\cpptest_stddef.h"
typedef size_t CppTest_SizeType; 
#line 69 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\cpptest_common.h"
typedef 
#line 62
struct { 

char *ptr; 

CppTest_SizeType len; 

CppTest_SizeType size; 
} CppTestExpandableString; 
#line 78
typedef 
#line 71
struct CppTestListElement_s { 

char *data; 

struct CppTestListElement_s *next; 

struct CppTestListElement_s *prev; 
} CppTestListElement; 
#line 85
typedef 
#line 80
struct { 

CppTestListElement *head; 

CppTestListElement *tail; 
} CppTestList; 
#line 92
typedef 
#line 87
struct { 

const char *name; 

const char *value; 
} CppTest_Property; 


typedef CppTestListElement *CppTestListIterator; 
typedef const CppTestListElement *CppTestListConstIterator; 

typedef unsigned long CppTest_ULong; 
#line 106
extern void cpptestExpandableStringInit(CppTestExpandableString * es, CppTest_SizeType initSize); 



extern void cpptestExpandableStringClear(CppTestExpandableString * es); 



extern void cpptestExpandableStringExpand(CppTestExpandableString * es); 



extern void cpptestExpandableStringAppend(CppTestExpandableString * es, const char * str, CppTest_SizeType len); 



extern void cpptestExpandableStringAppendChar(CppTestExpandableString * es, char c); 



extern void cpptestExpandableStringDispose(CppTestExpandableString * es); 



extern void cpptestListInit(CppTestList * l); 


typedef void (*ListElementDestructor)(char * data, void * additionalParameter); 



extern void cpptestListClear(CppTestList * l, ListElementDestructor destructor, void * additionalParameter); 


extern CppTestListIterator cpptestListRemove(CppTestList * l, CppTestListIterator it); 


extern void cpptestListPushFront(CppTestList * l, char * data); 


extern char *cpptestListFrontElement(const CppTestList * l); 


extern void cpptestListPushBack(CppTestList * l, char * data); 


extern CppTestListIterator cpptestListGetIterator(const CppTestList * l); 


extern char *cpptestListIteratorElement(CppTestListConstIterator it); 


extern CppTestListIterator cpptestListIteratorNext(CppTestListConstIterator it); 


extern int cpptestListIteratorEnd(CppTestListConstIterator it); 


extern char *cpptestStrDup(const char * str); 


extern unsigned cpptestStrLen(const char * str); 


extern int cpptestIsSpace(int c); 


extern int cpptestToLower(int c); 


extern int cpptestStrCmp(const char * str1, const char * str2); 


extern int cpptestStrNCmp(const char * str1, const char * str2, unsigned n); 


extern int cpptestStrCaseCmp(const char * str1, const char * str2); 


extern unsigned cpptestCharToDigit(char c); 


extern const char *cpptestStrToInteger(const char * str, long * integer); 


extern const char *cpptestStrToUInteger(const char * str, unsigned long * uinteger); 


extern const char *cpptestStrToBool(const char * str, int * result); 


extern void cpptestIntToBitStrMask(char * bitString, unsigned value, unsigned mask); 
#line 225 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\cpptest_common.h"
extern void *cpptestMalloc(CppTest_SizeType size); 


extern void *cpptestAlloc(CppTest_SizeType size); 


extern void cpptestFree(void * str); 


extern void *cpptestMemCpy(void * dest, const void * src, CppTest_SizeType size); 


extern void *cpptestMemset(void * ptr, int c, CppTest_SizeType num); 




extern char *cpptestMarshallWord(short data, char * buf); 


extern char *cpptestMarshallDWord(int data, char * buf); 
#line 255 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\cpptest_common.h"
typedef struct CppTestTreeNode *CppTestTree; 
#line 261
extern void cpptestTreeInit(CppTestTree * tree); 
#line 267
extern void cpptestTreeClear(CppTestTree * tree); 
#line 274
extern int cpptestTreeFind(CppTestTree * tree, const char * key, void ** ret); 
#line 280
extern void cpptestTreeAdd(CppTestTree * tree, const char * key, void * value); 

typedef void CppTestTreeCallBackRoutine(const char * key, void * value); 
typedef CppTestTreeCallBackRoutine *CppTestTreeCallBack; 
#line 289
extern void cpptestTreeTraverseInorder(const CppTestTree * tree, const CppTestTreeCallBack callback); 
#line 297
extern void cpptestAddProperty(const char * name, const char * value); 
#line 310
extern void cpptestParseAndAddProperties(char * properties); 
#line 316
extern int cpptestHasProperty(const char * name); 
#line 323
extern const char *cpptestGetProperty(const char * name); 
#line 330
extern const char *cpptestGetPropertyEx(const char * name, const char * defaultValue); 
#line 337
extern long cpptestGetIntProperty(const char * name); 
#line 344
extern long cpptestGetIntPropertyEx(const char * name, long defaultValue); 
#line 351
extern unsigned long cpptestGetUIntProperty(const char * name); 
#line 358
extern unsigned long cpptestGetUIntPropertyEx(const char * name, unsigned long defaultValue); 
#line 365
extern int cpptestGetBoolProperty(const char * name); 
#line 372
extern int cpptestGetBoolPropertyEx(const char * name, int defaultValue); 
#line 378
extern const char *cpptestPathRelativeToAbsolute(const char * relPath, const char * relToFileName); 
#line 17 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\cpptest_system.h"
typedef 
#line 12
struct { 
void *(*mallocFunc)(CppTest_SizeType size); 
void *(*callocFunc)(CppTest_SizeType elements, CppTest_SizeType elem_size); 
void *(*reallocFunc)(void * ptr, CppTest_SizeType new_size); 
void (*freeFunc)(void * ptr); 
} CppTest_System; 
#line 16 "C:\\\\Program Files (x86)\\\\Renesas\\\\Hew\\\\Tools\\\\Renesas\\\\SH\\\\9_4_3\\\\Include\\\\float.h"
extern const float _FLT_MAX_VAL; 
extern const float _FLT_MIN_VAL; 
extern const double _DBL_MAX_VAL; 
extern const double _DBL_MIN_VAL; 
extern const long double _LDBL_MAX_VAL; 
extern const long double _LDBL_MIN_VAL; 
#line 19 "C:\\\\Program Files (x86)\\\\Renesas\\\\Hew\\\\Tools\\\\Renesas\\\\SH\\\\9_4_3\\\\Include\\\\setjmp.h"
typedef int jmp_buf[38]; 




typedef int jmp_buf_a[54]; 
#line 30
extern int setjmp(jmp_buf); 
extern void longjmp(jmp_buf, int); 

extern int setjmp_a(jmp_buf); 
extern void longjmp_a(jmp_buf, int); 



extern volatile int _errno; 
#line 215 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\cpptest_runtime_u.h"
typedef unsigned CppTest_ErrorCode; 
#line 240 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\cpptest_runtime_u.h"
typedef void (*__CPTR_TestCasePtr)(void); 


typedef void (*__CPTR_TestCaseBreakFuncPtr)(void); 

struct _CONTEXT; 
struct _EXCEPTION_RECORD; 

struct CppTest_DataSource; 
struct CppTest_DsCsvData; 

typedef struct CppTestEnumeratorStruct CppTestEnumerator; 
struct CppTestEnumeratorStruct { 

const char *name; 
long value; 
}; 

typedef struct CppTestEnumInfoStruct CppTestEnumInfo; 
struct CppTestEnumInfoStruct { 

const char *name; 
const char *scope; 
int scoped; 
CppTestEnumerator *enumerators; 
}; 

typedef struct CppTestEnumTypeStringStruct CppTestEnumTypeString; 
struct CppTestEnumTypeStringStruct { 

const char *str; 
CppTestEnumInfo *enumInfo; 
}; 

typedef struct CppTest_CheckerStruct CppTest_Checker; 
typedef struct CppTest_StubInfoStruct CppTest_StubInfo; 
typedef struct CppTest_StubCallInfoStruct CppTest_StubCallInfo; 


typedef void (*CppTest_Checker_Callback)(CppTest_StubInfo * stubInfo, void * data); 
typedef void (*CppTest_Stub_Callback)(void); 


struct CppTest_CheckerStruct { 

CppTest_Checker *next; 
CppTest_Checker_Callback checker; 
void *data; 
}; 

struct CppTest_StubInfoStruct { 

const char *userId; 
CppTest_Stub_Callback callbackPtr; 
int lastCallNo; 
unsigned flags; 
CppTest_Checker *firstChecker; 
CppTest_Checker *lastChecker; 
}; 

struct CppTest_StubCallInfoStruct { 

CppTest_StubInfo *stubInfo; 
int callNo; 
}; 


extern CppTest_StubCallInfo *stubCallInfo; 
#line 350 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\cpptest_runtime_u.h"
extern const char *cpptestGetCurrentTestCaseName(void); 
#line 356
extern const char *cpptestGetCurrentTestSuiteName(void); 
#line 362
extern unsigned cpptestGetCurrentTestCaseIteration(void); 
#line 376 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\cpptest_runtime_u.h"
extern const char *cpptestGetCurrentTestCaseFile(void); 
#line 382
extern unsigned cpptestGetCurrentTestCaseLine(void); 
#line 389
extern void cpptestCommunicationBegin(void); 


extern void cpptestCommunicationEnd(void); 


extern void cpptestTestRunnerBegin(void); 


extern void cpptestTestRunnerEnd(void); 


extern void cpptestTestSuiteBegin(const char * name, const char * file, unsigned line); 



extern void cpptestTestSuiteEnd(void); 


extern void cpptestTestCaseBegin(const char * name, CppTest_ErrorCode expectedErrorCode, unsigned expectedErrorCodeMask, int isCpp, const char * file, unsigned line); 




extern void cpptestTestCaseEnd(void); 


extern void cpptestDsForCurrentTestCaseInitialized(struct CppTest_DataSource * dataSource); 


extern void cpptestDsTestCaseBegin(const char * name, CppTest_ErrorCode expectedErrorCode, unsigned expectedErrorCodeMask, int isCpp, const char * file, unsigned line); 


extern void cpptestDsTestCaseEnd(void); 


extern void cpptestDsTestCaseIterationBegin(unsigned iteration, const char * signature); 


extern void cpptestDsTestCaseIterationEnd(void); 
#line 446
extern const char *cpptestFormatBuffer(char * buffer, const char * format, ...); 
#line 454
extern const char *CppTest_Format(const char * format, ...); 
#line 465
extern int cpptestCharPtrsEqual(const char * expected, const char * actual); 
#line 485 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\cpptest_runtime_u.h"
extern void cpptestUnhandledStructuredExceptionInThread(unsigned code); 

extern int cpptestUnhandledStructuredExceptionInTestCase(unsigned code); 

extern void cpptestUnhandledCppExceptionInThread(void); 

extern void cpptestNoExpectedCppExceptionInTestCase(const char * e); 

extern void cpptestUnhandledStdExceptionInTestCase(const char * what); 

extern void cpptestUnhandledCppExceptionInTestCase(void); 
#line 503
extern void cpptestSignalFound(int sigNo); 


extern __CPTR_TestCaseBreakFuncPtr cpptestGetTestCaseBreakFuncPtr(void); 


extern __CPTR_TestCaseBreakFuncPtr cpptestSetTestCaseBreakFuncPtr(__CPTR_TestCaseBreakFuncPtr funcpPtr); 
#line 671
extern int CppTest_IsCurrentTestCase(const char * id); 
#line 677
extern const char *CppTest_GetCurrentTestCaseName(void); 
#line 683
extern const char *CppTest_GetCurrentTestSuiteName(void); 
#line 689
typedef struct CppTest_StreamRedirectStruct CppTest_StreamRedirect; 
typedef void (*CppTest_ClearFlush)(void); 
typedef int (*CppTest_StreamDup)(long, int); 
#line 698
void CppTest_flushStdOutput(void); 
#line 706
void CppTest_flushStdError(void); 
#line 713
void CppTest_clearStdInput(void); 

int CppTest_streamDup(long, int); 
#line 782
extern CppTest_StreamRedirect *CppTest_StreamRedirectInput(int fd, const char * value, CppTest_ClearFlush ptr, CppTest_StreamDup ptr1); 
#line 797
extern CppTest_StreamRedirect *CppTest_StreamRedirectNInput(int fd, const char * value, unsigned size, CppTest_ClearFlush ptr, CppTest_StreamDup ptr1); 
#line 809
extern CppTest_StreamRedirect *CppTest_StreamRedirectOutput(int fd, CppTest_ClearFlush ptr); 
#line 824
extern int CppTest_StreamCompare(CppTest_StreamRedirect * redirect, const char * value); 
#line 842
extern int CppTest_StreamNCompare(CppTest_StreamRedirect * redirect, const char * value, unsigned size); 
#line 855
extern int CppTest_StreamSearch(CppTest_StreamRedirect * redirect, const char * pattern); 
#line 868
extern int CppTest_StreamNSearch(CppTest_StreamRedirect * redirect, const char * pattern, unsigned size); 
#line 882
extern char *CppTest_StreamReadData(CppTest_StreamRedirect * redirect, unsigned * len); 
#line 892
extern void CppTest_StreamReset(CppTest_StreamRedirect * redirect); 
#line 900
extern void CppTest_ClearRedirects(void); 
#line 909
extern struct CppTest_DataSource *cpptestGetCurrentDataSource(void); 
#line 915
extern void cpptestIgnoreCurrStackElement(void); 


typedef void (*CppTestThreadInitCallback)(void); 




extern void cpptestSetThreadInitCallback(CppTestThreadInitCallback callback); 
#line 929
extern void cpptestInitializeRuntime(CppTestThreadInitCallback threadInitCallback, CppTest_Property * properties, CppTestEnumTypeString * enumTypeStrings, CppTest_StubInfo ** stubInfos, CppTest_System * system); 
#line 940
extern void cpptestFinalizeRuntime(void); 
#line 948
extern void cpptestCheckMemoryLeaks(const char * file, unsigned line, int isAssert); 
#line 955
typedef 
#line 952
struct { 
long seconds; 
long nanoseconds; 
} CppTest_Time; 
#line 963
extern void cpptestCheckTimeout(void); 
#line 969
extern CppTest_Time CppTest_TimeInit(long seconds, long nanoseconds); 
#line 976
extern CppTest_Time CppTest_TimeCurrent(void); 




extern CppTest_Time CppTest_TimeDiff(CppTest_Time t1, CppTest_Time t2); 
#line 990
extern int CppTest_TimeCompare(CppTest_Time t1, CppTest_Time t2); 
#line 996
const char *CppTestCallProgramWrapper(const char * program, int * pResult, const char * param1, const char * param2, const char * param3); 
#line 1003
extern void cpptestUnhandledExceptionTerminate(void); 
#line 1010
extern void cpptestAssertException(const char * file, unsigned line, const char * message, const char * arg1, const char * arg2, const char * arg3, const char * arg4, int kind); 


void CppTest_InitializeRuntime(void); 

void CppTest_FinalizeRuntime(void); 

void CppTest_Initialize(void); 

void CppTest_Finalize(void); 

extern char **CppTest_CmdLineToArgv(const char * cmdLine, int * argc); 

extern void CppTest_FreeArgv(int argc, char * argv[]); 
#line 1033 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\cpptest_runtime_u.h"
int CppTest_Main(int argc, char * argv[]); 
#line 1041
void CppTest_ModuleMain(int startAfter); 

extern const char *cpptestStringPool(int id, const char * str); 

extern void cpptestValidateTriggerName(const char * triggerName, const char * file, unsigned line); 

extern CppTest_StubInfo *cpptestGetStubInfo(const char * userId, unsigned context, const char * file, unsigned line); 

extern void cpptestRegisterStubCallback(const char * userId, CppTest_Stub_Callback callbackPtr, const char * file, unsigned line); 

extern void cpptestUnregisterStubCallback(const char * userId, const char * file, unsigned line); 

extern void cpptestUnregisterAllStubCallbacks(void); 

extern int cpptestCallStubCallback(const char * userId, ...); 

extern void cpptestCallTriggerCallback(const char * userId); 

extern int cpptestIsOriginalDefinitionAvailable(void); 

extern int cpptestHasStubCallback(const char * userId, const char * file, unsigned line); 

extern CppTest_StubInfo *cpptestStubCalled(CppTest_StubInfo * stubInfo); 

extern CppTest_Stub_Callback cpptestStubInvokeCallback(CppTest_StubCallInfo * sci); 

extern CppTest_StubInfo *cpptestStubInfo(const char * userId); 

int CppTest_IsCurrentContext(const char * context); 
#line 1081 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\cpptest_runtime_u.h"
extern void *cpptestDsMalloc(CppTest_SizeType size); 


extern void cpptestDsFree(void * str); 


extern void cpptestDsCsvError(CppTest_ErrorCode errorCode, const char * err, const char * file, unsigned line, unsigned column); 



extern void cpptestDsCsvErrorOpeningFile(const char * err, const char * file); 


extern void cpptestNoDsError(const char * dataSourceName); 


extern void cpptestDsErrorInValue(const char * value); 


extern void cpptestDsUnknownValue(const char * name); 


extern int cpptestDsNotInitialized(void); 


extern int cpptestDsMethodNotInitialized(const char * method); 


extern void cpptestAssertCall(const char * message, const char * file, unsigned line); 


extern void cpptestExitCall(int exitCode); 


extern void cpptestAbortCall(void); 


extern void cpptestRiseCall(int exitCode); 
#line 1127
extern void cpptestTooLargeStackTrace(unsigned maxAllowedStackTraceDepth); 



extern void cpptestTestCaseNotValidated(const char * file, unsigned line); 


extern void cpptestTriggerError(const char * triggerName, unsigned errorCode, const void * details, const char * file, unsigned line); 


extern void cpptestReport(const char * txt, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line, int reportStackTrace); 


extern void cpptestReportBool(const char * txt, int value, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 


extern void cpptestReportInteger(const char * txt, long value, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 


extern void cpptestReportUInteger(const char * txt, unsigned long value, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 


extern void cpptestReportFloat(const char * txt, double value, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 


extern void cpptestReportCStr(const char * txt, const char * value, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 


extern void cpptestReportCStrN(const char * txt, const char * value, unsigned maxSize, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 


extern void cpptestReportMemBuffer(const char * txt, const void * value, unsigned size, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 


extern void cpptestReportPtr(const char * txt, int isNull, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 


extern void cpptestReportEnum(const char * txt, CppTestEnumInfo * enumInfo, long value, CppTest_StubCallInfo * stubCallInfo, int isCpp, const char * file, unsigned line); 



extern void cpptestTriggerReport(const char * triggerName, const char * txt, const char * file, unsigned line); 


extern void cpptestPostConditionBool(const char * valueString, int value, const char * file, unsigned line); 


extern void cpptestPostConditionInteger(const char * valueString, long value, const char * file, unsigned line); 


extern void cpptestPostConditionUInteger(const char * valueString, unsigned long value, const char * file, unsigned line); 


extern void cpptestPostConditionFloat(const char * valueString, double value, const char * file, unsigned line); 


extern void cpptestPostConditionCStr(const char * valueString, const char * value, const char * file, unsigned line); 


extern void cpptestPostConditionCStrN(const char * valueString, const char * value, unsigned maxSize, const char * file, unsigned line); 


extern void cpptestPostConditionMemBuffer(const char * valueString, const void * value, unsigned size, const char * file, unsigned line); 


extern void cpptestPostConditionPtr(const char * valueString, int isNull, const char * file, unsigned line); 


extern void cpptestPostConditionExternal(const char * userMessage, const char * ret, const char * file, unsigned line); 


extern void cpptestPostConditionEnum(CppTestEnumInfo * enumInfo, const char * valueString, long value, int isCpp, const char * file, unsigned line); 



extern void cpptestExternalProcessError(CppTest_ErrorCode errorCode, const char * err); 


extern void cpptestExternalProcessErrorFull(CppTest_ErrorCode errorCode, const char * err, const char * program, const char * param1, const char * param2, const char * param3); 
#line 1211
extern int cpptestAssertion(int value, const char * userMessage, const char * conditionStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 



extern int cpptestBitAssertion(int value, unsigned mask, unsigned expected, unsigned actual, const char * userMessage, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 



extern int cpptestEqualAssertion(int value, const char * userMessage, const char * expectedStr, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 



extern int cpptestBoolEqualAssertion(int value, int expected, int actual, const char * userMessage, const char * expectedStr, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 



extern int cpptestIntegerEqualAssertion(int value, long expected, long actual, int hasDelta, long delta, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 
#line 1233
extern int cpptestUIntegerEqualAssertion(int value, unsigned long expected, unsigned long actual, int hasDelta, unsigned long delta, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 
#line 1239
extern int cpptestFloatEqualAssertion(int value, double expected, double actual, int hasDelta, double delta, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 
#line 1245
extern int cpptestFloatFmtEqualAssertion(int value, double actual, const char * userMessage, const char * expectedStr, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 




extern int cpptestCstrEqualAssertion(int value, const char * expected, const char * actual, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 




extern int cpptestCstrNEqualAssertion(int value, const char * expected, const char * actual, unsigned maxSize, const char * userMessage, const char * expectedStr, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 




extern int cpptestMemBufferEqualAssertion(int value, const void * expected, const void * actual, unsigned size, const char * userMessage, const char * expectedStr, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 
#line 1266
extern int cpptestPtrEqualAssertion(int value, const void * expected, const void * actual, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 
#line 1280 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\cpptest_runtime_u.h"
extern int cpptestEnumEqualAssertion(int value, CppTestEnumInfo * enumInfo, long expected, long actual, const char * userMessage, const char * expectedStr, const char * actualStr, CppTest_StubCallInfo * stubCallInfo, int isCpp, const char * file, unsigned line); 




extern int cpptestEqualAssertionFmt(int value, int hasDelta, unsigned * arrayIndex, const char * expectedStr, const char * actualStr, char * expectedFmt, char * actualFmt, char * deltaFmt, int size, int * snprintfResults, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 
#line 1292
extern void cpptestThrowAssertion(int value, const char * userMessage, const char * exceptionTypeStr, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 



extern void cpptestNoThrowAssertion(int value, const char * userMessage, CppTest_StubCallInfo * stubCallInfo, const char * file, unsigned line); 



extern void cpptestTriggerAssertion(const char * triggerName, const char * userMessage, const char * file, unsigned line); 


extern void cpptestNoExpectedExceptionInTestCase(const char * e); 


extern void cpptestStdExceptionInTestCase(const char * what); 


extern void cpptestExceptionInTestCase(void); 


extern void cpptestTestCaseDisabled(const char * name, const char * file, unsigned line); 



extern int cpptestCharPtrsNEqual(const char * expected, const char * actual, unsigned maxSize); 


extern int cpptestMemBuffersEqual(const void * expected, const void * actual, unsigned size); 


extern int cpptestFloatsFmtEqual(const char * expected, double actual); 


extern void cpptestTimeout(unsigned long timeout); 


extern void cpptestUserBreak(const char * file, unsigned line); 




extern jmp_buf *cpptestGetJmpBuf(void); 


extern void cpptestSetJmpCalled(int jmpCalled); 


extern int cpptestGetJmpCalled(void); 


extern int cpptestSetJmpReturn(int jmpReturn); 


extern int cpptestGetJmpReturn(void); 



typedef struct CppTestRuntimeCommandHandlerNodeStruct CppTestRuntimeCommandHandlerNode; 

struct CppTestRuntimeCommandHandlerNodeStruct { 

CppTestRuntimeCommandHandlerNode *prev; 

void (*handler)(unsigned commandId); 
}; 


extern void cpptestAddRuntimeCommandHandler(CppTestRuntimeCommandHandlerNode * handler); 


extern void cpptestExecuteRuntimeCommand(unsigned commandId); 


void cpptestTestCaseSlave(__CPTR_TestCasePtr tc); 


typedef struct CppTestExpectationStruct CppTestExpectation; 
typedef struct CppTestCallSequenceNodeStruct CppTestCallSequenceNode; 

struct CppTestCallSequenceNodeStruct { 

CppTest_StubInfo *stubInfo; 
int times; 
unsigned calls; 
CppTestCallSequenceNode *prev; 
CppTestCallSequenceNode *next; 
CppTestExpectation *expectation; 
}; 


struct CppTestExpectationStruct { 

CppTestExpectation *next; 
const char *file; 
unsigned line; 
unsigned reported; 
unsigned passed; 

void (*endOfCheckExpectation)(CppTestExpectation * expectation); 

union { 
struct { 
int min; 
int max; 
CppTest_StubInfo *stubInfo; 
int calls; 
} expectedCalls; 

struct { 
CppTestCallSequenceNode *first; 
CppTestCallSequenceNode *last; 
CppTestCallSequenceNode *it; 
int isLoop; 
int repeat; 
int inside; 
} sequence; 

} variant; 
}; 


void cpptestCreateCallExpectation(const char * funcId, int min, int max, const char * file, unsigned line); 


typedef struct CppTestCallSequenceExpectationStruct CppTestCallSequenceExpectation; 
struct CppTestCallSequenceExpectationStruct { 

CppTestCallSequenceExpectation *(*Add)(const char * funcId); 
CppTestCallSequenceExpectation *(*AddNTimes)(const char * funcId, int times); 
CppTestCallSequenceExpectation *(*AddAnyTimes)(const char * funcId); 
}; 

CppTestCallSequenceExpectation *cpptestCreateCallSequenceExpectation(int isLoop, const char * file, unsigned line); 


extern void cpptestCallExpectationAssertion(CppTestExpectation * expectation); 


extern void cpptestNullCallSequenceExpectationAssertion(CppTestExpectation * expectation, const char * funcId); 


extern void cpptestWrongCallSequenceExpectationAssertion(CppTestExpectation * expectation, const char * funcId, const char * expectedFuncId); 


extern void cpptestIncompleteCallSequenceExpectationAssertion(CppTestExpectation * expectation); 


extern void cpptestCallSequenceExpectationPassed(CppTestExpectation * expectation); 


extern void cpptestAddChecker(CppTest_StubInfo * stubInfo, CppTest_Checker * checker); 


extern void cpptestRemoveAllCheckers(void); 


extern void cpptestCallCheckers(CppTest_StubInfo * stubInfo); 


extern int CppTest_AtomicIncrement(int * value); 


extern CppTestEnumInfo *cpptestGetEnumInfo(int dummy, const char * enumTypeStr, const char * file, unsigned line); 


extern long cpptestGetEnumeratorValueFromTable(CppTestEnumInfo * enumInfo, const char * enumeratorStr, int isCpp, const char * file, unsigned line); 



extern const char *cpptestGetEnumeratorStrFromTable(CppTestEnumInfo * enumInfo, long value, int isCpp, const char * file, unsigned line); 



extern long cpptestGetEnumeratorValue(int dummy, const char * enumTypeStr, const char * enumeratorNameStr, int isCpp, const char * file, unsigned line); 



extern const char *cpptestGetEnumeratorStr(int dummy, const char * enumTypeStr, long value, int isCpp, const char * file, unsigned line); 
#line 41 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\cpptest_data_source.h"
typedef 
#line 16
struct CppTest_DataSource { 

const char *(*getMemBuffer)(struct CppTest_DataSource *, const char * name, unsigned * size); 
const char *(*getCStr)(struct CppTest_DataSource *, const char * name); 



long (*getInteger)(struct CppTest_DataSource *, const char * name); 
unsigned long (*getUInteger)(struct CppTest_DataSource *, const char * name); 
double (*getFloat)(struct CppTest_DataSource *, const char * name); 
int (*getBool)(struct CppTest_DataSource *, const char * name); 
char (*getChar)(struct CppTest_DataSource *, const char * name); 

int (*hasColumn)(struct CppTest_DataSource *, const char * name); 

int (*loadNextData)(struct CppTest_DataSource *); 
int (*hasMoreData)(struct CppTest_DataSource *); 
unsigned (*getIteration)(struct CppTest_DataSource *); 




void (*finalize)(struct CppTest_DataSource *); 

void *data; 
} CppTest_DataSource; 

typedef CppTest_DataSource *(*CppTest_GetDataSourceFPtr)(const char * dataSource, const char * testSuite); 
#line 52
extern CppTest_DataSource *CppTest_DsArray(const char ** data, int rows, int columns); 
extern CppTest_DataSource *CppTest_DsRepeat(int count); 
extern CppTest_DataSource *CppTest_Ds(const char * dataSourceName); 
#line 60
extern void CppTest_DsFinalize(struct CppTest_DataSource * ds); 

extern void CppTest_DsDumpInt(CppTestExpandableString * es, int i); 

extern const char *CppTest_DsGetMemBuffer(struct CppTest_DataSource * ds, const char * name, unsigned * size); 

extern long CppTest_DsGetInteger(struct CppTest_DataSource * ds, const char * name); 

extern unsigned long CppTest_DsGetUInteger(struct CppTest_DataSource * ds, const char * name); 

extern double CppTest_DsGetFloat(struct CppTest_DataSource * ds, const char * name); 

extern int CppTest_DsGetBool(struct CppTest_DataSource * ds, const char * name); 

extern char CppTest_DsGetChar(struct CppTest_DataSource * ds, const char * name); 

extern int CppTest_DsErrorHasMoreData(struct CppTest_DataSource * ds); 

extern const char *CppTest_DsErrorGetDataSignature(struct CppTest_DataSource * ds); 

extern unsigned CppTest_DsErrorGetIteration(struct CppTest_DataSource * ds); 

extern int CppTest_DsRepeatLoadNextData(struct CppTest_DataSource * ds); 

extern unsigned CppTest_DsRepeatGetIteration(struct CppTest_DataSource * ds); 

extern int CppTest_DsRepeatHasMoreData(struct CppTest_DataSource * ds); 
#line 94
extern void CppTest_DsRepeatFinalize(struct CppTest_DataSource * ds); 

extern struct CppTest_DataSource *CppTest_DsRepeat(int count); 

extern int CppTest_DsArrayLoadNextData(struct CppTest_DataSource * ds); 

extern unsigned CppTest_DsArrayGetIteration(struct CppTest_DataSource * ds); 

extern int CppTest_DsArrayHasMoreData(struct CppTest_DataSource * ds); 

extern int CppTest_DsArrayGetColumn(struct CppTest_DataSource * ds, const char * name); 

extern int CppTest_DsArrayHasColumn(struct CppTest_DataSource * ds, const char * name); 

extern const char *CppTest_DsArrayGetCStr(struct CppTest_DataSource * ds, const char * name); 
#line 118
extern void CppTest_DsArrayFinalize(struct CppTest_DataSource * ds); 

extern struct CppTest_DataSource *CppTest_DsArray(const char ** data, int rows, int columns); 
#line 169 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\cpptest_data_source.h"
extern struct CppTest_DataSource *CppTest_Ds(const char * dataSourceName); 
#line 22 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\trigger/c/common.h"
typedef void (*tgr_func_ptr)(); 

typedef struct tgr_value_s tgr_value; 

typedef struct tgr_type_vtbl *tgr_type_vtbl_ptr; 
typedef struct tgr_type *tgr_type_ptr; 
typedef struct tgr_value_s *tgr_value_ptr; 
typedef struct tgr_code *tgr_code_ptr; 
typedef struct tgr_code_helper *tgr_code_helper_ptr; 
typedef struct tgr_trigger_list *tgr_trigger_list_ptr; 
typedef struct tgr_arg *tgr_arg_ptr; 
typedef struct tgr_args *tgr_args_ptr; 
typedef struct tgr_runner *tgr_runner_ptr; 
typedef struct tgr_running_data *tgr_running_data_ptr; 
typedef struct tgr_runner_helper *tgr_runner_helper_ptr; 
typedef struct tgr_trigger *tgr_trigger_ptr; 
typedef struct tgr_class_definition *tgr_class_definition_ptr; 

typedef unsigned tgr_time; 


void *tgr_malloc(unsigned size); 


void tgr_free(void * ptr); 


unsigned tgr_strlen(const char * str); 


int tgr_strcmp(const char * str1, const char * str2); 


char *tgr_strdup(const char * str); 


tgr_time tgr_get_curr_time(void); 
#line 15 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\trigger/c/type.h"
struct tgr_type_vtbl { 

int (*is_integer)(tgr_value_ptr value); 

int (*is_floating)(tgr_value_ptr value); 

int (*is_pointer)(tgr_value_ptr value); 

int (*is_func_pointer)(tgr_value_ptr value); 

int (*is_object)(tgr_value_ptr value); 

int (*is_void)(tgr_value_ptr value); 

int (*is_error)(tgr_value_ptr value); 

long (*get_integer)(tgr_value_ptr value); 

int (*get_bool)(tgr_value_ptr value); 

double (*get_floating)(tgr_value_ptr value); 

void *(*get_pointer)(tgr_value_ptr value); 

tgr_func_ptr (*get_func_pointer)(tgr_value_ptr value); 

const char *(*get_string)(tgr_value_ptr value); 

tgr_value (*get_bool_value)(tgr_value_ptr value); 

tgr_value (*is_equal)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (*is_greater)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (*is_greater_or_equal)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (*multiply)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (*divide)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (*plus)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (*minus)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (*do_assign)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (*do_ref_assign)(tgr_value_ptr left, tgr_value_ptr right); 

tgr_value (*do_not)(tgr_value_ptr operand); 

tgr_value (*do_inc)(tgr_value_ptr operand); 

tgr_value (*do_dec)(tgr_value_ptr operand); 

tgr_value (*get_field)(tgr_value_ptr obj, tgr_value_ptr field_name); 

tgr_value (*do_at)(tgr_value_ptr arr, tgr_value_ptr idx); 

tgr_value (*to_rvalue)(tgr_value_ptr ref); 
}; 

struct tgr_type { 

tgr_type_vtbl_ptr vtbl; 
tgr_type_ptr sub_type; 
tgr_type_ptr ref_type; 
tgr_type_ptr ptr_type; 
tgr_type_ptr array_type; 
tgr_type_ptr next_type; 
unsigned size; 
}; 


tgr_type_ptr tgr_type_create(tgr_type_vtbl_ptr vtbl); 


int tgr_type_is_integer(tgr_value_ptr value); 


int tgr_type_is_floating(tgr_value_ptr value); 


int tgr_type_is_pointer(tgr_value_ptr value); 


int tgr_type_is_func_pointer(tgr_value_ptr value); 


int tgr_type_is_object(tgr_value_ptr value); 


int tgr_type_is_void(tgr_value_ptr value); 


int tgr_type_is_error(tgr_value_ptr value); 


long tgr_type_get_integer(tgr_value_ptr value); 


int tgr_type_get_bool(tgr_value_ptr value); 


double tgr_type_get_floating(tgr_value_ptr value); 


void *tgr_type_get_pointer(tgr_value_ptr value); 


tgr_func_ptr tgr_type_get_func_pointer(tgr_value_ptr value); 
#line 15 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\trigger/c/value.h"
struct tgr_error_wrapper { 

int kind; 
int reported; 
}; 

struct tgr_position_wrapper { 

const char *file; 
unsigned line; 
}; 

struct tgr_value_s { 

union { 
int b; 
char c; 
unsigned char uc; 
signed char sc; 
short w; 
short s; 
unsigned short us; 
int i; 
unsigned ui; 
long l; 
unsigned long ul; 
long ll; 
unsigned long ull; 
float f; 
double d; 
double ld; 
const volatile void *ptr; 
tgr_func_ptr func; 
struct tgr_error_wrapper err; 
struct tgr_position_wrapper pos; 
} value; 

tgr_type_ptr type; 
}; 



int tgr_value_is_integer(tgr_value_ptr value); 


int tgr_value_is_floating(tgr_value_ptr value); 


int tgr_value_is_pointer(tgr_value_ptr value); 


int tgr_value_is_func_pointer(tgr_value_ptr value); 


int tgr_value_is_object(tgr_value_ptr value); 


int tgr_value_is_void(tgr_value_ptr value); 


int tgr_value_is_error(tgr_value_ptr value); 


long tgr_value_get_integer(tgr_value_ptr value); 


int tgr_value_get_bool(tgr_value_ptr value); 


double tgr_value_get_floating(tgr_value_ptr value); 


void *tgr_value_get_pointer(tgr_value_ptr value); 


tgr_func_ptr tgr_value_get_func_pointer(tgr_value_ptr value); 


const char *tgr_value_get_string(tgr_value_ptr value); 


tgr_value tgr_value_get_bool_value(tgr_value_ptr value); 


tgr_value tgr_value_do_not(tgr_value_ptr value); 


tgr_value tgr_value_do_inc(tgr_value_ptr value); 


tgr_value tgr_value_do_dec(tgr_value_ptr value); 


tgr_value tgr_value_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_is_not_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_is_greater(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_is_greater_or_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_is_less(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_is_less_or_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_do_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_value_get_field(tgr_value_ptr obj, tgr_value_ptr field_name); 


tgr_value tgr_value_do_at(tgr_value_ptr arr, tgr_value_ptr index); 
#line 40 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\trigger/c/error_type.h"
typedef 
#line 16
enum tgr_error_kind { 

c_tgr_error_unknown, 
c_tgr_error_missing_right_paren, 
c_tgr_error_expected_bool_expression, 
c_tgr_error_wrong_equal_arguments, 
c_tgr_error_wrong_relational_arguments, 
c_tgr_error_wrong_multiply_arguments, 
c_tgr_error_wrong_divide_arguments, 
c_tgr_error_wrong_plus_arguments, 
c_tgr_error_wrong_minus_arguments, 
c_tgr_error_assign_to_rvalue, 
c_tgr_error_wrong_get_field_argument, 
c_tgr_error_wrong_at_argument, 
c_tgr_error_wrong_at_index_type, 
c_tgr_error_assign_incompatible_types, 
c_tgr_error_wrong_not_argument, 
c_tgr_error_wrong_inc_argument, 
c_tgr_error_wrong_dec_argument, 
c_tgr_error_unexpected_end_of_tokens, 
c_tgr_error_expected_an_expression, 
c_tgr_error_wrong_arg_name, 
c_tgr_error_null_func_ptr, 
c_tgr_error_deprecated_assert
} tgr_error_kind; 



int tgr_error_type_is_error(tgr_value_ptr value); 


const char *tgr_error_type_get_string(tgr_value_ptr value); 


tgr_value tgr_error_type_get_bool_value(tgr_value_ptr value); 


tgr_value tgr_error_type_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_error_type_is_greater(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_error_type_is_greater_or_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_error_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_error_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_error_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_error_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_error_type_do_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_error_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_error_type_do_not(tgr_value_ptr operand); 


tgr_value tgr_error_type_do_inc(tgr_value_ptr operand); 


tgr_value tgr_error_type_do_dec(tgr_value_ptr operand); 


tgr_value tgr_error_type_get_field(tgr_value_ptr obj, tgr_value_ptr field_name); 


tgr_value tgr_error_type_do_at(tgr_value_ptr arr, tgr_value_ptr idx); 


tgr_value tgr_error_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_error_type(void); 


tgr_value tgr_error(tgr_error_kind kind); 




tgr_value tgr_get_bool_value_error(tgr_value_ptr value); 


tgr_value tgr_is_equal_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_is_greater_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_is_greater_or_equal_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_do_multiply_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_do_divide_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_do_plus_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_do_minus_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_do_assign_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_do_ref_assign_error(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_do_not_error(tgr_value_ptr operand); 


tgr_value tgr_do_inc_error(tgr_value_ptr operand); 


tgr_value tgr_do_dec_error(tgr_value_ptr operand); 


tgr_value tgr_get_field_error(tgr_value_ptr obj, tgr_value_ptr field_name); 


tgr_value tgr_do_at_error(tgr_value_ptr arr, tgr_value_ptr idx); 


tgr_value tgr_to_rvalue_error(tgr_value_ptr ref); 
#line 16 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\trigger/c/void_type.h"
int tgr_void_type_is_void(tgr_value_ptr value); 


const char *tgr_void_type_get_string(tgr_value_ptr value); 


tgr_type_ptr tgr_void_type(void); 


tgr_value tgr_void(void); 
#line 52 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\trigger/c/instruction.h"
typedef 
#line 16
enum tgr_instruction_kind { 

c_tgr_instruction_assert, 
c_tgr_instruction_fail, 
c_tgr_instruction_report, 
c_tgr_instruction_arg, 
c_tgr_instruction_field, 
c_tgr_instruction_if, 
c_tgr_instruction_else, 
c_tgr_instruction_assign, 
c_tgr_instruction_or, 
c_tgr_instruction_and, 
c_tgr_instruction_equal, 
c_tgr_instruction_not_equal, 
c_tgr_instruction_greater, 
c_tgr_instruction_greater_or_equal, 
c_tgr_instruction_less, 
c_tgr_instruction_less_or_equal, 
c_tgr_instruction_multiply, 
c_tgr_instruction_divide, 
c_tgr_instruction_plus, 
c_tgr_instruction_minus, 
c_tgr_instruction_not, 
c_tgr_instruction_at, 
c_tgr_instruction_inc, 
c_tgr_instruction_dec, 
c_tgr_instruction_value, 
c_tgr_instruction_left_paren, 
c_tgr_instruction_right_paren, 
c_tgr_instruction_run_id, 
c_tgr_instruction_execute, 
c_tgr_instruction_with_arg, 
c_tgr_instruction_return, 
c_tgr_instruction_left_brace, 
c_tgr_instruction_right_brace, 
c_tgr_instruction_line_directive
} tgr_instruction_kind; 

typedef struct tgr_instruction *tgr_instruction_ptr; 

struct tgr_instruction { 


tgr_instruction_kind kind; 
tgr_value arg; 
tgr_instruction_ptr next; 
}; 


typedef struct tgr_instruction_list *tgr_instruction_list_ptr; 

struct tgr_instruction_list { 

tgr_instruction_ptr first; 
tgr_instruction_ptr last; 
}; 


tgr_instruction_ptr tgr_create_instruction(tgr_instruction_kind kind); 


tgr_instruction_ptr tgr_create_instruction_with_arg(tgr_instruction_kind kind, tgr_value arg); 



int tgr_instruction_has_arg(tgr_instruction_ptr instruction); 


void tgr_instruction_list_initialize(tgr_instruction_list_ptr list); 


void tgr_instruction_list_add(tgr_instruction_list_ptr list, tgr_instruction_ptr instruction); 



void tgr_instruction_list_clear(tgr_instruction_list_ptr list); 


void tgr_instruction_list_destroy(tgr_instruction_list_ptr list); 
#line 16 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\trigger/c/pos_type.h"
const char *tgr_pos_type_get_string(tgr_value_ptr value); 


tgr_type_ptr tgr_pos_type(void); 


tgr_value tgr_pos(const char * file, unsigned line); 
#line 17 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\trigger/c/boolean_type.h"
int tgr_boolean_type_is_integer(tgr_value_ptr value); 


long tgr_boolean_type_get_integer(tgr_value_ptr value); 


int tgr_boolean_type_get_bool(tgr_value_ptr value); 


double tgr_boolean_type_get_floating(tgr_value_ptr value); 


const char *tgr_boolean_type_get_string(tgr_value_ptr value); 


tgr_value tgr_boolean_type_get_bool_value(tgr_value_ptr value); 


tgr_value tgr_boolean_type_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_boolean_type_is_greater(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_boolean_type_is_greater_or_equal(tgr_value_ptr left, tgr_value_ptr right); 



tgr_value tgr_boolean_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_boolean_type_do_not(tgr_value_ptr operand); 


tgr_value tgr_boolean_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_boolean_type(void); 


tgr_value tgr_boolean(int v); 
#line 17 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\trigger/c/integer_type.h"
int tgr_integer_type_is_integer(tgr_value_ptr value); 


int tgr_integer_type_get_bool(tgr_value_ptr value); 


double tgr_integer_type_get_floating(tgr_value_ptr value); 


void *tgr_integer_type_get_pointer(tgr_value_ptr value); 


const char *tgr_integer_type_get_string(tgr_value_ptr value); 


tgr_value tgr_integer_type_get_bool_value(tgr_value_ptr value); 


tgr_value tgr_integer_type_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_integer_type_is_greater(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_integer_type_is_greater_or_equal(tgr_value_ptr left, tgr_value_ptr right); 




tgr_value tgr_integer_type_do_not(tgr_value_ptr operand); 


long tgr_char_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_char_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_char_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_char_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_char_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_char_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_char_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_char_type(void); 


tgr_value tgr_char(char c); 


long tgr_schar_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_schar_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_schar_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_schar_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_schar_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_schar_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_schar_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_schar_type(void); 


tgr_value tgr_schar(signed char sc); 


long tgr_uchar_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_uchar_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uchar_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uchar_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uchar_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uchar_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uchar_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_uchar_type(void); 


tgr_value tgr_uchar(unsigned char uc); 



long tgr_wchar_t_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_wchar_t_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_wchar_t_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_wchar_t_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_wchar_t_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_wchar_t_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_wchar_t_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_wchar_t_type(void); 


tgr_value tgr_wchar_t(short c); 


long tgr_short_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_short_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_short_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_short_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_short_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_short_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_short_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_short_type(void); 


tgr_value tgr_short(short s); 


long tgr_ushort_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_ushort_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ushort_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ushort_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ushort_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ushort_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ushort_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_ushort_type(void); 


tgr_value tgr_ushort(unsigned short us); 


long tgr_int_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_int_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_int_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_int_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_int_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_int_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_int_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_int_type(void); 


tgr_value tgr_int(int i); 


long tgr_uint_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_uint_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uint_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uint_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uint_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uint_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_uint_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_uint_type(void); 


tgr_value tgr_uint(unsigned ui); 


long tgr_long_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_long_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_long_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_long_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_long_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_long_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_long_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_long_type(void); 


tgr_value tgr_long(long l); 


long tgr_ulong_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_ulong_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ulong_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ulong_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ulong_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ulong_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ulong_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_ulong_type(void); 


tgr_value tgr_ulong(unsigned long ul); 


long tgr_llong_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_llong_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_llong_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_llong_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_llong_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_llong_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_llong_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_llong_type(void); 


tgr_value tgr_llong(long ll); 


long tgr_ullong_type_get_integer(tgr_value_ptr value); 


tgr_value tgr_ullong_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ullong_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ullong_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ullong_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ullong_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ullong_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_ullong_type(void); 


tgr_value tgr_ullong(unsigned long ull); 


tgr_type_ptr tgr_integer_type(unsigned size, int sign); 
#line 19 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\trigger/c/ref_type.h"
tgr_value tgr_get_referenced_value(tgr_value_ptr value); 


int tgr_ref_type_is_integer(tgr_value_ptr value); 


int tgr_ref_type_is_floating(tgr_value_ptr value); 


int tgr_ref_type_is_pointer(tgr_value_ptr value); 


int tgr_ref_type_is_func_pointer(tgr_value_ptr value); 


long tgr_ref_type_get_integer(tgr_value_ptr value); 


int tgr_ref_type_get_bool(tgr_value_ptr value); 


double tgr_ref_type_get_floating(tgr_value_ptr value); 


void *tgr_ref_type_get_pointer(tgr_value_ptr value); 


tgr_func_ptr tgr_ref_type_get_func_pointer(tgr_value_ptr value); 


const char *tgr_ref_type_get_string(tgr_value_ptr value); 


tgr_value tgr_ref_type_get_bool_value(tgr_value_ptr value); 


tgr_value tgr_ref_type_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ref_type_is_greater(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ref_type_is_greater_or_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ref_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ref_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ref_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ref_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ref_type_do_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ref_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ref_type_do_not(tgr_value_ptr operand); 


tgr_value tgr_ref_type_do_inc(tgr_value_ptr operand); 


tgr_value tgr_ref_type_do_dec(tgr_value_ptr operand); 


tgr_value tgr_ref_type_get_field(tgr_value_ptr obj, tgr_value_ptr field_name); 


tgr_value tgr_ref_type_do_at(tgr_value_ptr arr, tgr_value_ptr idx); 


tgr_value tgr_ref_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_ref_type(tgr_type_ptr sub_type); 
#line 17 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\trigger/c/floating_type.h"
int tgr_floating_type_is_floating(tgr_value_ptr value); 


const char *tgr_floating_type_get_string(tgr_value_ptr value); 


tgr_value tgr_floating_type_get_bool_value(tgr_value_ptr value); 


tgr_value tgr_floating_type_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_floating_type_is_greater(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_floating_type_is_greater_or_equal(tgr_value_ptr left, tgr_value_ptr right); 



tgr_value tgr_floating_type_do_not(tgr_value_ptr operand); 


long tgr_float_type_get_integer(tgr_value_ptr value); 


int tgr_float_type_get_bool(tgr_value_ptr value); 


double tgr_float_type_get_floating(tgr_value_ptr value); 


tgr_value tgr_float_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_float_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_float_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_float_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_float_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_float_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_float_type(void); 


tgr_value tgr_float(float f); 


long tgr_double_type_get_integer(tgr_value_ptr value); 


int tgr_double_type_get_bool(tgr_value_ptr value); 


double tgr_double_type_get_floating(tgr_value_ptr value); 


tgr_value tgr_double_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_double_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_double_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_double_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_double_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_double_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_double_type(void); 


tgr_value tgr_double(double d); 


long tgr_ldouble_type_get_integer(tgr_value_ptr value); 


int tgr_ldouble_type_get_bool(tgr_value_ptr value); 


double tgr_ldouble_type_get_floating(tgr_value_ptr value); 


tgr_value tgr_ldouble_type_do_multiply(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ldouble_type_do_divide(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ldouble_type_do_plus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ldouble_type_do_minus(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ldouble_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ldouble_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_ldouble_type(void); 


tgr_value tgr_ldouble(double ld); 
#line 19 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\trigger/c/func_ptr_type.h"
int tgr_func_ptr_type_is_func_pointer(tgr_value_ptr value); 


int tgr_func_ptr_type_get_bool(tgr_value_ptr value); 


tgr_func_ptr tgr_func_ptr_type_get_func_pointer(tgr_value_ptr value); 


const char *tgr_func_ptr_type_get_string(tgr_value_ptr value); 


tgr_value tgr_func_ptr_type_get_bool_value(tgr_value_ptr value); 


tgr_value tgr_func_ptr_type_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_func_ptr_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_func_ptr_type_do_not(tgr_value_ptr operand); 


tgr_value tgr_func_ptr_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_func_ptr_type(void); 


tgr_value tgr_func(tgr_func_ptr func); 
#line 17 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\trigger/c/class_type.h"
int tgr_class_type_is_object(tgr_value_ptr value); 


const char *tgr_class_type_get_string(tgr_value_ptr value); 


tgr_value tgr_class_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_vtbl_ptr tgr_class_type_default_vtbl(void); 


tgr_value tgr_object(const volatile void * obj_ptr, tgr_type_ptr class_type); 

struct tgr_class_definition { 

int initialized; 
struct tgr_type_vtbl vtbl; 
struct tgr_type type; 
}; 



void tgr_initialize_class_definition(tgr_class_definition_ptr class_definition, unsigned class_size); 
#line 23 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\trigger/c/ptr_type.h"
int tgr_ptr_type_is_pointer(tgr_value_ptr value); 


int tgr_ptr_type_get_bool(tgr_value_ptr value); 


void *tgr_ptr_type_get_pointer(tgr_value_ptr value); 


const char *tgr_ptr_type_get_string(tgr_value_ptr value); 


tgr_value tgr_ptr_type_get_bool_value(tgr_value_ptr value); 


tgr_value tgr_ptr_type_is_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ptr_type_is_greater(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ptr_type_is_greater_or_equal(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ptr_type_do_ref_assign(tgr_value_ptr left, tgr_value_ptr right); 


tgr_value tgr_ptr_type_do_not(tgr_value_ptr operand); 


tgr_value tgr_ptr_type_get_field(tgr_value_ptr obj, tgr_value_ptr field_name); 


tgr_value tgr_ptr_type_do_at(tgr_value_ptr arr, tgr_value_ptr idx); 


tgr_value tgr_ptr_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_ptr_type(tgr_type_ptr sub_type); 


tgr_value tgr_void_ptr(const volatile void * ptr); 


tgr_value tgr_char_ptr(const volatile char * ptr); 


tgr_value tgr_schar_ptr(const volatile signed char * ptr); 


tgr_value tgr_uchar_ptr(const volatile unsigned char * ptr); 


tgr_value tgr_wchar_t_ptr(const volatile short * ptr); 


tgr_value tgr_short_ptr(const volatile short * ptr); 


tgr_value tgr_ushort_ptr(const volatile unsigned short * ptr); 


tgr_value tgr_int_ptr(const volatile int * ptr); 


tgr_value tgr_uint_ptr(const volatile unsigned * ptr); 


tgr_value tgr_long_ptr(const volatile long * ptr); 


tgr_value tgr_ulong_ptr(const volatile unsigned long * ptr); 


tgr_value tgr_llong_ptr(const volatile long * ptr); 


tgr_value tgr_ullong_ptr(const volatile unsigned long * ptr); 


tgr_value tgr_float_ptr(const volatile float * ptr); 


tgr_value tgr_double_ptr(const volatile double * ptr); 


tgr_value tgr_ldouble_ptr(const volatile double * ptr); 


tgr_value tgr_function_ptr(const volatile tgr_func_ptr * ptr); 


tgr_value tgr_char_ref(const volatile char * ptr); 


tgr_value tgr_schar_ref(const volatile signed char * ptr); 


tgr_value tgr_uchar_ref(const volatile unsigned char * ptr); 


tgr_value tgr_wchar_t_ref(const volatile short * ptr); 


tgr_value tgr_short_ref(const volatile short * ptr); 


tgr_value tgr_ushort_ref(const volatile unsigned short * ptr); 


tgr_value tgr_int_ref(const volatile int * ptr); 


tgr_value tgr_uint_ref(const volatile unsigned * ptr); 


tgr_value tgr_long_ref(const volatile long * ptr); 


tgr_value tgr_ulong_ref(const volatile unsigned long * ptr); 


tgr_value tgr_llong_ref(const volatile long * ptr); 


tgr_value tgr_ullong_ref(const volatile unsigned long * ptr); 


tgr_value tgr_float_ref(const volatile float * ptr); 


tgr_value tgr_double_ref(const volatile double * ptr); 


tgr_value tgr_ldouble_ref(const volatile double * ptr); 


tgr_value tgr_void_ptr_ref(const volatile void * ptr); 


tgr_value tgr_func_ptr_ref(const volatile void * ptr); 


tgr_value tgr_ptr_ref(const volatile void * ptr, tgr_type_ptr pointed_type); 
#line 23 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\trigger/c/array_type.h"
const char *tgr_array_type_get_string(tgr_value_ptr value); 


tgr_value tgr_array_type_do_at(tgr_value_ptr arr, tgr_value_ptr idx); 


tgr_value tgr_array_type_to_rvalue(tgr_value_ptr ref); 


tgr_type_ptr tgr_array_type(tgr_type_ptr sub_type, unsigned size); 
#line 17 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\trigger/c/code.h"
typedef tgr_value (*tgr_external_func_ptr)(tgr_running_data_ptr running_data, tgr_args_ptr args); 


struct tgr_code { 

struct tgr_instruction_list instructions; 
}; 


void tgr_code_initialize(tgr_code_ptr code); 


void tgr_code_clear(tgr_code_ptr code); 


void tgr_code_add_instruction(tgr_code_ptr code, tgr_instruction_kind kind); 


void tgr_code_add_instruction_with_arg(tgr_code_ptr code, tgr_instruction_kind kind, tgr_value arg); 
#line 21 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\trigger/c/trigger.h"
typedef 
#line 16
enum tgr_run_mode { 

c_tgr_run_before, 
c_tgr_run_instead_of, 
c_tgr_run_after
} tgr_run_mode; 

struct tgr_trigger { 

char *name; 
tgr_run_mode run_mode; 
unsigned number_of_runs; 
tgr_time creation_time; 
tgr_trigger_ptr next; 
struct tgr_code code; 
}; 

struct tgr_trigger_list { 

tgr_trigger_ptr first; 
tgr_trigger_ptr last; 
}; 



tgr_trigger_ptr tgr_trigger_construct(const char * name, tgr_run_mode run_mode); 


void tgr_trigger_clear(tgr_trigger_ptr trigger); 


void tgr_trigger_destroy(tgr_trigger_ptr trigger); 


void tgr_trigger_list_initialize(tgr_trigger_list_ptr list); 


void tgr_trigger_list_add(tgr_trigger_list_ptr list, tgr_trigger_ptr trigger); 


void tgr_trigger_list_remove(tgr_trigger_list_ptr list, tgr_trigger_ptr to_remove); 


void tgr_trigger_list_clear(tgr_trigger_list_ptr list); 
#line 17 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\trigger/c/manager.h"
tgr_trigger_list_ptr tgr_get_triggers(void); 


tgr_trigger_ptr tgr_add(const char * name, tgr_run_mode run_mode); 


void tgr_remove(const char * name); 


void tgr_remove_all_with_creation_time(tgr_time start, tgr_time stop); 


void tgr_remove_all(void); 
#line 16 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\trigger/c/code_helper.h"
struct tgr_code_helper { 

tgr_code_helper_ptr (*Assert)(const char * message); 

tgr_code_helper_ptr (*Fail)(const char * message); 

tgr_code_helper_ptr (*Report)(const char * message); 

tgr_code_helper_ptr (*Arg)(const char * argName); 

tgr_code_helper_ptr (*ArgByExpr)(void); 

tgr_code_helper_ptr (*Field)(const char * field_name); 

tgr_code_helper_ptr (*FieldByExpr)(void); 

tgr_code_helper_ptr (*If)(void); 

tgr_code_helper_ptr (*Else)(void); 

tgr_code_helper_ptr (*Assign)(void); 

tgr_code_helper_ptr (*Or)(void); 

tgr_code_helper_ptr (*And)(void); 

tgr_code_helper_ptr (*Equal)(void); 

tgr_code_helper_ptr (*NotEqual)(void); 

tgr_code_helper_ptr (*Greater)(void); 

tgr_code_helper_ptr (*GreaterOrEqual)(void); 

tgr_code_helper_ptr (*Less)(void); 

tgr_code_helper_ptr (*LessOrEqual)(void); 

tgr_code_helper_ptr (*Multiply)(void); 

tgr_code_helper_ptr (*Divide)(void); 

tgr_code_helper_ptr (*Plus)(void); 

tgr_code_helper_ptr (*Minus)(void); 

tgr_code_helper_ptr (*Not)(void); 

tgr_code_helper_ptr (*At)(void); 

tgr_code_helper_ptr (*Inc)(void); 

tgr_code_helper_ptr (*Dec)(void); 

tgr_code_helper_ptr (*LP)(void); 

tgr_code_helper_ptr (*RP)(void); 

tgr_code_helper_ptr (*RunId)(void); 

tgr_code_helper_ptr (*Execute)(tgr_external_func_ptr function); 

tgr_code_helper_ptr (*WithArg)(const char * name); 

tgr_code_helper_ptr (*Return)(void); 

tgr_code_helper_ptr (*LB)(void); 

tgr_code_helper_ptr (*RB)(void); 

tgr_code_helper_ptr (*FileLine)(const char * file, unsigned line); 

tgr_code_helper_ptr (*Line)(unsigned line); 

tgr_code_helper_ptr (*Value)(tgr_value value); 

tgr_code_helper_ptr (*Char)(char c); 

tgr_code_helper_ptr (*SChar)(signed char sc); 

tgr_code_helper_ptr (*UChar)(unsigned char uc); 

tgr_code_helper_ptr (*WChar)(short w); 

tgr_code_helper_ptr (*Short)(short s); 

tgr_code_helper_ptr (*UShort)(unsigned short us); 

tgr_code_helper_ptr (*Int)(int i); 

tgr_code_helper_ptr (*UInt)(unsigned ui); 

tgr_code_helper_ptr (*Long)(long l); 

tgr_code_helper_ptr (*ULong)(unsigned long ul); 

tgr_code_helper_ptr (*LLong)(long ll); 

tgr_code_helper_ptr (*ULLong)(unsigned long ull); 

tgr_code_helper_ptr (*Float)(float f); 

tgr_code_helper_ptr (*Double)(double d); 

tgr_code_helper_ptr (*LDouble)(double ld); 

tgr_code_helper_ptr (*Func)(tgr_func_ptr func); 

tgr_code_helper_ptr (*VoidPtr)(const volatile void * ptr); 

tgr_code_helper_ptr (*CharPtr)(const volatile char * ptr); 

tgr_code_helper_ptr (*SCharPtr)(const volatile signed char * ptr); 

tgr_code_helper_ptr (*UCharPtr)(const volatile unsigned char * ptr); 

tgr_code_helper_ptr (*WCharPtr)(const volatile short * ptr); 

tgr_code_helper_ptr (*ShortPtr)(const volatile short * ptr); 

tgr_code_helper_ptr (*UShortPtr)(const volatile unsigned short * ptr); 

tgr_code_helper_ptr (*IntPtr)(const volatile int * ptr); 

tgr_code_helper_ptr (*UIntPtr)(const volatile unsigned * ptr); 

tgr_code_helper_ptr (*LongPtr)(const volatile long * ptr); 

tgr_code_helper_ptr (*ULongPtr)(const volatile unsigned long * ptr); 

tgr_code_helper_ptr (*LLongPtr)(const volatile long * ptr); 

tgr_code_helper_ptr (*ULLongPtr)(const volatile unsigned long * ptr); 

tgr_code_helper_ptr (*FloatPtr)(const volatile float * ptr); 

tgr_code_helper_ptr (*DoublePtr)(const volatile double * ptr); 

tgr_code_helper_ptr (*LDoublePtr)(const volatile double * ptr); 

tgr_code_helper_ptr (*CharRef)(const volatile char * ref); 

tgr_code_helper_ptr (*SCharRef)(const volatile signed char * ref); 

tgr_code_helper_ptr (*UCharRef)(const volatile unsigned char * ref); 

tgr_code_helper_ptr (*WCharRef)(const volatile short * ref); 

tgr_code_helper_ptr (*ShortRef)(const volatile short * ref); 

tgr_code_helper_ptr (*UShortRef)(const volatile unsigned short * ref); 

tgr_code_helper_ptr (*IntRef)(const volatile int * ref); 

tgr_code_helper_ptr (*UIntRef)(const volatile unsigned * ref); 

tgr_code_helper_ptr (*LongRef)(const volatile long * ref); 

tgr_code_helper_ptr (*ULongRef)(const volatile unsigned long * ref); 

tgr_code_helper_ptr (*LLongRef)(const volatile long * ref); 

tgr_code_helper_ptr (*ULLongRef)(const volatile unsigned long * ref); 

tgr_code_helper_ptr (*FloatRef)(const volatile float * ref); 

tgr_code_helper_ptr (*DoubleRef)(const volatile double * ref); 

tgr_code_helper_ptr (*LDoubleRef)(const volatile double * ref); 

tgr_code_helper_ptr (*VoidPtrRef)(const volatile void * ref); 

tgr_code_helper_ptr (*Object)(const volatile void * obj, tgr_type_ptr class_type); 

tgr_code_helper_ptr (*Ptr)(const volatile void * value, tgr_type_ptr element_type); 

tgr_code_helper_ptr (*Ref)(const volatile void * value, tgr_type_ptr element_type); 

}; 


tgr_code_ptr *tgr_get_curr_code(void); 


tgr_code_helper_ptr tgr_code_helper_assert(const char * message); 


tgr_code_helper_ptr tgr_code_helper_fail(const char * message); 


tgr_code_helper_ptr tgr_code_helper_report(const char * message); 


tgr_code_helper_ptr tgr_code_helper_arg(const char * argName); 


tgr_code_helper_ptr tgr_code_helper_arg_by_expr(void); 


tgr_code_helper_ptr tgr_code_helper_field(const char * field_name); 


tgr_code_helper_ptr tgr_code_helper_field_by_expr(void); 


tgr_code_helper_ptr tgr_code_helper_if(void); 


tgr_code_helper_ptr tgr_code_helper_else(void); 


tgr_code_helper_ptr tgr_code_helper_assign(void); 


tgr_code_helper_ptr tgr_code_helper_or(void); 


tgr_code_helper_ptr tgr_code_helper_and(void); 


tgr_code_helper_ptr tgr_code_helper_equal(void); 


tgr_code_helper_ptr tgr_code_helper_not_equal(void); 


tgr_code_helper_ptr tgr_code_helper_greater(void); 


tgr_code_helper_ptr tgr_code_helper_greater_or_equal(void); 


tgr_code_helper_ptr tgr_code_helper_less(void); 


tgr_code_helper_ptr tgr_code_helper_less_or_equal(void); 


tgr_code_helper_ptr tgr_code_helper_multiply(void); 


tgr_code_helper_ptr tgr_code_helper_divide(void); 


tgr_code_helper_ptr tgr_code_helper_plus(void); 


tgr_code_helper_ptr tgr_code_helper_minus(void); 


tgr_code_helper_ptr tgr_code_helper_not(void); 


tgr_code_helper_ptr tgr_code_helper_at(void); 


tgr_code_helper_ptr tgr_code_helper_inc(void); 


tgr_code_helper_ptr tgr_code_helper_dec(void); 


tgr_code_helper_ptr tgr_code_helper_lp(void); 


tgr_code_helper_ptr tgr_code_helper_rp(void); 


tgr_code_helper_ptr tgr_code_helper_run_id(void); 


tgr_code_helper_ptr tgr_code_helper_execute(tgr_external_func_ptr function); 


tgr_code_helper_ptr tgr_code_helper_with_arg(const char * name); 


tgr_code_helper_ptr tgr_code_helper_return(void); 


tgr_code_helper_ptr tgr_code_helper_lb(void); 


tgr_code_helper_ptr tgr_code_helper_rb(void); 


tgr_code_helper_ptr tgr_code_helper_file_line(const char * file, unsigned line); 


tgr_code_helper_ptr tgr_code_helper_line(unsigned line); 


tgr_code_helper_ptr tgr_code_helper_value(tgr_value value); 


tgr_code_helper_ptr tgr_code_helper_char(char c); 


tgr_code_helper_ptr tgr_code_helper_schar(signed char sc); 


tgr_code_helper_ptr tgr_code_helper_uchar(unsigned char uc); 


tgr_code_helper_ptr tgr_code_helper_wchar_t(short w); 


tgr_code_helper_ptr tgr_code_helper_short(short s); 


tgr_code_helper_ptr tgr_code_helper_ushort(unsigned short us); 


tgr_code_helper_ptr tgr_code_helper_int(int i); 


tgr_code_helper_ptr tgr_code_helper_uint(unsigned ui); 


tgr_code_helper_ptr tgr_code_helper_long(long l); 


tgr_code_helper_ptr tgr_code_helper_ulong(unsigned long ul); 


tgr_code_helper_ptr tgr_code_helper_llong(long ll); 


tgr_code_helper_ptr tgr_code_helper_ullong(unsigned long ull); 


tgr_code_helper_ptr tgr_code_helper_float(float f); 


tgr_code_helper_ptr tgr_code_helper_double(double d); 


tgr_code_helper_ptr tgr_code_helper_ldouble(double ld); 


tgr_code_helper_ptr tgr_code_helper_func(tgr_func_ptr func); 


tgr_code_helper_ptr tgr_code_helper_void_ptr(const volatile void * ptr); 


tgr_code_helper_ptr tgr_code_helper_char_ptr(const volatile char * ptr); 


tgr_code_helper_ptr tgr_code_helper_schar_ptr(const volatile signed char * ptr); 


tgr_code_helper_ptr tgr_code_helper_uchar_ptr(const volatile unsigned char * ptr); 


tgr_code_helper_ptr tgr_code_helper_wchar_t_ptr(const volatile short * ptr); 


tgr_code_helper_ptr tgr_code_helper_short_ptr(const volatile short * ptr); 


tgr_code_helper_ptr tgr_code_helper_ushort_ptr(const volatile unsigned short * ptr); 


tgr_code_helper_ptr tgr_code_helper_int_ptr(const volatile int * ptr); 


tgr_code_helper_ptr tgr_code_helper_uint_ptr(const volatile unsigned * ptr); 


tgr_code_helper_ptr tgr_code_helper_long_ptr(const volatile long * ptr); 


tgr_code_helper_ptr tgr_code_helper_ulong_ptr(const volatile unsigned long * ptr); 


tgr_code_helper_ptr tgr_code_helper_llong_ptr(const volatile long * ptr); 


tgr_code_helper_ptr tgr_code_helper_ullong_ptr(const volatile unsigned long * ptr); 


tgr_code_helper_ptr tgr_code_helper_float_ptr(const volatile float * ptr); 


tgr_code_helper_ptr tgr_code_helper_double_ptr(const volatile double * ptr); 


tgr_code_helper_ptr tgr_code_helper_ldouble_ptr(const volatile double * ptr); 


tgr_code_helper_ptr tgr_code_helper_char_ref(const volatile char * ref); 


tgr_code_helper_ptr tgr_code_helper_schar_ref(const volatile signed char * ref); 


tgr_code_helper_ptr tgr_code_helper_uchar_ref(const volatile unsigned char * ref); 


tgr_code_helper_ptr tgr_code_helper_wchar_t_ref(const volatile short * ref); 


tgr_code_helper_ptr tgr_code_helper_short_ref(const volatile short * ref); 


tgr_code_helper_ptr tgr_code_helper_ushort_ref(const volatile unsigned short * ref); 


tgr_code_helper_ptr tgr_code_helper_int_ref(const volatile int * ref); 


tgr_code_helper_ptr tgr_code_helper_uint_ref(const volatile unsigned * ref); 


tgr_code_helper_ptr tgr_code_helper_long_ref(const volatile long * ref); 


tgr_code_helper_ptr tgr_code_helper_ulong_ref(const volatile unsigned long * ref); 


tgr_code_helper_ptr tgr_code_helper_llong_ref(const volatile long * ref); 


tgr_code_helper_ptr tgr_code_helper_ullong_ref(const volatile unsigned long * ref); 


tgr_code_helper_ptr tgr_code_helper_float_ref(const volatile float * ref); 


tgr_code_helper_ptr tgr_code_helper_double_ref(const volatile double * ref); 


tgr_code_helper_ptr tgr_code_helper_ldouble_ref(const volatile double * ref); 


tgr_code_helper_ptr tgr_code_helper_void_ptr_ref(const volatile void * ref); 


tgr_code_helper_ptr tgr_code_helper_object(const volatile void * obj, tgr_type_ptr class_type); 



tgr_code_helper_ptr tgr_code_helper_pointer(const volatile void * value, tgr_type_ptr element_type); 



tgr_code_helper_ptr tgr_code_helper_reference(const volatile void * value, tgr_type_ptr element_type); 



tgr_code_helper_ptr tgr_code_helper_instance(void); 


tgr_code_helper_ptr tgr_create_full(const char * name, tgr_run_mode run_mode, const char * file, unsigned line); 
#line 476
tgr_code_helper_ptr tgr_create(const char * name, tgr_run_mode run_mode); 
#line 39 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\trigger/c/handlers.h"
typedef void (*tgr_error_handler_func_ptr)(const char * trigger_name, unsigned error_kind, const void * details, const char * def_file, unsigned def_line); 
#line 45
typedef void (*tgr_fail_handler_func_ptr)(const char * trigger_name, const char * message, const char * def_file, unsigned def_line); 




typedef void (*tgr_report_handler_func_ptr)(const char * trigger_name, const char * message, const char * def_file, unsigned def_line); 
#line 86 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\trigger/c/handlers.h"
tgr_error_handler_func_ptr *tgr_get_error_handler(void); 


tgr_fail_handler_func_ptr *tgr_get_fail_handler(void); 


tgr_report_handler_func_ptr *tgr_get_report_handler(void); 


void tgr_handle_error(const char * trigger_name, unsigned error_kind, const void * details, const char * def_file, unsigned def_line); 
#line 102
void tgr_handle_fail(const char * trigger_name, const char * message, const char * def_file, unsigned def_line); 
#line 108
void tgr_handle_report(const char * trigger_name, const char * message, const char * def_file, unsigned def_line); 
#line 17 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\trigger/c/runner.h"
struct tgr_arg { 

char *name; 
tgr_value value; 
tgr_arg_ptr next; 
}; 

struct tgr_args { 

tgr_arg_ptr first_arg; 
tgr_arg_ptr last_arg; 
unsigned number_of_args; 
}; 

struct tgr_running_data { 

tgr_trigger_ptr trigger; 
unsigned run_id; 
struct tgr_args args; 
}; 


struct tgr_runner { 

struct tgr_running_data running_data; 
char *triggerable_name; 
tgr_run_mode run_mode; 
tgr_instruction_ptr prev_instruction; 
tgr_instruction_ptr curr_instruction; 
int in_false_block; 
tgr_value return_value; 
tgr_runner_ptr prev_runner; 
}; 



tgr_arg_ptr tgr_arg_alloc(const char * name, tgr_value value); 


void tgr_arg_destroy(tgr_arg_ptr arg); 


void tgr_args_initialize(tgr_args_ptr args); 


tgr_value tgr_args_get_arg(tgr_args_ptr args, const char * name); 


void tgr_args_clear(tgr_args_ptr args); 


void tgr_args_add(tgr_args_ptr args, const char * name, const tgr_value value); 


tgr_runner_ptr tgr_runner_alloc(const char * triggerable_name, tgr_run_mode run_mode, tgr_runner_ptr prev_runner); 




void tgr_runner_destroy(tgr_runner_ptr runner); 


void tgr_runner_skip_directives(tgr_runner_ptr runner); 


void tgr_runner_go_to_next_instruction(tgr_runner_ptr runner); 


void tgr_runner_get_position_for(tgr_runner_ptr runner, tgr_instruction_ptr instruction, const char ** file, unsigned * line); 
#line 91
int tgr_runner_check_for_error_full(tgr_runner_ptr runner, tgr_value_ptr value, const void * details); 




int tgr_runner_check_for_error(tgr_runner_ptr runner, tgr_value_ptr value); 



tgr_value tgr_runner_make_error_full(tgr_runner_ptr runner, tgr_error_kind kind, const void * details); 




tgr_value tgr_runner_make_error(tgr_runner_ptr runner, tgr_error_kind kind); 


int tgr_runner_execute_binary_expression(tgr_runner_ptr runner, tgr_value_ptr left, tgr_value_ptr right, tgr_instruction_ptr instruction); 
#line 114
int tgr_runner_execute_unary_expression(tgr_runner_ptr runner, tgr_value_ptr operand, tgr_instruction_ptr instruction); 




int tgr_runner_execute_built_in_function(tgr_runner_ptr runner, tgr_value_ptr arg, tgr_instruction_ptr instruction); 




int tgr_runner_execute_bool_cast(tgr_runner_ptr runner, tgr_value_ptr value); 



int tgr_runner_parse_args(tgr_runner_ptr runner, tgr_args_ptr args); 


tgr_value tgr_runner_parse_primary_expression(tgr_runner_ptr runner); 


tgr_value tgr_runner_parse_postfix_expression(tgr_runner_ptr runner); 


tgr_value tgr_runner_parse_unary_expression(tgr_runner_ptr runner); 


tgr_value tgr_runner_parse_multiplicative_expression(tgr_runner_ptr runner); 


tgr_value tgr_runner_parse_additive_expression(tgr_runner_ptr runner); 


tgr_value tgr_runner_parse_relational_expression(tgr_runner_ptr runner); 


tgr_value tgr_runner_parse_equality_expression(tgr_runner_ptr runner); 


tgr_value tgr_runner_parse_logical_and_expression(tgr_runner_ptr runner); 


tgr_value tgr_runner_parse_logical_or_expression(tgr_runner_ptr runner); 


tgr_value tgr_runner_parse_assignment_expression(tgr_runner_ptr runner); 


void tgr_runner_parse_statement(tgr_runner_ptr runner); 


tgr_value tgr_runner_run(tgr_runner_ptr runner); 


void tgr_runner_add_arg(tgr_runner_ptr runner, const char * name, const tgr_value arg); 
#line 16 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\trigger/c/runner_helper.h"
struct tgr_runner_helper { 

tgr_runner_helper_ptr (*WithValueArg)(const char * name, tgr_value value); 

tgr_runner_helper_ptr (*WithCharArg)(const char * name, char c); 

tgr_runner_helper_ptr (*WithSCharArg)(const char * name, signed char sc); 

tgr_runner_helper_ptr (*WithUCharArg)(const char * name, unsigned char uc); 

tgr_runner_helper_ptr (*WithWCharArg)(const char * name, short w); 

tgr_runner_helper_ptr (*WithShortArg)(const char * name, short s); 

tgr_runner_helper_ptr (*WithUShortArg)(const char * name, unsigned short us); 

tgr_runner_helper_ptr (*WithIntArg)(const char * name, int i); 

tgr_runner_helper_ptr (*WithUIntArg)(const char * name, unsigned ui); 

tgr_runner_helper_ptr (*WithLongArg)(const char * name, long l); 

tgr_runner_helper_ptr (*WithULongArg)(const char * name, unsigned long ul); 

tgr_runner_helper_ptr (*WithLLongArg)(const char * name, long ll); 

tgr_runner_helper_ptr (*WithULLongArg)(const char * name, unsigned long ull); 

tgr_runner_helper_ptr (*WithFloatArg)(const char * name, float f); 

tgr_runner_helper_ptr (*WithDoubleArg)(const char * name, double d); 

tgr_runner_helper_ptr (*WithLDoubleArg)(const char * name, double ld); 

tgr_runner_helper_ptr (*WithFuncArg)(const char * name, tgr_func_ptr func); 

tgr_runner_helper_ptr (*WithObjectArg)(const char * name, const volatile void * obj, tgr_type_ptr type); 



tgr_runner_helper_ptr (*WithVoidPtrArg)(const char * name, const volatile void * ptr); 

tgr_runner_helper_ptr (*WithCharPtrArg)(const char * name, const volatile char * ptr); 

tgr_runner_helper_ptr (*WithSCharPtrArg)(const char * name, const volatile signed char * ptr); 


tgr_runner_helper_ptr (*WithUCharPtrArg)(const char * name, const volatile unsigned char * ptr); 


tgr_runner_helper_ptr (*WithWCharPtrArg)(const char * name, const volatile short * ptr); 


tgr_runner_helper_ptr (*WithShortPtrArg)(const char * name, const volatile short * ptr); 


tgr_runner_helper_ptr (*WithUShortPtrArg)(const char * name, const volatile unsigned short * ptr); 


tgr_runner_helper_ptr (*WithIntPtrArg)(const char * name, const volatile int * ptr); 

tgr_runner_helper_ptr (*WithUIntPtrArg)(const char * name, const volatile unsigned * ptr); 


tgr_runner_helper_ptr (*WithLongPtrArg)(const char * name, const volatile long * ptr); 

tgr_runner_helper_ptr (*WithULongPtrArg)(const char * name, const volatile unsigned long * ptr); 


tgr_runner_helper_ptr (*WithLLongPtrArg)(const char * name, const volatile long * ptr); 


tgr_runner_helper_ptr (*WithULLongPtrArg)(const char * name, const volatile unsigned long * ptr); 


tgr_runner_helper_ptr (*WithFloatPtrArg)(const char * name, const volatile float * ptr); 


tgr_runner_helper_ptr (*WithDoublePtrArg)(const char * name, const volatile double * ptr); 


tgr_runner_helper_ptr (*WithLDoublePtrArg)(const char * name, const volatile double * ptr); 


tgr_runner_helper_ptr (*WithPtrArg)(const char * name, const volatile void * ptr, tgr_type_ptr element_type); 



tgr_runner_helper_ptr (*WithCharRefArg)(const char * name, const volatile char * ref); 

tgr_runner_helper_ptr (*WithSCharRefArg)(const char * name, const volatile signed char * ref); 


tgr_runner_helper_ptr (*WithUCharRefArg)(const char * name, const volatile unsigned char * ref); 


tgr_runner_helper_ptr (*WithWCharRefArg)(const char * name, const volatile short * ref); 


tgr_runner_helper_ptr (*WithShortRefArg)(const char * name, const volatile short * ref); 


tgr_runner_helper_ptr (*WithUShortRefArg)(const char * name, const volatile unsigned short * ref); 


tgr_runner_helper_ptr (*WithIntRefArg)(const char * name, const volatile int * ref); 

tgr_runner_helper_ptr (*WithUIntRefArg)(const char * name, const volatile unsigned * ref); 


tgr_runner_helper_ptr (*WithLongRefArg)(const char * name, const volatile long * ref); 

tgr_runner_helper_ptr (*WithULongRefArg)(const char * name, const volatile unsigned long * ref); 


tgr_runner_helper_ptr (*WithLLongRefArg)(const char * name, const volatile long * ref); 


tgr_runner_helper_ptr (*WithULLongRefArg)(const char * name, const volatile unsigned long * ref); 


tgr_runner_helper_ptr (*WithFloatRefArg)(const char * name, const volatile float * ref); 


tgr_runner_helper_ptr (*WithDoubleRefArg)(const char * name, const volatile double * ref); 


tgr_runner_helper_ptr (*WithLDoubleRefArg)(const char * name, const volatile double * ref); 


tgr_runner_helper_ptr (*WithVoidPtrRefArg)(const char * name, const volatile void * ref); 


tgr_runner_helper_ptr (*WithPtrRefArg)(const char * name, const volatile void * ptr, tgr_type_ptr element_type); 



tgr_runner_helper_ptr (*WithRefArg)(const char * name, const volatile void * ptr, tgr_type_ptr element_type); 



tgr_value (*End)(); 
}; 


tgr_runner_ptr *tgr_get_curr_runner(void); 


tgr_runner_helper_ptr tgr_runner_helper_with_value_arg(const char * name, tgr_value arg); 



tgr_runner_helper_ptr tgr_runner_helper_with_char_arg(const char * name, char c); 


tgr_runner_helper_ptr tgr_runner_helper_with_schar_arg(const char * name, signed char sc); 


tgr_runner_helper_ptr tgr_runner_helper_with_uchar_arg(const char * name, unsigned char uc); 



tgr_runner_helper_ptr tgr_runner_helper_with_wchar_t_arg(const char * name, short w); 



tgr_runner_helper_ptr tgr_runner_helper_with_short_arg(const char * name, short s); 


tgr_runner_helper_ptr tgr_runner_helper_with_ushort_arg(const char * name, unsigned short us); 



tgr_runner_helper_ptr tgr_runner_helper_with_int_arg(const char * name, int i); 


tgr_runner_helper_ptr tgr_runner_helper_with_uint_arg(const char * name, unsigned ui); 



tgr_runner_helper_ptr tgr_runner_helper_with_long_arg(const char * name, long l); 


tgr_runner_helper_ptr tgr_runner_helper_with_ulong_arg(const char * name, unsigned long ul); 



tgr_runner_helper_ptr tgr_runner_helper_with_llong_arg(const char * name, long ll); 



tgr_runner_helper_ptr tgr_runner_helper_with_ullong_arg(const char * name, unsigned long ull); 



tgr_runner_helper_ptr tgr_runner_helper_with_float_arg(const char * name, float f); 


tgr_runner_helper_ptr tgr_runner_helper_with_double_arg(const char * name, double d); 


tgr_runner_helper_ptr tgr_runner_helper_with_ldouble_arg(const char * name, double ld); 



tgr_runner_helper_ptr tgr_runner_helper_with_func_arg(const char * name, tgr_func_ptr func); 



tgr_runner_helper_ptr tgr_runner_helper_with_object_arg(const char * name, const volatile void * obj, tgr_type_ptr class_type); 



tgr_runner_helper_ptr tgr_runner_helper_with_void_ptr_arg(const char * name, const volatile void * ptr); 



tgr_runner_helper_ptr tgr_runner_helper_with_char_ptr_arg(const char * name, const volatile char * ptr); 



tgr_runner_helper_ptr tgr_runner_helper_with_schar_ptr_arg(const char * name, const volatile signed char * ptr); 




tgr_runner_helper_ptr tgr_runner_helper_with_uchar_ptr_arg(const char * name, const volatile unsigned char * ptr); 




tgr_runner_helper_ptr tgr_runner_helper_with_wchar_t_ptr_arg(const char * name, const volatile short * ptr); 




tgr_runner_helper_ptr tgr_runner_helper_with_short_ptr_arg(const char * name, const volatile short * ptr); 



tgr_runner_helper_ptr tgr_runner_helper_with_ushort_ptr_arg(const char * name, const volatile unsigned short * ptr); 




tgr_runner_helper_ptr tgr_runner_helper_with_int_ptr_arg(const char * name, const volatile int * ptr); 



tgr_runner_helper_ptr tgr_runner_helper_with_uint_ptr_arg(const char * name, const volatile unsigned * ptr); 




tgr_runner_helper_ptr tgr_runner_helper_with_long_ptr_arg(const char * name, const volatile long * ptr); 



tgr_runner_helper_ptr tgr_runner_helper_with_ulong_ptr_arg(const char * name, const volatile unsigned long * ptr); 




tgr_runner_helper_ptr tgr_runner_helper_with_llong_ptr_arg(const char * name, const volatile long * ptr); 




tgr_runner_helper_ptr tgr_runner_helper_with_ullong_ptr_arg(const char * name, const volatile unsigned long * ptr); 




tgr_runner_helper_ptr tgr_runner_helper_with_float_ptr_arg(const char * name, const volatile float * ptr); 



tgr_runner_helper_ptr tgr_runner_helper_with_double_ptr_arg(const char * name, const volatile double * ptr); 




tgr_runner_helper_ptr tgr_runner_helper_with_ldouble_ptr_arg(const char * name, const volatile double * ptr); 




tgr_runner_helper_ptr tgr_runner_helper_with_ptr_arg(const char * name, const volatile void * ptr, tgr_type_ptr element_type); 




tgr_runner_helper_ptr tgr_runner_helper_with_char_ref_arg(const char * name, const volatile char * ref); 



tgr_runner_helper_ptr tgr_runner_helper_with_schar_ref_arg(const char * name, const volatile signed char * ref); 




tgr_runner_helper_ptr tgr_runner_helper_with_uchar_ref_arg(const char * name, const volatile unsigned char * ref); 




tgr_runner_helper_ptr tgr_runner_helper_with_wchar_t_ref_arg(const char * name, const volatile short * ref); 




tgr_runner_helper_ptr tgr_runner_helper_with_short_ref_arg(const char * name, const volatile short * ref); 



tgr_runner_helper_ptr tgr_runner_helper_with_ushort_ref_arg(const char * name, const volatile unsigned short * ref); 




tgr_runner_helper_ptr tgr_runner_helper_with_int_ref_arg(const char * name, const volatile int * ref); 



tgr_runner_helper_ptr tgr_runner_helper_with_uint_ref_arg(const char * name, const volatile unsigned * ref); 




tgr_runner_helper_ptr tgr_runner_helper_with_long_ref_arg(const char * name, const volatile long * ref); 



tgr_runner_helper_ptr tgr_runner_helper_with_ulong_ref_arg(const char * name, const volatile unsigned long * ref); 




tgr_runner_helper_ptr tgr_runner_helper_with_llong_ref_arg(const char * name, const volatile long * ref); 




tgr_runner_helper_ptr tgr_runner_helper_with_ullong_ref_arg(const char * name, const volatile unsigned long * ref); 




tgr_runner_helper_ptr tgr_runner_helper_with_float_ref_arg(const char * name, const volatile float * ref); 



tgr_runner_helper_ptr tgr_runner_helper_with_double_ref_arg(const char * name, const volatile double * ref); 




tgr_runner_helper_ptr tgr_runner_helper_with_ldouble_ref_arg(const char * name, const volatile double * ref); 




tgr_runner_helper_ptr tgr_runner_helper_with_void_ptr_ref_arg(const char * name, const volatile void * ref); 




tgr_runner_helper_ptr tgr_runner_helper_with_ptr_ref_arg(const char * name, const volatile void * ref, tgr_type_ptr element_type); 
#line 389
tgr_runner_helper_ptr tgr_runner_helper_with_ref_arg(const char * name, const volatile void * ref, tgr_type_ptr element_type); 




tgr_value tgr_runner_helper_end(void); 


tgr_runner_helper_ptr tgr_runner_helper_instance(void); 


tgr_runner_helper_ptr tgr_run(const char * name, tgr_run_mode run_mode); 
#line 32 "C:\\\\Program Files (x86)\\\\Renesas\\\\Hew\\\\Tools\\\\Renesas\\\\SH\\\\9_4_3\\\\Include\\\\stdio.h"
extern const int _nfiles; 
#pragma pack 4
#line 42
extern 
#line 34
struct _iobuf { 
unsigned char *_bufptr; 
long _bufcnt; 
unsigned char *_bufbase; 
long _buflen; 
char _ioflag1; 
char _ioflag2; 
char _iofd; 
} _iob[]; 
#pragma unpack


extern volatile int _errno; 
#line 52
typedef struct _iobuf FILE; 


extern int _fillbuf(FILE *); 
extern int _flshbuf(int, FILE *); 
extern void _putcsub(FILE *); 
extern int fclose(FILE *); 
extern int fflush(FILE *); 
extern FILE *fopen(const char *, const char *); 
extern FILE *freopen(const char *, const char *, FILE *); 
extern void setbuf(FILE *, char *); 
extern int setvbuf(FILE *, char *, int, size_t); 
extern int fprintf(FILE *, const char *, ...); 
extern int fscanf(FILE *, const char *, ...); 
extern int printf(const char *, ...); 
extern int scanf(const char *, ...); 
extern int sprintf(char *, const char *, ...); 
extern int sscanf(const char *, const char *, ...); 
extern int vfprintf(FILE *, const char *, char *); 
extern int vprintf(const char *, char *); 
extern int vsprintf(char *, const char *, char *); 
extern int fgetc(FILE *); 
extern char *fgets(char *, int, FILE *); 
extern int fputc(int, FILE *); 
extern int fputs(const char *, FILE *); 
extern int getc(FILE *); 
extern int getchar(void); 
extern char *gets(char *); 
extern int putc(int, FILE *); 
extern int putchar(int); 
extern int puts(const char *); 
extern int ungetc(int, FILE *); 
extern size_t fread(void *, size_t, size_t, FILE *); 
extern size_t fwrite(const void *, size_t, size_t, FILE *); 
extern int fseek(FILE *, long, int); 
extern long ftell(FILE *); 
extern void rewind(FILE *); 
extern void clearerr(FILE *); 
extern int feof(FILE *); 
extern int ferror(FILE *); 
extern void perror(const char *); 
#line 734 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\cpptest.h"
static const char *CPPTEST_DS_GET_CSTR(const char *name) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getCStr || cpptestDsMethodNotInitialized("getCStr"))), (cpptestGetCurrentDataSource()->getCStr))(cpptestGetCurrentDataSource(), name); 
} 
#line 744 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\cpptest.h"
static const char *CPPTEST_DS_GET_MEM_BUFFER(const char *name, unsigned *sizePtr) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getMemBuffer || cpptestDsMethodNotInitialized("getMemBuffer"))), (cpptestGetCurrentDataSource()->getMemBuffer))(cpptestGetCurrentDataSource(), name, sizePtr); 
} 
static long CPPTEST_DS_GET_INTEGER(const char *name) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getInteger || cpptestDsMethodNotInitialized("getInteger"))), (cpptestGetCurrentDataSource()->getInteger))(cpptestGetCurrentDataSource(), name); 
} 
static unsigned long CPPTEST_DS_GET_UINTEGER(const char *name) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getUInteger || cpptestDsMethodNotInitialized("getUInteger"))), (cpptestGetCurrentDataSource()->getUInteger))(cpptestGetCurrentDataSource(), name); 
} 
static double CPPTEST_DS_GET_FLOAT(const char *name) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getFloat || cpptestDsMethodNotInitialized("getFloat"))), (cpptestGetCurrentDataSource()->getFloat))(cpptestGetCurrentDataSource(), name); 
} 
static int CPPTEST_DS_GET_BOOL(const char *name) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getBool || cpptestDsMethodNotInitialized("getBool"))), (cpptestGetCurrentDataSource()->getBool))(cpptestGetCurrentDataSource(), name); 
} 
static char CPPTEST_DS_GET_CHAR(const char *name) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getChar || cpptestDsMethodNotInitialized("getChar"))), (cpptestGetCurrentDataSource()->getChar))(cpptestGetCurrentDataSource(), name); 
} 




static unsigned CPPTEST_DS_GET_ITERATION(void) 
{ 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->getIteration || cpptestDsMethodNotInitialized("getIteration"))), (cpptestGetCurrentDataSource()->getIteration))(cpptestGetCurrentDataSource()); 
} 
static int CPPTEST_DS_HAS_COLUMN(const char *name) 
{ 
if (cpptestGetCurrentDataSource() && ((((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->hasColumn || cpptestDsMethodNotInitialized("hasColumn"))), (cpptestGetCurrentDataSource()->hasColumn)))) { 
return (((cpptestGetCurrentDataSource() || cpptestDsNotInitialized()), (cpptestGetCurrentDataSource()->hasColumn || cpptestDsMethodNotInitialized("hasColumn"))), (cpptestGetCurrentDataSource()->hasColumn))(cpptestGetCurrentDataSource(), name); 
}  
return 0; 
} 
#line 1011 "C:\\\\Program Files\\\\Parasoft\\\\C++test\\\\10.5\\\\engine\\\\runtime\\\\include\\\\cpptest.h"
typedef int CPPTEST_CALL_ROUTINE(const char *); 
#line 36 "C:\\\\CI_hew\\\\UnitTest_Workspace\\\\UnitTest\\\\stubs\\\\1.c"
int func(); 
#if defined(CPPTEST_USER_STUB_func)
#line 37
int CppTest_Stub_func_func(void) 
{ 
CppTest_StubInfo *__CPTR_si = cpptestStubCalled((&CppTest_StubInfo_user_func_1)); 

int __return = 0; 
#line 58
if ((__CPTR_si->callbackPtr != 0)) { 
typedef void (*__CPTR_callback_signature)(CppTest_StubCallInfo * stubCallInfo, int * __return); 
do { CppTest_StubCallInfo __CPTR_sci; __CPTR_sci.stubInfo = __CPTR_si; __CPTR_sci.callNo = 0; ((__CPTR_callback_signature)cpptestStubInvokeCallback(&__CPTR_sci))(&__CPTR_sci, &__return); } while (0); 

} else { 


}  

return __return; 
} 
#endif

#line 1 "__TEST_HARNESS__"




