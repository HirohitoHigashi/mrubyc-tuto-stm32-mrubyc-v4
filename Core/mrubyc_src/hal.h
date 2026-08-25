#ifndef MRBC_SRC_HAL_H_
#define MRBC_SRC_HAL_H_

#include "main.h"

#define MRBC_TICK_UNIT 1
#define MRBC_TIMESLICE_TICK_COUNT 10

#define mrbc_hal_init()        ((void)0)
#define mrbc_hal_enable_irq()  __enable_irq()
#define mrbc_hal_disable_irq() __disable_irq()
#define mrbc_hal_idle_cpu()    HAL_PWR_EnterSLEEPMode(PWR_MAINREGULATOR_ON, PWR_SLEEPENTRY_WFI)

int mrbc_hal_write(int fd, const void *buf, int nbytes);
int mrbc_hal_flush(int fd);
void mrbc_hal_abort(const char *s);

#endif
