/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Feb  5 23:52:26 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_untitled_T untitled_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_untitled_T untitled_Y;

/* Real-time model */
RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Model step function */
void untitled_step(void)
{
  /* Outport: '<Root>/Outport' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise XOR'
   */
  untitled_Y.Outport = (uint8_T)(untitled_U.Input ^ untitled_U.Input1);

  /* Outport: '<Root>/Outport1' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise AND'
   */
  untitled_Y.Outport1 = (uint8_T)(untitled_U.Input & untitled_U.Input1);

  /* S-Function (sfix_bitop): '<Root>/Bitwise NOR' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Outport: '<Root>/Outport3'
   */
  untitled_Y.Outport3 = (uint8_T)(untitled_U.Input | untitled_U.Input1);

  /* Outport: '<Root>/Outport2' incorporates:
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOR'
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOT'
   */
  untitled_Y.Outport2 = (uint8_T)~(uint8_T)~untitled_Y.Outport3;
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(untitled_M, (NULL));

  /* external inputs */
  (void)memset(&untitled_U, 0, sizeof(ExtU_untitled_T));

  /* external outputs */
  (void) memset((void *)&untitled_Y, 0,
                sizeof(ExtY_untitled_T));
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
