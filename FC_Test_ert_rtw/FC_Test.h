/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: FC_Test.h
 *
 * Code generated for Simulink model 'FC_Test'.
 *
 * Model version                  : 1.63
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sun Nov 10 09:19:03 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FC_Test_h_
#define RTW_HEADER_FC_Test_h_
#ifndef FC_Test_COMMON_INCLUDES_
#define FC_Test_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "ext_mode.h"
#include "main.h"
#include "mw_stm32_i2c_ll.h"
#endif                                 /* FC_Test_COMMON_INCLUDES_ */

#include "FC_Test_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T pressure;                     /* '<S10>/MATLAB Function' */
  real_T WhoIsCheck;                   /* '<S9>/CheckWhoIs' */
  boolean_T DigitalPortRead;           /* '<S5>/Digital Port Read' */
} B_FC_Test_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_I2CControlle_T obj; /* '<S11>/I2C Controller Write' */
  stm32cube_blocks_I2CControl_b_T obj_b;/* '<S10>/I2C Controller Read2' */
  stm32cube_blocks_I2CControl_b_T obj_g;/* '<S10>/I2C Controller Read1' */
  stm32cube_blocks_I2CControl_b_T obj_gm;/* '<S10>/I2C Controller Read' */
  stm32cube_blocks_I2CControl_b_T obj_o;/* '<S9>/I2C Controller Read' */
  int8_T ReadPressure_SubsysRanBC;     /* '<S8>/Read Pressure' */
  int8_T Configure_SubsysRanBC;        /* '<S8>/Configure' */
  int8_T ConfigureSensors_SubsysRanBC; /* '<S9>/ConfigureSensors' */
  uint8_T is_active_c2_FC_Test;        /* '<S10>/MATLAB Function' */
} DW_FC_Test_T;

/* Parameters (default storage) */
struct P_FC_Test_T_ {
  struct_2TKg85Vf5gzpYHzRAioonF sensors;/* Variable: sensors
                                         * Referenced by: '<S9>/CheckWhoIs'
                                         */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S9>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S9>/Constant1'
                                        */
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S9>/Out1'
                                        */
  real_T Pressure_Y0;                  /* Computed Parameter: Pressure_Y0
                                        * Referenced by: '<S10>/Pressure'
                                        */
  real_T Step_Time;                    /* Expression: 0
                                        * Referenced by: '<S8>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<S8>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 1
                                        * Referenced by: '<S8>/Step'
                                        */
  uint8_T Constant_Value_c;            /* Expression: 0xC0
                                        * Referenced by: '<S11>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_FC_Test_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_FC_Test_T FC_Test_P;

/* Block signals (default storage) */
extern B_FC_Test_T FC_Test_B;

/* Block states (default storage) */
extern DW_FC_Test_T FC_Test_DW;

/* Model entry point functions */
extern void FC_Test_initialize(void);
extern void FC_Test_step(void);
extern void FC_Test_terminate(void);

/* Real-time Model object */
extern RT_MODEL_FC_Test_T *const FC_Test_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

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
 * '<Root>' : 'FC_Test'
 * '<S1>'   : 'FC_Test/Digital Port Read'
 * '<S2>'   : 'FC_Test/Digital Port Write'
 * '<S3>'   : 'FC_Test/Sensor Board'
 * '<S4>'   : 'FC_Test/Digital Port Read/ECSoC'
 * '<S5>'   : 'FC_Test/Digital Port Read/ECSoC/ECSimCodegen'
 * '<S6>'   : 'FC_Test/Digital Port Write/ECSoC'
 * '<S7>'   : 'FC_Test/Digital Port Write/ECSoC/ECSimCodegen'
 * '<S8>'   : 'FC_Test/Sensor Board/LPS25'
 * '<S9>'   : 'FC_Test/Sensor Board/LPS25/Configure'
 * '<S10>'  : 'FC_Test/Sensor Board/LPS25/Read Pressure'
 * '<S11>'  : 'FC_Test/Sensor Board/LPS25/Configure/ConfigureSensors'
 * '<S12>'  : 'FC_Test/Sensor Board/LPS25/Read Pressure/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_FC_Test_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
