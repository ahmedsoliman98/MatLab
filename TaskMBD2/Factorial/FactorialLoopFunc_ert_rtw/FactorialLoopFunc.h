/*
 * File: FactorialLoopFunc.h
 *
 * Code generated for Simulink model 'FactorialLoopFunc'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Feb 12 13:20:06 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FactorialLoopFunc_h_
#define RTW_HEADER_FactorialLoopFunc_h_
#include <string.h>
#include <stddef.h>
#ifndef FactorialLoopFunc_COMMON_INCLUDES_
# define FactorialLoopFunc_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* FactorialLoopFunc_COMMON_INCLUDES_ */

#include "FactorialLoopFunc_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Inputnum;                     /* '<Root>/Inputnum ' */
  uint16_T Inputnum1;                  /* '<Root>/Inputnum 1' */
} ExtU_FactorialLoopFunc_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T FactorialReasult;             /* '<Root>/FactorialReasult' */
  real_T FactorialReasult1;            /* '<Root>/FactorialReasult1' */
} ExtY_FactorialLoopFunc_T;

/* Real-time Model Data Structure */
struct tag_RTM_FactorialLoopFunc_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_FactorialLoopFunc_T FactorialLoopFunc_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_FactorialLoopFunc_T FactorialLoopFunc_Y;

/* Model entry point functions */
extern void FactorialLoopFunc_initialize(void);
extern void FactorialLoopFunc_step(void);
extern void FactorialLoopFunc_terminate(void);

/* Real-time Model object */
extern RT_MODEL_FactorialLoopFunc_T *const FactorialLoopFunc_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<S2>/Display' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'FactorialLoopFunc'
 * '<S1>'   : 'FactorialLoopFunc/MATLAB Function'
 * '<S2>'   : 'FactorialLoopFunc/While Iterator Subsystem'
 */
#endif                                 /* RTW_HEADER_FactorialLoopFunc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
