//-- for T_ADCHandler_Voltage
#include "adc_handler.h"
 
//-- for enum E_ApplAdcChannel
#include "appl_adc_channels.h"
 
/**
 * Initialize module
 */
void appl_adc__init(void);
 
/**
 * Get current voltage of the given channel.
 */
T_ADCHandler_Voltage appl_adc__voltage__get(enum E_ApplAdcChannel channel_num);