#include "build/temp/_test_appl_adc.c"
#include "appl_adc.h"
#include "mock_adc_handler.h"
#include "mock_bsp_adc.h"
#include "unity.h"














void setUp(void)

{





    enum E_ApplAdcChannel channel;

    for (channel = 0; channel < APPL_ADC_CH_CNT; channel++){

        adc_handler__ctor_CMockIgnoreAndReturn(45, ADC_HANDLER_RES__OK);

    }





    appl_adc__init();

}



void tearDown(void)

{



}









void test_voltage_get(void)

{



    bsp_adc__value__get_CMockExpectAndReturn(













            70

    , APPL_ADC_CH__I_SETT, 123)













             ;







    adc_handler__voltage__get_by_counts_value_CMockIgnoreAndReturn(74, 456);







    T_ADCHandler_Voltage voltage = appl_adc__voltage__get(

            APPL_ADC_CH__I_SETT

            );





    UnityAssertEqualNumber((UNITY_INT)((456)), (UNITY_INT)((voltage)), (

   ((void *)0)

   ), (UNITY_UINT)(83), UNITY_DISPLAY_STYLE_INT);

}
