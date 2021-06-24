
#ifndef CPPTEST_AUTO_INITIALIZATION
#  define CPPTEST_AUTO_INITIALIZATION 1
#endif

#define CPPTEST_APP_MODE 0
#define CPPTEST_ASMTOOL_MODE 0
#define CPPTEST_DEBUGGER_MODE 0

#if CPPTEST_APP_MODE
#  define CPPTEST_ENTRY_POINT_DEFINED
#endif

#ifndef CPPTEST_SUPPLEMENT_USED
#  define CPPTEST_SUPPLEMENT_USED 0
#endif

#ifndef CPPTEST_MS_SETERROR_AVAILABLE
#  define CPPTEST_MS_SETERROR_AVAILABLE CPPTEST_SUPPLEMENT_USED
#endif

#ifndef CPPTEST_MS_DEBUG_REPORT_AVAILABLE
#  define CPPTEST_MS_DEBUG_REPORT_AVAILABLE CPPTEST_SUPPLEMENT_USED
#endif

#ifndef CPPTEST_CONFIGURE_MS_SETERROR
#  define CPPTEST_CONFIGURE_MS_SETERROR !CPPTEST_APP_MODE && CPPTEST_MS_SETERROR_AVAILABLE
#endif

#ifndef CPPTEST_CONFIGURE_MS_DEBUG_REPORT
#  define CPPTEST_CONFIGURE_MS_DEBUG_REPORT !CPPTEST_APP_MODE && CPPTEST_MS_DEBUG_REPORT_AVAILABLE
#endif

#ifndef CPPTEST_CONFIGURE_MS_INVALID_PARAM_HANDLER
#  if !CPPTEST_APP_MODE && CPPTEST_MS_DEBUG_REPORT_AVAILABLE && CPPTEST_WCHAR_ENABLED && _MSC_VER >= 1400 && defined(__cplusplus)
#    define CPPTEST_CONFIGURE_MS_INVALID_PARAM_HANDLER 1
#  else
#    define CPPTEST_CONFIGURE_MS_INVALID_PARAM_HANDLER 0
#  endif
#endif

#ifndef CPPTEST_USE_CPPTEST_INITIALIZE
#  define CPPTEST_USE_CPPTEST_INITIALIZE 0
#endif

#ifndef CPPTEST_USE_CPPTEST_FINALIZE
#  define CPPTEST_USE_CPPTEST_FINALIZE 0
#endif

#include "cpptest_driver.c.h"
#include "cpptest_coverage.h"
#include "cpptest_memory_analysis.h"
#if CPPTEST_DEBUGGER_MODE
#  include "cpptest_debug.h"
#endif

/*****************************************************************************
 *
 *                               Enumerators data
 *
 ****************************************************************************/

static CppTestEnumTypeString __CPTR_enums[] = {
    {0, 0}
};

/*****************************************************************************
 *
 *                               Stub callbacks data
 *
 ****************************************************************************/
#include "C:\CI_hew\UnitTest_Workspace\.cpptest\UnitTest\unit-data\current_tubf179707/cpptest_stubconfig.h"


CppTest_StubInfo CppTest_StubInfo_user_func_1 = 
{
    "func", 
    /*callbackPtr=*/0, 
    /*lastCallNo=*/0, 
    CPPTEST_STUB_FLAG_HAS_CALLBACK
#ifndef CPPTEST_USER_STUB_func
        | CPPTEST_STUB_FLAG_HAS_BEEN_REMOVED
#endif
#ifndef CPPTEST_UNDEFINED_func
        | CPPTEST_STUB_FLAG_ORIGINAL_DEF_AVAILABLE
#endif
    ,
    /*firstChecker=*/0, 
    /*lastChecker=*/0
};

CppTest_StubInfo* __CPTR_StubInfos[] = 
{
    &CppTest_StubInfo_user_func_1,
    0
};

/*****************************************************************************
 *
 *                            Fast Coverage data
 *
 ****************************************************************************/


#ifdef CPPTEST_FAST_COV_CUST_TRANSPORT
#error "Macro CPPTEST_FAST_COV_CUST_TRANSPORT is no longer supported"
#endif

/*****************************************************************************
 *
 *        User additional lines (testrunner.addSourceLine string)
 *
 ****************************************************************************/


/*****************************************************************************
 *
 *                          C++Test properties
 *
 ****************************************************************************/


CppTest_Property  __CPTR_properties[] =
{
    {"test.app_mode", "0"},
#if defined(CPPTEST_MAX_MESSAGES_NUMBER)
    {"testcases.max_messages", CPPTEST_QUOTE(CPPTEST_MAX_MESSAGES_NUMBER)},
#endif
#if CPPTEST_DEBUGGER_MODE
    {"testcases.timeout", "0"},
#elif defined(CPPTEST_TIMEOUT_PER_TEST_CASE) && !CPPTEST_APP_MODE
    {"testcases.timeout", CPPTEST_QUOTE(CPPTEST_TIMEOUT_PER_TEST_CASE)},
#endif
#if defined(CPPTEST_MAX_ALLOWED_STACK_TRACE_DEPTH)
   {"test.max_st_depth", CPPTEST_QUOTE(CPPTEST_MAX_ALLOWED_STACK_TRACE_DEPTH)},
#endif
#if defined(CPPTEST_THREADS)
    {"threads.enabled", CPPTEST_QUOTE(CPPTEST_THREADS)},
#endif
    {"testlog.enabled", "true"},
    {"testlog.file", "C:\\CI_hew\\UnitTest_Workspace\\.cpptest\\UnitTest\\unit-data\\current_tubf179707/cpptest_results.tlog"},
    {"testlog.encoding", "windows-31j"},
    {"testlog.append", "true"},
    {"covlog.enabled", "true"},
    {"covlog.file", "C:\\CI_hew\\UnitTest_Workspace\\.cpptest\\UnitTest\\unit-data\\current_tubf179707/cpptest_results.clog"},
    {"covlog.append", "true"},
    {"testcases.timeout", "50000"},
    {"testcases.max_messages", "100"},
    {"send.post.conditions", "1"},
    {"send.reports", "1"},
    {"send.passed.asserts", "1"},
    {0, 0}
};


/*****************************************************************************
 *
 *               C++Test runtime initialization/finalization
 *
 ****************************************************************************/

#if CPPTEST_CONFIGURE_MS_SETERROR
EXTERN_C_LINKAGE unsigned int __stdcall SetErrorMode(unsigned int);
EXTERN_C_LINKAGE int __cdecl _set_error_mode(int);
#endif /* CPPTEST_CONFIGURE_MS_SETERROR */

#if CPPTEST_CONFIGURE_MS_DEBUG_REPORT
#undef _CrtSetReportMode
#undef _CrtSetReportFile
EXTERN_C_LINKAGE int __cdecl _CrtSetReportMode(int, int);
EXTERN_C_LINKAGE void* __cdecl _CrtSetReportFile(int, void*);
#endif /* CPPTEST_CONFIGURE_MS_DEBUG_REPORT */

#if CPPTEST_CONFIGURE_MS_INVALID_PARAM_HANDLER
void __cdecl cpptest_invalid_parameter_handler(
        const wchar_t * expression, const wchar_t * function, 
        const wchar_t * file, unsigned int line, uintptr_t pReserved)
{
    cpptestInvalidParamCalled(expression, function, file, line);
}
#endif /* CPPTEST_CONFIGURE_MS_INVALID_PARAM_HANDLER */


static int __CPTR_runtimeInitialized = 0;

EXTERN_C_LINKAGE void CppTest_InitializeRuntime(void)
{
    int cpptest_rout_var = cpptest_enter_routine(&cpptest_rout_var);
    if (!__CPTR_runtimeInitialized) {
        __CPTR_runtimeInitialized = 1;

#if CPPTEST_USE_CPPTEST_INITIALIZE
        CppTest_Initialize();
#endif /* CPPTEST_USE_CPPTEST_INITIALIZE */

#if CPPTEST_CONFIGURE_MS_SETERROR
        SetErrorMode(2);
        _set_error_mode(1);
#endif /* CPPTEST_CONFIGURE_MS_SETERROR */

#if CPPTEST_CONFIGURE_MS_DEBUG_REPORT
        _CrtSetReportMode(0, 1); 
        _CrtSetReportMode(1, 1); 
        _CrtSetReportMode(2, 1);
        _CrtSetReportFile(0, (void *) -5); 
        _CrtSetReportFile(1, (void *) -5); 
        _CrtSetReportFile(2, (void *) -5);
#endif /* CPPTEST_CONFIGURE_MS_DEBUG_REPORT */

#if CPPTEST_CONFIGURE_MS_INVALID_PARAM_HANDLER
        _set_invalid_parameter_handler(&cpptest_invalid_parameter_handler);
#endif /* CPPTEST_CONFIGURE_MS_INVALID_PARAM_HANDLER */

#if CPPTEST_TRIGGER_ENABLED && !CPPTEST_APP_MODE
        cpptestAddRuntimeCommandHandler(&runtimeCommandTriggerHandlerNode);
        cpptestAddRuntimeCommandHandler(&runtimeCommandExpectationHandlerNode);
#endif /* CPPTEST_TRIGGER_ENABLED */
        cpptestInitializeRuntime(
                (CppTestThreadInitCallback)&threadInitializer,
                &(__CPTR_properties[0]),
                &(__CPTR_enums[0]),
                __CPTR_StubInfos,
                CPPTEST_TARGET_SYSTEM_PTR);
                

    }
}

EXTERN_C_LINKAGE void CppTest_FinalizeRuntime(void)
{
    if (__CPTR_runtimeInitialized) {
        __CPTR_runtimeInitialized = 0;
#if CPPTEST_APP_MODE
        cpptestCheckMemoryLeaks(__FILE__, __LINE__, 0);
#endif
        cpptestSendFastCoverage();
        cpptestFinalizeRuntime();
#if CPPTEST_USE_CPPTEST_FINALIZE
        CppTest_Finalize();
#endif /* CPPTEST_USE_CPPTEST_FINALIZE */
    }
}


static int __CPTR_autoFinalizersCounter = 0;

/* Routine called very early. In c++ mode this is called from constructor
   of global object. In c mode this is called at beginning of CppTest_Main
   method. */
EXTERN_C_LINKAGE void CDECL_CALL cpptestAutoInitializeRuntime(void)
{
#if CPPTEST_AUTO_INITIALIZATION
    CppTest_InitializeRuntime();
#endif
}

EXTERN_C_LINKAGE void CDECL_CALL cpptestAutoFinalizerConstructor(void)
{
    ++__CPTR_autoFinalizersCounter;
}

EXTERN_C_LINKAGE void CDECL_CALL cpptestAutoFinalizerDestructor(void)
{
    if (--__CPTR_autoFinalizersCounter <= 0) {
        CppTest_FinalizeRuntime();
    }
}

EXTERN_C_LINKAGE void CDECL_CALL cpptestAutoFinalizeRuntime(void)
{
    if (__CPTR_autoFinalizersCounter <= 0) {
        CppTest_FinalizeRuntime();
    }
}

#if defined(__cplusplus) && CPPTEST_APP_MODE

#if CPPTEST_USE_GLOBAL_AUTO_INITIALIZER
struct __CPTR_Initializer_Driver
{
    __CPTR_Initializer_Driver() { cpptestAutoInitializeRuntime(); }
};
static __CPTR_Initializer_Driver __CPTR_initializer;
#endif

#if CPPTEST_USE_GLOBAL_AUTO_FINALIZER
struct __CPTR_Finalizer_Driver
{
    __CPTR_Finalizer_Driver() { cpptestAutoFinalizerConstructor(); }
    ~__CPTR_Finalizer_Driver() { cpptestAutoFinalizerDestructor(); }
};
static __CPTR_Finalizer_Driver __CPTR_finalizer;
#endif

#endif /* defined(__cplusplus) && CPPTEST_APP_MODE */

/*****************************************************************************
 *
 *                                Data Sources
 *
 ****************************************************************************/

#if !CPPTEST_APP_MODE && CPPTEST_DATA_SOURCES_ENABLED

#include "C:\\CI_hew\\UnitTest_Workspace\\.cpptest\\UnitTest\\unit-data\\current_tubf179707\\ds_TestSuite_sample_c_cd981db_test_case.array"

#if CPPTEST_CSV_DATA_SOURCE_ENABLED
#   define CPPTEST_DS_CSV_OR_NULL(FILE, SEPARATOR, HEADER, TRIM) CPPTEST_DS_CSV(FILE, SEPARATOR, HEADER, TRIM)
#else
#   define CPPTEST_DS_CSV_OR_NULL(FILE, SEPARATOR, HEADER, TRIM) 0
#endif

extern CppTest_GetDataSourceFPtr CppTest_getDSFPtr;

EXTERN_C_LINKAGE_START
static CppTest_DataSource* CDECL_CALL __CPTR_Get_Data_Source(const char* dataSource, const char* testSuite)
{
    if ((cpptestStrCmp(dataSource, "test_case") == 0) && (cpptestStrCmp(testSuite, "TestSuite_sample_c_cd981db") == 0)) {
        return CPPTEST_DS_ARRAY(_c7f87f35, 2, 2);
    }

    return 0;
}
EXTERN_C_LINKAGE_END
#endif /* !CPPTEST_APP_MODE && CPPTEST_DATA_SOURCES_ENABLED */

/*****************************************************************************
 *
 *                                Test Cases
 *
 ****************************************************************************/

#if !CPPTEST_APP_MODE

static CPPTEST_INTEGER __CPTR_Test_Manager_Count = 0;
static CPPTEST_INTEGER __CPTR_Test_Manager_Start_Id = 0;
static const char* __CPTR_Test_Manager_TestSuite = 0;
static const char* __CPTR_Test_Manager_TestCase = 0;

static int __CPTR_Test_Manager_Test(const char* testSuite, const char* testCase)
{
    __CPTR_Test_Manager_Count++;
    if (__CPTR_Test_Manager_TestSuite && cpptestStrCmp(__CPTR_Test_Manager_TestSuite, testSuite) != 0) {
        return 0;
    }
    if (__CPTR_Test_Manager_TestCase && cpptestStrCmp(__CPTR_Test_Manager_TestCase, testCase) != 0) {
        return 0;
    }
    return __CPTR_Test_Manager_Count > __CPTR_Test_Manager_Start_Id;
}

EXTERN_C_LINKAGE void TestSuite_sample_c_cd981db_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_sample_c_cd981db_callTest(const char*);

static void __CPTR_Do_Tests_TestSuite_sample_c_cd981db(void)
{
    CPPTEST_RUN_TEST_SUITE_BEGIN(TestSuite_sample_c_cd981db, "/UnitTest/sample.c", 1)
        CPPTEST_RUN_TEST_SUITE_SETUP(TestSuite_sample_c_cd981db)
        CPPTEST_RUN_TEST_CASE(TestSuite_sample_c_cd981db, TestSuite_sample_c_cd981db_test_case)
        CPPTEST_RUN_TEST_SUITE_TEARDOWN(TestSuite_sample_c_cd981db)
    CPPTEST_RUN_TEST_SUITE_END(TestSuite_sample_c_cd981db, 1)
}

static void __CPTR_Do_Tests(void)
{
    __CPTR_Test_Manager_Start_Id = cpptestGetIntPropertyEx("execution.start_after", __CPTR_Test_Manager_Start_Id);
    __CPTR_Test_Manager_TestSuite = cpptestGetProperty("execution.testsuite");
    __CPTR_Test_Manager_TestCase = cpptestGetProperty("execution.testcase");
#if CPPTEST_DATA_SOURCES_ENABLED
    CppTest_getDSFPtr = __CPTR_Get_Data_Source;
#endif
    cpptestTestRunnerBegin();
    __CPTR_Do_Tests_TestSuite_sample_c_cd981db();
    cpptestTestRunnerEnd();
}

static int __CPTR_Parse_Int_Option(const char* arg, const char* param, CPPTEST_INTEGER* value)
{
    unsigned int argLen = cpptestStrLen(arg);
    if (cpptestStrNCmp(arg, param, argLen) == 0) {
        CPPTEST_INTEGER tmpValue = 0;
        const char* end = cpptestStrToInteger(param + argLen, &tmpValue);
        if (*end == '\0') {
            *value = tmpValue;
            return 1;
        }
    }
    return 0;
}

static void __CPTR_Test_Manager_Init(int argc, char* argv[])
{
    int i;
    for (i = 0; i < argc; ++i) {
        if (__CPTR_Parse_Int_Option("--start-after=", argv[i], &__CPTR_Test_Manager_Start_Id)) {
            continue;
        }
    }
#if CPPTEST_DEBUGGER_MODE
    CppTest_initDebugger((argv ? argv[0] : ""), "");
    CppTest_attachDebugger();
#endif
}

#if CPPTEST_WCHAR_ENABLED
static int __CPTR_Parse_Int_OptionW(const CppTest_wchar_t* arg, const CppTest_wchar_t* param, CPPTEST_INTEGER* value)
{
    unsigned int argLen = cpptestWStrLen(arg);
    if (cpptestWStrNCmp(arg, param, argLen) == 0) {
        CPPTEST_INTEGER tmpValue = 0;
        const CppTest_wchar_t* end = cpptestWStrToInteger(param + argLen, &tmpValue);
        if (*end == L'\0') {
            *value = tmpValue;
            return 1;
        }
    }
    return 0;
}

static void __CPTR_Test_Manager_InitW(int argc, CppTest_wchar_t* argv[])
{
    int i;
    for (i = 0; i < argc; ++i) {
        if (__CPTR_Parse_Int_OptionW(CPPTEST_const_wchar_t_ptr_CAST L"--start-after=", argv[i], &__CPTR_Test_Manager_Start_Id)) {
            continue;
        }
    }
#if CPPTEST_DEBUGGER_MODE
    CppTest_initDebugger((char*)0, "");
    CppTest_attachDebugger();
#endif
}
#endif /* CPPTEST_WCHAR_ENABLED */

#if CPPTEST_ASMTOOL_MODE
EXTERN_C void asmtool_DumpBlock(void);
#endif

#if CPPTEST_CUBESUITE
extern char nTestData[256];
unsigned int myTestFlag = 0;
#endif /* CPPTEST_CUBESUITE */
EXTERN_C_LINKAGE int CppTest_Main(int argc, char* argv[])
{
    CppTest_InitializeRuntime();

    __CPTR_Test_Manager_Init(argc, argv);

    __CPTR_Do_Tests();

    CppTest_FinalizeRuntime();
#if CPPTEST_CUBESUITE
	myTestFlag = 1;
#endif /* CPPTEST_CUBESUITE */

#if CPPTEST_ASMTOOL_MODE
    asmtool_DumpBlock();
#endif

    return 0;
}

#if CPPTEST_WCHAR_ENABLED
EXTERN_C_LINKAGE int CppTest_MainW(int argc, CppTest_wchar_t* argv[])
{
    CppTest_InitializeRuntime();

    __CPTR_Test_Manager_InitW(argc, argv);

    __CPTR_Do_Tests();

   CppTest_FinalizeRuntime();
#if CPPTEST_CUBESUITE
	myTestFlag = 1;
#endif /* CPPTEST_CUBESUITE */

#if CPPTEST_ASMTOOL_MODE
    asmtool_DumpBlock();
#endif

    return 0;
}
#endif /* CPPTEST_WCHAR_ENABLED */


EXTERN_C_LINKAGE void CppTest_ModuleMain(int startAfter)
{
    __CPTR_Test_Manager_Start_Id = startAfter;

    CppTest_Main(0, 0);
}

#endif /* !CPPTEST_APP_MODE */

