

typedef uint16_t T_ADCHandler_CountsValue;









typedef int16_t T_ADCHandler_Voltage;









typedef struct S_ADCHandler_Clb {









    int16_t mul;











    int16_t add;

} T_ADCHandler_Clb;









struct S_ADCHandler_MinMax {

    int16_t min;

    int16_t max;

};









typedef struct S_ADCHandler_ClbLimits {

    struct S_ADCHandler_MinMax mul;

    struct S_ADCHandler_MinMax add;



} T_ADCHandler_ClbLimits;



typedef struct S_ADCHandler T_ADCHandler;













typedef enum E_ADCHandler_Res {

    ADC_HANDLER_RES__UNKNOWN,



    ADC_HANDLER_RES__OK,



    ADC_HANDLER_RES__CLB_ERR__MUL_TOO_LOW,

    ADC_HANDLER_RES__CLB_ERR__MUL_TOO_HIGH,

    ADC_HANDLER_RES__CLB_ERR__ADD_TOO_LOW,

    ADC_HANDLER_RES__CLB_ERR__ADD_TOO_HIGH,



    ADC_HANDLER_RES__CLB_ERR__WRONG_PARAMS,



    ADC_HANDLER_RES__CLB_WRN__NO_LIMITS_GIVEN,

} T_ADCHandler_Res;











typedef struct S_ADCHandler_CtorParams {











    T_ADCHandler_CountsValue max_counts;















    T_ADCHandler_Voltage bsp_max_voltage;

    T_ADCHandler_Clb clb;









    T_ADCHandler_Voltage nominal_add_volts;



} T_ADCHandler_CtorParams;

struct S_ADCHandler {









    T_ADCHandler_CountsValue max_counts;









    T_ADCHandler_Voltage bsp_max_voltage;













    int16_t nominal_add;









    T_ADCHandler_Clb clb;



};

T_ADCHandler_Res adc_handler__ctor(

        T_ADCHandler *me, const T_ADCHandler_CtorParams *p_params

        );









void adc_handler__dtor(T_ADCHandler *me);

int16_t adc_handler__nominal_mul__get(const T_ADCHandler *me);











int16_t adc_handler__nominal_add__get(const T_ADCHandler *me);









T_ADCHandler_Voltage adc_handler__voltage__get_by_counts_value(

        T_ADCHandler *me, T_ADCHandler_CountsValue counts_value

        );









T_ADCHandler_CountsValue adc_handler__counts_value__get_by_voltage(

        T_ADCHandler *me, T_ADCHandler_Voltage voltage

        );









const T_ADCHandler_Clb *adc_handler__clb__get_current(const T_ADCHandler *me);











T_ADCHandler_Clb adc_handler__clb__get_nominal(const T_ADCHandler *me);









void adc_handler__clb__set(T_ADCHandler *me, const T_ADCHandler_Clb *p_clb);













void adc_handler__clb_mul__set(T_ADCHandler *me, int16_t mul);











void adc_handler__clb_add__set(T_ADCHandler *me, int16_t add);
