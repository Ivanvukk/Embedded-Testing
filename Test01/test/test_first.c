/*******************************************************************************
 *    INCLUDED FILES
 ******************************************************************************/
 
//-- unity: unit test framework
#include "unity.h"
//-- module being tested: ADC handler
#include "adc_handler.h"

//-- module being tested
//   TODO
 
 
/*******************************************************************************
 *    DEFINITIONS
 ******************************************************************************/
static T_ADCHandler     _adc_handler;
static T_ADCHandler_Res _ctor_result;
/*******************************************************************************
 *    PRIVATE TYPES
 ******************************************************************************/
 
/*******************************************************************************
 *    PRIVATE DATA
 ******************************************************************************/
 
 
/*******************************************************************************
 *    PRIVATE FUNCTIONS
 ******************************************************************************/
 
 
/*******************************************************************************
 *    SETUP, TEARDOWN
 ******************************************************************************/
 
void setUp(void)
{
    T_ADCHandler_CtorParams params = {};
 
    //-- 10-bit ADC
    params.max_counts = 0x3ff;
 
    //-- board-dependent maximum measured voltage: 10 Volts
    params.bsp_max_voltage = 10/*V*/ * ADC_HANDLER__SCALE_FACTOR__U;
 
    //-- the offset is 0 Volts
    params.nominal_add_volts = 0/*V*/;
 
 
    //-- construct the ADC handler, saving the result to _ctor_result
    _ctor_result = adc_handler__ctor(&_adc_handler, &params);
}
 
void tearDown(void)
{
    adc_handler__dtor(&_adc_handler);
}
 
/*******************************************************************************
 *    TESTS
 ******************************************************************************/
 
void test_ctor_ok(void)
{
    //-- check that constructor returned OK
    TEST_ASSERT_EQUAL_INT(ADC_HANDLER_RES__OK, _ctor_result);
}