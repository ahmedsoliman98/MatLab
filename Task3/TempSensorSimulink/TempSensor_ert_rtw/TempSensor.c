/*
 * File: TempSensor.c
 *
 * Code generated for Simulink model 'TempSensor'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Jan 30 15:06:57 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TempSensor.h"
#include "TempSensor_private.h"

/* Block states (default storage) */
DW_TempSensor_T TempSensor_DW;

/* Real-time model */
RT_MODEL_TempSensor_T TempSensor_M_;
RT_MODEL_TempSensor_T *const TempSensor_M = &TempSensor_M_;

/* Forward declaration for local functions */
static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_int_d_T *obj);
static void matlabCodegenHandle_matlabCod_d(codertarget_arduinobase_block_T *obj);
static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_int_d_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCod_d(codertarget_arduinobase_block_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

/* Model step function */
void TempSensor_step(void)
{
  uint16_T rtb_AnalogInput_0;
  boolean_T rtb_NOT;

  /* MATLABSystem: '<Root>/Analog Input' */
  if (TempSensor_DW.obj.SampleTime != TempSensor_P.AnalogInput_SampleTime) {
    TempSensor_DW.obj.SampleTime = TempSensor_P.AnalogInput_SampleTime;
  }

  MW_AnalogIn_Start(TempSensor_DW.obj.MW_ANALOGIN_HANDLE);
  MW_AnalogInSingle_ReadResult(TempSensor_DW.obj.MW_ANALOGIN_HANDLE,
    &rtb_AnalogInput_0, 3);

  /* RelationalOperator: '<S1>/Compare' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Constant2'
   *  Constant: '<S1>/Constant'
   *  MATLABSystem: '<Root>/Analog Input'
   *  Product: '<Root>/Divide'
   *  Product: '<Root>/Multiply'
   *  Product: '<Root>/Multiply1'
   */
  rtb_NOT = ((real_T)rtb_AnalogInput_0 * TempSensor_P.Constant_Value /
             TempSensor_P.Constant1_Value * TempSensor_P.Constant2_Value >=
             TempSensor_P.CompareToConstant_const);

  /* MATLABSystem: '<S2>/Digital Output' incorporates:
   *  DataTypeConversion: '<S2>/Data Type Conversion'
   */
  writeDigitalPin(6, (uint8_T)rtb_NOT);

  /* Logic: '<Root>/NOT' */
  rtb_NOT = !rtb_NOT;

  /* MATLABSystem: '<S3>/Digital Output' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   */
  writeDigitalPin(5, (uint8_T)rtb_NOT);
}

/* Model initialize function */
void TempSensor_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(TempSensor_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&TempSensor_DW, 0,
                sizeof(DW_TempSensor_T));

  {
    codertarget_arduinobase_int_d_T *obj;
    MW_AnalogIn_TriggerSource_Type trigger_val;

    /* Start for MATLABSystem: '<Root>/Analog Input' */
    TempSensor_DW.obj.matlabCodegenIsDeleted = true;
    obj = &TempSensor_DW.obj;
    TempSensor_DW.obj.isInitialized = 0L;
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
    TempSensor_DW.obj.matlabCodegenIsDeleted = false;
    TempSensor_DW.obj.SampleTime = TempSensor_P.AnalogInput_SampleTime;
    obj = &TempSensor_DW.obj;
    TempSensor_DW.obj.isSetupComplete = false;
    TempSensor_DW.obj.isInitialized = 1L;
    obj->MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open(4UL);
    trigger_val = MW_ANALOGIN_SOFTWARE_TRIGGER;
    MW_AnalogIn_SetTriggerSource(TempSensor_DW.obj.MW_ANALOGIN_HANDLE,
      trigger_val, 0UL);
    TempSensor_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<S2>/Digital Output' */
    TempSensor_DW.obj_o.matlabCodegenIsDeleted = true;
    TempSensor_DW.obj_o.isInitialized = 0L;
    TempSensor_DW.obj_o.matlabCodegenIsDeleted = false;
    TempSensor_DW.obj_o.isSetupComplete = false;
    TempSensor_DW.obj_o.isInitialized = 1L;
    digitalIOSetup(6, true);
    TempSensor_DW.obj_o.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Digital Output' */
    TempSensor_DW.obj_p.matlabCodegenIsDeleted = true;
    TempSensor_DW.obj_p.isInitialized = 0L;
    TempSensor_DW.obj_p.matlabCodegenIsDeleted = false;
    TempSensor_DW.obj_p.isSetupComplete = false;
    TempSensor_DW.obj_p.isInitialized = 1L;
    digitalIOSetup(5, true);
    TempSensor_DW.obj_p.isSetupComplete = true;
  }
}

/* Model terminate function */
void TempSensor_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Analog Input' */
  matlabCodegenHandle_matlabCodeg(&TempSensor_DW.obj);

  /* Terminate for MATLABSystem: '<S2>/Digital Output' */
  matlabCodegenHandle_matlabCod_d(&TempSensor_DW.obj_o);

  /* Terminate for MATLABSystem: '<S3>/Digital Output' */
  matlabCodegenHandle_matlabCod_d(&TempSensor_DW.obj_p);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
