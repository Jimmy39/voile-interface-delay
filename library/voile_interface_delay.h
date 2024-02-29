#ifndef __VOILE_INTERFACE_DELAY_H__
#define __VOILE_INTERFACE_DELAY_H__

#include "voile_common.h"
#include "voile_errorno.h"

void Vdelay_init();

void Vdelay_us(uint16_t);

void Vdelay_ms(uint16_t);

void Vdelay_s(uint16_t);

void Vsleep_us(uint16_t);

void Vsleep_ms(uint16_t);

void Vsleep_s(uint16_t);

typedef struct {
    uint32_t coarse;
    uint32_t fine;
} delayBase_t;

void Vdelay_getBase(delayBase_t *);

void Vdelay_based_us(delayBase_t *, uint16_t);

void Vdelay_based_ms(delayBase_t *, uint16_t);

void Vdelay_based_s(delayBase_t *, uint16_t);

void Vsleep_based_us(delayBase_t *, uint16_t);

void Vsleep_based_ms(delayBase_t *, uint16_t);

void Vsleep_based_s(delayBase_t *, uint16_t);

#endif  // !__VOILE_INTERFACE_DELAY_H__
