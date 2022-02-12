/*
 * File: FactorialLoopFunc.c
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

#include "FactorialLoopFunc.h"
#include "FactorialLoopFunc_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_FactorialLoopFunc_T FactorialLoopFunc_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_FactorialLoopFunc_T FactorialLoopFunc_Y;

/* Real-time model */
RT_MODEL_FactorialLoopFunc_T FactorialLoopFunc_M_;
RT_MODEL_FactorialLoopFunc_T *const FactorialLoopFunc_M = &FactorialLoopFunc_M_;

/* Model step function */
void FactorialLoopFunc_step(void)
{
  int32_T s2_iter;
  boolean_T loopCond;
  int32_T UnitDelay_DSTATE;
  real_T UnitDelay1_DSTATE;

  /* Outputs for Iterator SubSystem: '<Root>/While Iterator Subsystem' incorporates:
   *  WhileIterator: '<S2>/While Iterator'
   */
  s2_iter = 1;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay' */
  UnitDelay_DSTATE = 1;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay1' */
  UnitDelay1_DSTATE = 1.0;

  /* Constant: '<Root>/ConstantOf IntialCond' */
  loopCond = true;
  while (loopCond && (s2_iter <= 5)) {
    /* RelationalOperator: '<S2>/Relational Operator' incorporates:
     *  Inport: '<Root>/Inputnum '
     *  UnitDelay: '<S2>/Unit Delay'
     */
    loopCond = (UnitDelay_DSTATE <= FactorialLoopFunc_U.Inputnum);

    /* Product: '<S2>/Multiply' incorporates:
     *  UnitDelay: '<S2>/Unit Delay1'
     */
    FactorialLoopFunc_Y.FactorialReasult = (real_T)s2_iter * UnitDelay1_DSTATE;

    /* Update for UnitDelay: '<S2>/Unit Delay' */
    UnitDelay_DSTATE = s2_iter;

    /* Update for UnitDelay: '<S2>/Unit Delay1' */
    UnitDelay1_DSTATE = FactorialLoopFunc_Y.FactorialReasult;
    s2_iter++;
  }

  /* End of Outputs for SubSystem: '<Root>/While Iterator Subsystem' */

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/Inputnum 1'
   */
  s2_iter = 1;
  FactorialLoopFunc_Y.FactorialReasult1 = 1.0;
  while (s2_iter <= FactorialLoopFunc_U.Inputnum1) {
    FactorialLoopFunc_Y.FactorialReasult1 *= (real_T)s2_iter;
    s2_iter++;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */
}

/* Model initialize function */
void FactorialLoopFunc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(FactorialLoopFunc_M, (NULL));

  /* external inputs */
  (void)memset(&FactorialLoopFunc_U, 0, sizeof(ExtU_FactorialLoopFunc_T));

  /* external outputs */
  (void) memset((void *)&FactorialLoopFunc_Y, 0,
                sizeof(ExtY_FactorialLoopFunc_T));
}

/* Model terminate function */
void FactorialLoopFunc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
