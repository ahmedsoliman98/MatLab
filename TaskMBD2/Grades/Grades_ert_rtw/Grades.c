/*
 * File: Grades.c
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

#include "Grades.h"
#include "Grades_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Grades_T Grades_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Grades_T Grades_Y;

/* Real-time model */
RT_MODEL_Grades_T Grades_M_;
RT_MODEL_Grades_T *const Grades_M = &Grades_M_;

/* Model step function */
void Grades_step(void)
{
  real_T tmp;

  /* SwitchCase: '<Root>/Switch Case' incorporates:
   *  Inport: '<Root>/Input'
   *  Outport: '<Root>/Outport'
   *  StringConstant: '<S1>/String Constant'
   *  StringConstant: '<S2>/String Constant'
   *  StringConstant: '<S3>/String Constant'
   *  StringConstant: '<S4>/String Constant'
   *  StringConstant: '<S5>/String Constant'
   */
  tmp = trunc(Grades_U.Input);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 4.294967296E+9);
  }

  switch (tmp < 0.0 ? -(int32_T)(uint32_T)-tmp : (int32_T)(uint32_T)tmp) {
   case 85:
   case 86:
   case 87:
   case 88:
   case 89:
   case 90:
   case 91:
   case 92:
   case 93:
   case 94:
   case 95:
   case 96:
   case 97:
   case 98:
   case 99:
   case 100:
    /* Outputs for IfAction SubSystem: '<Root>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    strncpy(&Grades_Y.Outport[0], Grades_ConstP.StringConstant_String, 255U);

    /* End of Outputs for SubSystem: '<Root>/Switch Case Action Subsystem' */
    Grades_Y.Outport[255] = '\x00';
    break;

   case 75:
   case 76:
   case 77:
   case 78:
   case 79:
   case 80:
   case 81:
   case 82:
   case 83:
   case 84:
    /* Outputs for IfAction SubSystem: '<Root>/Switch Case Action Subsystem1' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    strncpy(&Grades_Y.Outport[0], Grades_ConstP.StringConstant_String_o, 255U);

    /* End of Outputs for SubSystem: '<Root>/Switch Case Action Subsystem1' */
    Grades_Y.Outport[255] = '\x00';
    break;

   case 65:
   case 66:
   case 67:
   case 68:
   case 69:
   case 70:
   case 71:
   case 72:
   case 73:
   case 74:
    /* Outputs for IfAction SubSystem: '<Root>/Switch Case Action Subsystem2' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    strncpy(&Grades_Y.Outport[0], Grades_ConstP.StringConstant_String_b, 255U);

    /* End of Outputs for SubSystem: '<Root>/Switch Case Action Subsystem2' */
    Grades_Y.Outport[255] = '\x00';
    break;

   case 55:
   case 56:
   case 57:
   case 58:
   case 59:
   case 60:
   case 61:
   case 62:
   case 63:
   case 64:
    /* Outputs for IfAction SubSystem: '<Root>/Switch Case Action Subsystem3' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    strncpy(&Grades_Y.Outport[0], Grades_ConstP.StringConstant_String_g, 255U);

    /* End of Outputs for SubSystem: '<Root>/Switch Case Action Subsystem3' */
    Grades_Y.Outport[255] = '\x00';
    break;

   default:
    /* Outputs for IfAction SubSystem: '<Root>/Switch Case Action Subsystem4' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    strncpy(&Grades_Y.Outport[0], Grades_ConstP.StringConstant_String_e, 255U);

    /* End of Outputs for SubSystem: '<Root>/Switch Case Action Subsystem4' */
    Grades_Y.Outport[255] = '\x00';
    break;
  }

  /* End of SwitchCase: '<Root>/Switch Case' */
}

/* Model initialize function */
void Grades_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(Grades_M, (NULL));

  /* external inputs */
  Grades_U.Input = 0.0;

  /* external outputs */
  (void) memset(&Grades_Y.Outport[0], 0,
                256U*sizeof(char_T));
}

/* Model terminate function */
void Grades_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
