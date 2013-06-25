
#ifndef TASKSDCARD_H_
#define TASKSDCARD_H_

#include "LPC17xx.h"
#include "lpc_types.h"

#include "FreeRTOS.h"
#include "task.h"

#include "ff.h"
#include "diskio.h"

/*
 * Just for readability.
 * Writing KHZ(400) or MHZ(10) looks so much better than
 * 400000 or 10000000 in my code.
 */
#define KHZ(x) (x * 1000)
#define MHZ(x) (x * 1000000)



void InitSdCard();

void SetSPIClocks(uint32_t low, uint32_t high);

void vFATFSTimerTask (void* pvParameters);

#endif // TASKSDCARD_H_
