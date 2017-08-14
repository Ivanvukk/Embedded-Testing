#include "build/temp/_test_appl_adc.c"
#include "appl_adc.h"
#include "mock_adc_handler.h"
#include "mock_bsp_adc.h"
#include "unity.h"






















 extern T_ADCHandler *_appl_adc__adc_handler__get(enum E_ApplAdcChannel channel);

 static T_ADCHandler_Voltage _get_by_counts_value_Callback(

        T_ADCHandler *me,

        T_ADCHandler_CountsValue counts_value,

        int num_calls

        )

{

    T_ADCHandler_Voltage ret = 0;



    switch (num_calls){

        case 0:

            if (counts_value != 123){















                UnityFail( (("adc_handler__voltage__get_by_counts_value() was called " "with wrong counts_value")), (UNITY_UINT)(54))





                         ;

            }



            ret = 456;

            break;



        default:

            UnityFail( (("adc_handler__voltage__get_by_counts_value() was called " "too many times")), (UNITY_UINT)(64))





                     ;

            break;

    }



    return ret;

}











void setUp(void)

{





    enum E_ApplAdcChannel channel;

    for (channel = 0; channel < APPL_ADC_CH_CNT; channel++){

        adc_handler__ctor_CMockIgnoreAndReturn(81, ADC_HANDLER_RES__OK);

    }





    appl_adc__init();

}



void tearDown(void)

{



}









void test_voltage_get(void)

{



    bsp_adc__value__get_CMockExpectAndReturn(













            106

    , APPL_ADC_CH__I_SETT, 123)













             ;





    adc_handler__voltage__get_by_counts_value_StubWithCallback(

            _get_by_counts_value_Callback

            );





    T_ADCHandler_Voltage voltage = appl_adc__voltage__get(

            APPL_ADC_CH__I_SETT

            );





    UnityAssertEqualNumber((UNITY_INT)((456)), (UNITY_INT)((voltage)), (

   ((void *)0)

   ), (UNITY_UINT)(119), UNITY_DISPLAY_STYLE_INT);

}
