/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Jan  9 18:50:03 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"

/* Block states (default storage) */
DW_untitled_T untitled_DW;

/* Real-time model */
RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Forward declaration for local functions */
static void untitled_SystemCore_release(const codertarget_arduinobase_int_b_T
  *obj);
static void untitled_SystemCore_delete(const codertarget_arduinobase_int_b_T
  *obj);
static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_int_b_T *obj);
static codertarget_arduinobase_int_b_T *arduino_PWMOutput_arduino_PWMOu
  (codertarget_arduinobase_int_b_T *obj);
static void untitled_SystemCore_release(const codertarget_arduinobase_int_b_T
  *obj)
{
  if ((obj->isInitialized == 1L) && obj->isSetupComplete) {
    MW_PWM_SetDutyCycle(obj->MW_PWM_HANDLE, 0);
  }
}

static void untitled_SystemCore_delete(const codertarget_arduinobase_int_b_T
  *obj)
{
  untitled_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_int_b_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    untitled_SystemCore_delete(obj);
  }
}

static codertarget_arduinobase_int_b_T *arduino_PWMOutput_arduino_PWMOu
  (codertarget_arduinobase_int_b_T *obj)
{
  codertarget_arduinobase_int_b_T *b_obj;
  obj->isInitialized = 0L;
  b_obj = obj;
  obj->Hw.AvailablePwmPinNames.f1 = '2';
  obj->Hw.AvailablePwmPinNames.f2 = '3';
  obj->Hw.AvailablePwmPinNames.f3 = '4';
  obj->Hw.AvailablePwmPinNames.f4 = '5';
  obj->Hw.AvailablePwmPinNames.f5 = '6';
  obj->Hw.AvailablePwmPinNames.f6 = '7';
  obj->Hw.AvailablePwmPinNames.f7 = '8';
  obj->Hw.AvailablePwmPinNames.f8 = '9';
  obj->Hw.AvailablePwmPinNames.f9[0] = '1';
  obj->Hw.AvailablePwmPinNames.f9[1] = '0';
  obj->Hw.AvailablePwmPinNames.f10[0] = '1';
  obj->Hw.AvailablePwmPinNames.f10[1] = '1';
  obj->Hw.AvailablePwmPinNames.f11[0] = '1';
  obj->Hw.AvailablePwmPinNames.f11[1] = '2';
  obj->Hw.AvailablePwmPinNames.f12[0] = '1';
  obj->Hw.AvailablePwmPinNames.f12[1] = '3';
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

/* Model step function */
void untitled_step(void)
{
  real_T u0;

  /* Gain: '<S1>/Slider Gain' incorporates:
   *  Constant: '<Root>/Constant'
   */
  u0 = untitled_P.SliderGain_gain * untitled_P.Constant_Value;

  /* MATLABSystem: '<Root>/PWM' */
  if (!(u0 < 255.0)) {
    u0 = 255.0;
  }

  if (!(u0 > 0.0)) {
    u0 = 0.0;
  }

  MW_PWM_SetDutyCycle(untitled_DW.obj.MW_PWM_HANDLE, u0);

  /* End of MATLABSystem: '<Root>/PWM' */
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(untitled_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&untitled_DW, 0,
                sizeof(DW_untitled_T));

  {
    codertarget_arduinobase_int_b_T *obj;

    /* Start for MATLABSystem: '<Root>/PWM' */
    untitled_DW.obj.matlabCodegenIsDeleted = true;
    arduino_PWMOutput_arduino_PWMOu(&untitled_DW.obj);
    obj = &untitled_DW.obj;
    untitled_DW.obj.isSetupComplete = false;
    untitled_DW.obj.isInitialized = 1L;
    obj->MW_PWM_HANDLE = MW_PWM_Open(10UL, 0.0, 0.0);
    MW_PWM_Start(untitled_DW.obj.MW_PWM_HANDLE);
    untitled_DW.obj.isSetupComplete = true;
  }
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/PWM' */
  matlabCodegenHandle_matlabCodeg(&untitled_DW.obj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
