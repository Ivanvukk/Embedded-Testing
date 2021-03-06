#include "build/temp/_test_first.c"
#include "adc_handler.h"
#include "unity.h"












static T_ADCHandler _adc_handler;

static T_ADCHandler_Res _ctor_result;

void setUp(void)

{

    T_ADCHandler_CtorParams params = {};





    params.max_counts = 0x3ff;





    params.bsp_max_voltage = 10 * 100;





    params.nominal_add_volts = 0 ;







    _ctor_result = adc_handler__ctor(&_adc_handler, &params);

}



void tearDown(void)

{

    adc_handler__dtor(&_adc_handler);

}











void test_ctor_ok(void)

{



    UnityAssertEqualNumber((UNITY_INT)((ADC_HANDLER_RES__OK)), (UNITY_INT)((_ctor_result)), (

   ((void *)0)

   ), (UNITY_UINT)(67), UNITY_DISPLAY_STYLE_INT);

}



void test_counts_to_voltage(void)

{



    T_ADCHandler_Voltage voltage;

    T_ADCHandler_CountsValue counts;





    counts = 0u;

    voltage = adc_handler__voltage__get_by_counts_value(&_adc_handler,counts);

    UnityAssertEqualNumber((UNITY_INT)((0*100)), (UNITY_INT)((voltage)), (

   ((void *)0)

   ), (UNITY_UINT)(79), UNITY_DISPLAY_STYLE_INT);





    counts = 0x3ff;

    voltage = adc_handler__voltage__get_by_counts_value(&_adc_handler,counts);

    UnityAssertEqualNumber((UNITY_INT)((10*100)), (UNITY_INT)((voltage)), (

   ((void *)0)

   ), (UNITY_UINT)(84), UNITY_DISPLAY_STYLE_INT);



    counts = 0x3ff/3;

    voltage = adc_handler__voltage__get_by_counts_value(&_adc_handler,counts);

    UnityAssertEqualNumber((UNITY_INT)((3.33*100)), (UNITY_INT)((voltage)), (

   ((void *)0)

   ), (UNITY_UINT)(88), UNITY_DISPLAY_STYLE_INT);





}
