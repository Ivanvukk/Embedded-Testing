#include "appl_adc_channels.h"


typedef uint16_t T_BspAdcCounts;

void bsp_adc__init(void);









T_BspAdcCounts bsp_adc__value__get(enum E_ApplAdcChannel channel_num);















void bsp_adc__proceed(void);
