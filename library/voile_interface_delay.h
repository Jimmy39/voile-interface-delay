#ifndef __VOILE_INTERFACE_DELAY_H__
#define __VOILE_INTERFACE_DELAY_H__

#define __IN_VOILE_DELAY__
#include "voile_common.h"
#undef __IN_VOILE_DELAY__

void Vdelay_init();

#ifndef __VOILE_DELAY_INLINE

void Vdelay_us(uint16_t time_us);

void Vdelay_ms(uint16_t time_ms);

void Vdelay_s(uint16_t time_s);

void Vsleep_us(uint16_t time_us);

void Vsleep_ms(uint16_t time_ms);

void Vsleep_s(uint16_t time_s);

#ifndef __VOILE_UNSUPPORT_INT64
typedef uint64_t delayBase_t;
#else
typedef struct {
    uint32_t coarse;
    uint32_t fine;
} delayBase_t;
#endif  // __VOILE_UNSUPPORT_INT64


void Vdelay_getBase(delayBase_t *delayBase_p);

void Vdelay_based_us(delayBase_t *delayBase_p, uint16_t time_us);

void Vdelay_based_ms(delayBase_t *delayBase_p, uint16_t time_ms);

void Vdelay_based_s(delayBase_t *delayBase_p, uint16_t time_s);

void Vsleep_based_us(delayBase_t *delayBase_p, uint16_t time_us);

void Vsleep_based_ms(delayBase_t *delayBase_p, uint16_t time_ms);

void Vsleep_based_s(delayBase_t *delayBase_p, uint16_t time_s);

#endif  //!__VOILE_DELAY_INLINE

#endif  // !__VOILE_INTERFACE_DELAY_H__
