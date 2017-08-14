/*******************************************************************************
 *    INCLUDED FILES
 ******************************************************************************/
 
//-- unity: unit test framework
#include "unity.h"
//-- mocked modules
#include "mock_bsp_adc.h"
#include "mock_adc_handler.h"
//-- module being tested: ADC handler
#include "appl_adc.h"

//-- module being tested
//   TODO
 
 
/*******************************************************************************
 *    DEFINITIONS
 ******************************************************************************/

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
    //-- ADC handler constructor is going to be called for each channel.
    //   Mocked constructors all return ADC_HANDLER_RES__OK.
    enum E_ApplAdcChannel channel;
    for (channel = 0; channel < APPL_ADC_CH_CNT; channel++){
        adc_handler__ctor_IgnoreAndReturn(ADC_HANDLER_RES__OK);
    }
 
    //-- before each test, re-initialize appl_adc module
    appl_adc__init();
}
 
void tearDown(void)
{

}
 
/*******************************************************************************
 *    TESTS
 ******************************************************************************/
void test_voltage_get(void)
{
    //-- We expect bsp_adc__value__get() to be called:
    bsp_adc__value__get_ExpectAndReturn(
            //-- the argument that is expected to be given to
            //   bsp_adc__value__get()
            APPL_ADC_CH__I_SETT,
 
            //-- and the value that bsp_adc__value__get() should return
            123
            );
 
    //-- Expect call to adc_handler__voltage__get_by_counts_value(),
    //   ignoring arguments. The mocked version just returns 456.
    adc_handler__voltage__get_by_counts_value_IgnoreAndReturn(456);
 
    //-- actually call the function being tested, that should perform
    //   all pending expected calls
    T_ADCHandler_Voltage voltage = appl_adc__voltage__get(
            APPL_ADC_CH__I_SETT
            );
 
    //-- check the voltage returned (it should be 456 from the mock above)
    TEST_ASSERT_EQUAL_INT(456, voltage);
}