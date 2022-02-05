/*
 * File: scientificCalc.h
 *
 * Code generated for Simulink model 'scientificCalc'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Feb  6 00:32:26 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_scientificCalc_h_
#define RTW_HEADER_scientificCalc_h_
#include <string.h>
#include <stddef.h>
#ifndef scientificCalc_COMMON_INCLUDES_
# define scientificCalc_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* scientificCalc_COMMON_INCLUDES_ */

#include "scientificCalc_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  uint8_T In1;                         /* '<S1>/In1' */
} B_scientificCalc_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T Input;                       /* '<Root>/Input' */
  uint8_T Input1;                      /* '<Root>/Input1' */
} ExtU_scientificCalc_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T Outport;                     /* '<Root>/Outport' */
  uint8_T Outport1;                    /* '<Root>/Outport1' */
  uint16_T Outport2;                   /* '<Root>/Outport2' */
  uint8_T Outport3;                    /* '<Root>/Outport3' */
  real_T Outport4;                     /* '<Root>/Outport4' */
} ExtY_scientificCalc_T;

/* Real-time Model Data Structure */
struct tag_RTM_scientificCalc_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_scientificCalc_T scientificCalc_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_scientificCalc_T scientificCalc_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_scientificCalc_T scientificCalc_Y;

/* Model entry point functions */
extern void scientificCalc_initialize(void);
extern void scientificCalc_step(void);
extern void scientificCalc_terminate(void);

/* Real-time Model object */
extern RT_MODEL_scientificCalc_T *const scientificCalc_M;

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
 * '<Root>' : 'scientificCalc'
 * '<S1>'   : 'scientificCalc/If Action Subsystem'
 * '<S2>'   : 'scientificCalc/If Action Subsystem1'
 */
#endif                                 /* RTW_HEADER_scientificCalc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
