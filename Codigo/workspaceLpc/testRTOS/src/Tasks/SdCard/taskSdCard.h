#ifdef __USE_CMSIS
#include "LPC17xx.h"
#endif

//#include <cr_section_macros.h>
//#include <NXP/crp.h>
//__CRP const unsigned int CRP_WORD = CRP_NO_CRP ;

#include "LPC17xx.h"
#include "lpc_types.h"
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"

#include "../Adc/taskAdc.h"

#include "clocking.h"
#include "ff.h"

static void SetSPIClocks(uint32_t low, uint32_t high);

void TimerReset();

inline void TimerStart(void);

inline void TimerStop(void);

uint32_t TimerRead();

/*
 * set_timeout(char *s)
 *
 * Sets the timeout value to be used for calling the disk_timerproc() function.
 */
static void set_timeout(char *s);

/*
 * show_dir()
 *
 * Shows the directory of the SD card.
 * This function is meant as a support function to verify the card contents.
 */
static void show_dir(char *dirname);

/*
 * write_file()
 *
 * Writes a number of records to the file with the given name.
 * This function writes 50 sectors of 512 bytes
 */
static void write_file(char *fname);

/*
 * read_file()
 *
 * Reads the file with the given name.
 * This function reads blocks of 512 bytes
 */
static void read_file(char *fname);

static void write_log(char *fname);

static void type_file(char *fname);

static void delete_file(char *fname);


/*
 * Scan the given buffer for arguments,
 * split up the buffer and create *args[]
 * to point to each next argument on the line.
 */
void scan_args(char *buf, char *args[]);

void taskSdCard(void *param);
