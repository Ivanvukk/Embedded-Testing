/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_bsp_adc.h"

static const char* CMockString_bsp_adc__init = "bsp_adc__init";
static const char* CMockString_bsp_adc__proceed = "bsp_adc__proceed";
static const char* CMockString_bsp_adc__value__get = "bsp_adc__value__get";
static const char* CMockString_channel_num = "channel_num";

typedef struct _CMOCK_bsp_adc__init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;

} CMOCK_bsp_adc__init_CALL_INSTANCE;

typedef struct _CMOCK_bsp_adc__value__get_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  T_BspAdcCounts ReturnVal;
  int CallOrder;
  enum E_ApplAdcChannel Expected_channel_num;

} CMOCK_bsp_adc__value__get_CALL_INSTANCE;

typedef struct _CMOCK_bsp_adc__proceed_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;

} CMOCK_bsp_adc__proceed_CALL_INSTANCE;

static struct mock_bsp_adcInstance
{
  int bsp_adc__init_IgnoreBool;
  CMOCK_bsp_adc__init_CALLBACK bsp_adc__init_CallbackFunctionPointer;
  int bsp_adc__init_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE bsp_adc__init_CallInstance;
  int bsp_adc__value__get_IgnoreBool;
  T_BspAdcCounts bsp_adc__value__get_FinalReturn;
  CMOCK_bsp_adc__value__get_CALLBACK bsp_adc__value__get_CallbackFunctionPointer;
  int bsp_adc__value__get_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE bsp_adc__value__get_CallInstance;
  int bsp_adc__proceed_IgnoreBool;
  CMOCK_bsp_adc__proceed_CALLBACK bsp_adc__proceed_CallbackFunctionPointer;
  int bsp_adc__proceed_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE bsp_adc__proceed_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_bsp_adc_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.bsp_adc__init_IgnoreBool)
    Mock.bsp_adc__init_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_bsp_adc__init);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.bsp_adc__init_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.bsp_adc__init_CallbackFunctionPointer != NULL)
    Mock.bsp_adc__init_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.bsp_adc__value__get_IgnoreBool)
    Mock.bsp_adc__value__get_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_bsp_adc__value__get);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.bsp_adc__value__get_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.bsp_adc__value__get_CallbackFunctionPointer != NULL)
    Mock.bsp_adc__value__get_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.bsp_adc__proceed_IgnoreBool)
    Mock.bsp_adc__proceed_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_bsp_adc__proceed);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.bsp_adc__proceed_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.bsp_adc__proceed_CallbackFunctionPointer != NULL)
    Mock.bsp_adc__proceed_CallInstance = CMOCK_GUTS_NONE;
}

void mock_bsp_adc_Init(void)
{
  mock_bsp_adc_Destroy();
}

void mock_bsp_adc_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.bsp_adc__init_CallbackFunctionPointer = NULL;
  Mock.bsp_adc__init_CallbackCalls = 0;
  Mock.bsp_adc__value__get_CallbackFunctionPointer = NULL;
  Mock.bsp_adc__value__get_CallbackCalls = 0;
  Mock.bsp_adc__proceed_CallbackFunctionPointer = NULL;
  Mock.bsp_adc__proceed_CallbackCalls = 0;
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

void bsp_adc__init(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_bsp_adc__init_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_bsp_adc__init);
  cmock_call_instance = (CMOCK_bsp_adc__init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.bsp_adc__init_CallInstance);
  Mock.bsp_adc__init_CallInstance = CMock_Guts_MemNext(Mock.bsp_adc__init_CallInstance);
  if (Mock.bsp_adc__init_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (Mock.bsp_adc__init_CallbackFunctionPointer != NULL)
  {
    Mock.bsp_adc__init_CallbackFunctionPointer(Mock.bsp_adc__init_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  UNITY_CLR_DETAILS();
}

void bsp_adc__init_CMockIgnore(void)
{
  Mock.bsp_adc__init_IgnoreBool = (int)1;
}

void bsp_adc__init_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_bsp_adc__init_CALL_INSTANCE));
  CMOCK_bsp_adc__init_CALL_INSTANCE* cmock_call_instance = (CMOCK_bsp_adc__init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.bsp_adc__init_CallInstance = CMock_Guts_MemChain(Mock.bsp_adc__init_CallInstance, cmock_guts_index);
  Mock.bsp_adc__init_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  UNITY_CLR_DETAILS();
}

void bsp_adc__init_StubWithCallback(CMOCK_bsp_adc__init_CALLBACK Callback)
{
  Mock.bsp_adc__init_IgnoreBool = (int)0;
  Mock.bsp_adc__init_CallbackFunctionPointer = Callback;
}

T_BspAdcCounts bsp_adc__value__get(enum E_ApplAdcChannel channel_num)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_bsp_adc__value__get_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_bsp_adc__value__get);
  cmock_call_instance = (CMOCK_bsp_adc__value__get_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.bsp_adc__value__get_CallInstance);
  Mock.bsp_adc__value__get_CallInstance = CMock_Guts_MemNext(Mock.bsp_adc__value__get_CallInstance);
  if (Mock.bsp_adc__value__get_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.bsp_adc__value__get_FinalReturn;
    memcpy(&Mock.bsp_adc__value__get_FinalReturn, &cmock_call_instance->ReturnVal, sizeof(T_BspAdcCounts));
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.bsp_adc__value__get_CallbackFunctionPointer != NULL)
  {
    return Mock.bsp_adc__value__get_CallbackFunctionPointer(channel_num, Mock.bsp_adc__value__get_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_bsp_adc__value__get,CMockString_channel_num);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_channel_num), (void*)(&channel_num), sizeof(enum E_ApplAdcChannel), cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_bsp_adc__value__get(CMOCK_bsp_adc__value__get_CALL_INSTANCE* cmock_call_instance, enum E_ApplAdcChannel channel_num)
{
  memcpy(&cmock_call_instance->Expected_channel_num, &channel_num, sizeof(enum E_ApplAdcChannel));
}

void bsp_adc__value__get_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, T_BspAdcCounts cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_bsp_adc__value__get_CALL_INSTANCE));
  CMOCK_bsp_adc__value__get_CALL_INSTANCE* cmock_call_instance = (CMOCK_bsp_adc__value__get_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.bsp_adc__value__get_CallInstance = CMock_Guts_MemChain(Mock.bsp_adc__value__get_CallInstance, cmock_guts_index);
  Mock.bsp_adc__value__get_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.bsp_adc__value__get_IgnoreBool = (int)1;
}

void bsp_adc__value__get_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, enum E_ApplAdcChannel channel_num, T_BspAdcCounts cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_bsp_adc__value__get_CALL_INSTANCE));
  CMOCK_bsp_adc__value__get_CALL_INSTANCE* cmock_call_instance = (CMOCK_bsp_adc__value__get_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.bsp_adc__value__get_CallInstance = CMock_Guts_MemChain(Mock.bsp_adc__value__get_CallInstance, cmock_guts_index);
  Mock.bsp_adc__value__get_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_bsp_adc__value__get(cmock_call_instance, channel_num);
  memcpy(&cmock_call_instance->ReturnVal, &cmock_to_return, sizeof(T_BspAdcCounts));
  UNITY_CLR_DETAILS();
}

void bsp_adc__value__get_StubWithCallback(CMOCK_bsp_adc__value__get_CALLBACK Callback)
{
  Mock.bsp_adc__value__get_IgnoreBool = (int)0;
  Mock.bsp_adc__value__get_CallbackFunctionPointer = Callback;
}

void bsp_adc__proceed(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_bsp_adc__proceed_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_bsp_adc__proceed);
  cmock_call_instance = (CMOCK_bsp_adc__proceed_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.bsp_adc__proceed_CallInstance);
  Mock.bsp_adc__proceed_CallInstance = CMock_Guts_MemNext(Mock.bsp_adc__proceed_CallInstance);
  if (Mock.bsp_adc__proceed_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  if (Mock.bsp_adc__proceed_CallbackFunctionPointer != NULL)
  {
    Mock.bsp_adc__proceed_CallbackFunctionPointer(Mock.bsp_adc__proceed_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  UNITY_CLR_DETAILS();
}

void bsp_adc__proceed_CMockIgnore(void)
{
  Mock.bsp_adc__proceed_IgnoreBool = (int)1;
}

void bsp_adc__proceed_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_bsp_adc__proceed_CALL_INSTANCE));
  CMOCK_bsp_adc__proceed_CALL_INSTANCE* cmock_call_instance = (CMOCK_bsp_adc__proceed_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.bsp_adc__proceed_CallInstance = CMock_Guts_MemChain(Mock.bsp_adc__proceed_CallInstance, cmock_guts_index);
  Mock.bsp_adc__proceed_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  UNITY_CLR_DETAILS();
}

void bsp_adc__proceed_StubWithCallback(CMOCK_bsp_adc__proceed_CALLBACK Callback)
{
  Mock.bsp_adc__proceed_IgnoreBool = (int)0;
  Mock.bsp_adc__proceed_CallbackFunctionPointer = Callback;
}

