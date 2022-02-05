/*
 * File: scientificCalc.c
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

#include "scientificCalc.h"
#include "scientificCalc_private.h"

/* Block signals (default storage) */
B_scientificCalc_T scientificCalc_B;

/* External inputs (root inport signals with default storage) */
ExtU_scientificCalc_T scientificCalc_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_scientificCalc_T scientificCalc_Y;

/* Real-time model */
RT_MODEL_scientificCalc_T scientificCalc_M_;
RT_MODEL_scientificCalc_T *const scientificCalc_M = &scientificCalc_M_;

/* Model step function */
void scientificCalc_step(void)
{
  /* Outport: '<Root>/Outport' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<Root>/Add'
   */
  scientificCalc_Y.Outport = (uint8_T)((uint32_T)scientificCalc_U.Input +
    scientificCalc_U.Input1);

  /* Outport: '<Root>/Outport1' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<Root>/Subtract'
   */
  scientificCalc_Y.Outport1 = (uint8_T)(scientificCalc_U.Input -
    scientificCalc_U.Input1);

  /* Outport: '<Root>/Outport2' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<Root>/Multiply'
   */
  scientificCalc_Y.Outport2 = (uint16_T)((uint32_T)scientificCalc_U.Input *
    scientificCalc_U.Input1);

  /* If: '<Root>/If' incorporates:
   *  Inport: '<Root>/Input1'
   *  Inport: '<S1>/In1'
   */
  if (scientificCalc_U.Input1 > 0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    scientificCalc_B.In1 = scientificCalc_U.Input1;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  }

  /* End of If: '<Root>/If' */

  /* Outport: '<Root>/Outport3' incorporates:
   *  Inport: '<Root>/Input'
   *  Product: '<Root>/Divide'
   */
  scientificCalc_Y.Outport3 = (uint8_T)(scientificCalc_B.In1 == 0U ?
    MAX_uint32_T : (uint32_T)scientificCalc_U.Input / scientificCalc_B.In1);
}

/* Model initialize function */
void scientificCalc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(scientificCalc_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &scientificCalc_B), 0,
                sizeof(B_scientificCalc_T));

  /* external inputs */
  (void)memset(&scientificCalc_U, 0, sizeof(ExtU_scientificCalc_T));

  /* external outputs */
  (void) memset((void *)&scientificCalc_Y, 0,
                sizeof(ExtY_scientificCalc_T));

  /* ConstCode for Outport: '<Root>/Outport4' */
  scientificCalc_Y.Outport4 = 0.0;
}

/* Model terminate function */
void scientificCalc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
