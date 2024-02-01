#ifndef __VOILE_INTERFACE_DELAY_H__
#define __VOILE_INTERFACE_DELAY_H__

#include "voile_common.h"

voile_status_t voile_delay_Init();

voile_status_t voile_delay_us(uint16_t);

voile_status_t voile_delay_ms(uint16_t);

voile_status_t voile_delay_s(uint16_t);

struct splitTime_struct;
typedef struct splitTime_struct splitTime_t;

voile_status_t voile_delay_SplitTime(splitTime_t *);

voile_status_t voile_delay_count_us(splitTime_t *, uint16_t);

voile_status_t voile_delay_count_ms(splitTime_t *, uint16_t);

voile_status_t voile_delay_count_s(splitTime_t *, uint16_t);

#endif // !__VOILE_INTERFACE_DELAY_H__
