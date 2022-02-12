/*
 * File: Grades.h
 *
 * Code generated for Simulink model 'Grades'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Feb 12 13:49:05 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Grades_h_
#define RTW_HEADER_Grades_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef Grades_COMMON_INCLUDES_
# define Grades_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Grades_COMMON_INCLUDES_ */

#include "Grades_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: StringConstant_String
   * Referenced by: '<S1>/String Constant'
   */
  char_T StringConstant_String[256];

  /* Computed Parameter: StringConstant_String_o
   * Referenced by: '<S2>/String Constant'
   */
  char_T StringConstant_String_o[256];

  /* Computed Parameter: StringConstant_String_b
   * Referenced by: '<S3>/String Constant'
   */
  char_T StringConstant_String_b[256];

  /* Computed Parameter: StringConstant_String_g
   * Referenced by: '<S4>/String Constant'
   */
  char_T StringConstant_String_g[256];

  /* Computed Parameter: StringConstant_String_e
   * Referenced by: '<S5>/String Constant'
   */
  char_T StringConstant_String_e[256];
} ConstP_Grades_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_Grades_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Outport[256];                 /* '<Root>/Outport' */
} ExtY_Grades_T;

/* Real-time Model Data Structure */
struct tag_RTM_Grades_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Grades_T Grades_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Grades_T Grades_Y;

/* Constant parameters (default storage) */
extern const ConstP_Grades_T Grades_ConstP;

/* Model entry point functions */
extern void Grades_initialize(void);
extern void Grades_step(void);
extern void Grades_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Grades_T *const Grades_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<Root>/Display' : Unused code path elimination
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
 * '<Root>' : 'Grades'
 * '<S1>'   : 'Grades/Switch Case Action Subsystem'
 * '<S2>'   : 'Grades/Switch Case Action Subsystem1'
 * '<S3>'   : 'Grades/Switch Case Action Subsystem2'
 * '<S4>'   : 'Grades/Switch Case Action Subsystem3'
 * '<S5>'   : 'Grades/Switch Case Action Subsystem4'
 */
#endif                                 /* RTW_HEADER_Grades_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
