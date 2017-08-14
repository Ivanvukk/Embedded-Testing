#include "build/temp/_test_appl_adc.c"
#include "adc_handler.h"
#include "appl_adc.h"
#include "mock_bsp_adc.h"
#include "unity.h"














void setUp(void)

{



    appl_adc__init();

}



void tearDown(void)

{



}









void test_voltage_get(void)

{



    bsp_adc__value__get_CMockExpectAndReturn(













            63

    , APPL_ADC_CH__I_SETT, (0x3ff / 2))













             ;







    T_ADCHandler_Voltage voltage = appl_adc__voltage__get(

            APPL_ADC_CH__I_SETT

            );









    UnityAssertEqualNumber((UNITY_INT)(((5 * 100))), (UNITY_INT)((voltage)), (

   ((void *)0)

   ), (UNITY_UINT)(74), UNITY_DISPLAY_STYLE_INT);

}
