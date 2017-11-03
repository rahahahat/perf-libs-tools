/*
    perf-libs-tools
    Copyright 2017 Arm Limited. 
    All rights reserved.
*/

#ifndef ARMPL_SUMMARY
#define ARMPL_SUMMARY

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdarg.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

/* Datatype for recording detail on what is recorded */

typedef struct armpl_logging_td
{
  char NAME[32];
  int numIargs;
  int numCargs;
  struct timespec ts_start;
  struct timespec ts_end;
  int *Iinp;
  char *Cinp;

} armpl_logging_struct;

/* Datatype for linked list */
typedef struct armpl_lnkd_lst {
    char *routineName;
    char *inputsString;
    double timeTotal;
    int callCount;
    struct armpl_lnkd_lst *nextRoutine;
    struct armpl_lnkd_lst *nextCase;
} armpl_lnkdlst_t;
        

/* Prototypes for logging functions */

#ifdef __cplusplus
extern "C" {
#endif
void armpl_summary_exit();
void armpl_logging_enter(armpl_logging_struct *logger, const char *FNC, int numIinps, int numCinps, ...);
void armpl_logging_leave(armpl_logging_struct *logger, ...);
int armpl_get_value_int(void);
void armpl_enable_summary_list();
#ifdef __cplusplus
}
#endif

#endif
