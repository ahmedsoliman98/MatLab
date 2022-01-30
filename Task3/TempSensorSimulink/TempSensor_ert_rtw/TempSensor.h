/*
 * File: TempSensor.h
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

#ifndef RTW_HEADER_TempSensor_h_
#define RTW_HEADER_TempSensor_h_
#include <stddef.h>
#include <string.h>
#ifndef TempSensor_COMMON_INCLUDES_
# define TempSensor_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_AnalogIn.h"
#include "MW_arduino_digitalio.h"
#endif                                 /* TempSensor_COMMON_INCLUDES_ */

#include "TempSensor_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_int_d_T obj; /* '<Root>/Analog Input' */
  codertarget_arduinobase_block_T obj_p;/* '<S3>/Digital Output' */
  codertarget_arduinobase_block_T obj_o;/* '<S2>/Digital Output' */
} DW_TempSensor_T;

/* Parameters (default storage) */
struct P_TempSensor_T_ {
  real_T CompareToConstant_const;      /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T AnalogInput_SampleTime;       /* Expression: 1
                                        * Referenced by: '<Root>/Analog Input'
                                        */
  real_T Constant_Value;               /* Expression: 5
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 1024
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 100
                                        * Referenced by: '<Root>/Constant2'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_TempSensor_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_TempSensor_T TempSensor_P;

/* Block states (default storage) */
extern DW_TempSensor_T TempSensor_DW;

/* Model entry point functions */
extern void TempSensor_initialize(void);
extern void TempSensor_step(void);
extern void TempSensor_terminate(void);

/* Real-time Model object */
extern RT_MODEL_TempSensor_T *const TempSensor_M;

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
 * '<Root>' : 'TempSensor'
 * '<S1>'   : 'TempSensor/Compare To Constant'
 * '<S2>'   : 'TempSensor/Digital Output'
 * '<S3>'   : 'TempSensor/Digital Output1'
 */
#endif                                 /* RTW_HEADER_TempSensor_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
