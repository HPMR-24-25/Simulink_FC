/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: FC_Test.h
 *
 * Code generated for Simulink model 'FC_Test'.
 *
 * Model version                  : 1.234
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sun Nov 10 16:00:47 2024
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
#include "mw_stm32_i2c_ll.h"
#include "mw_stm32_utils.h"
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

/* Block states (default storage) for system '<S15>/I2C Controller Read' */
typedef struct {
  stm32cube_blocks_I2CControlle_T obj; /* '<S15>/I2C Controller Read' */
  boolean_T objisempty;                /* '<S15>/I2C Controller Read' */
} DW_I2CControllerRead_FC_Test_T;

/* Block states (default storage) for system '<S15>/I2C Controller Write' */
typedef struct {
  stm32cube_blocks_I2CControl_l_T obj; /* '<S15>/I2C Controller Write' */
  boolean_T objisempty;                /* '<S15>/I2C Controller Write' */
} DW_I2CControllerWrite_FC_Test_T;

/* Block states (default storage) for system '<S20>/I2C Controller Write' */
typedef struct {
  stm32cube_blocks_I2CControl_l_T obj; /* '<S20>/I2C Controller Write' */
  boolean_T objisempty;                /* '<S20>/I2C Controller Write' */
} DW_I2CControllerWrite_FC_Te_f_T;

/* Block signals (default storage) */
typedef struct {
  real_T pressure;                     /* '<S23>/MATLAB Function' */
  real_T WhoIsCheck;                   /* '<S22>/CheckWhoIs' */
  real_T OutportBufferForIMU_Data;     /* '<S5>/OutportBufferForIMU_Data' */
  real_T WhoIsCheck_e;                 /* '<S7>/CheckWhoIs' */
  uint8_T dataRead[12];                /* '<S5>/I2C Controller Read' */
  uint8_T BitwiseOR;                   /* '<S20>/Bitwise OR' */
  uint8_T BitwiseOR1;                  /* '<S20>/Bitwise OR1' */
} B_FC_Test_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_I2CControlle_T obj; /* '<S23>/I2C Controller Read2' */
  stm32cube_blocks_I2CControlle_T obj_g;/* '<S23>/I2C Controller Read1' */
  stm32cube_blocks_I2CControlle_T obj_gm;/* '<S23>/I2C Controller Read' */
  stm32cube_blocks_I2CControlle_T obj_o;/* '<S22>/I2C Controller Read' */
  stm32cube_blocks_I2CControlle_T obj_d;/* '<S5>/I2C Controller Read' */
  stm32cube_blocks_I2CControlle_T obj_n;/* '<S7>/I2C Controller Read' */
  stm32cube_blocks_I2CControlle_T obj_j;/* '<S14>/I2C Controller Read3' */
  stm32cube_blocks_I2CControlle_T obj_f;/* '<S14>/I2C Controller Read2' */
  stm32cube_blocks_I2CControlle_T obj_p;/* '<S13>/I2C Controller Read1' */
  stm32cube_blocks_I2CControlle_T obj_b;/* '<S10>/I2C Controller Read' */
  stm32cube_blocks_I2CControl_l_T obj_l;/* '<S24>/I2C Controller Write' */
  stm32cube_blocks_I2CControl_l_T obj_c;/* '<S14>/I2C Controller Write8' */
  stm32cube_blocks_I2CControl_l_T obj_a;/* '<S14>/I2C Controller Write6' */
  stm32cube_blocks_I2CControl_l_T obj_fl;/* '<S14>/I2C Controller Write5' */
  stm32cube_blocks_I2CControl_l_T obj_c2;/* '<S14>/I2C Controller Write4' */
  stm32cube_blocks_I2CControl_l_T obj_lj;/* '<S13>/I2C Controller Write5' */
  stm32cube_blocks_I2CControl_l_T obj_gl;/* '<S13>/I2C Controller Write4' */
  stm32cube_blocks_I2CControl_l_T obj_h;/* '<S13>/I2C Controller Write3' */
  stm32cube_blocks_I2CControl_l_T obj_cm;/* '<S10>/I2C Controller Write' */
  int8_T ReadPressure_SubsysRanBC;     /* '<S3>/Read Pressure' */
  int8_T Configure_SubsysRanBC;        /* '<S3>/Configure' */
  int8_T ConfigureSensors_SubsysRanBC; /* '<S22>/ConfigureSensors' */
  int8_T ReadIMU_SubsysRanBC;          /* '<S2>/Read IMU' */
  int8_T Configure_SubsysRanBC_k;      /* '<S2>/Configure' */
  int8_T ConfigureSensors_SubsysRanBC_m;/* '<S7>/ConfigureSensors' */
  uint8_T is_active_c2_FC_Test;        /* '<S23>/MATLAB Function' */
  uint8_T is_active_c4_FC_Test;        /* '<S14>/MATLAB Function1' */
  uint8_T is_active_c3_FC_Test;        /* '<S14>/MATLAB Function' */
  uint8_T is_active_c1_FC_Test;        /* '<S13>/MATLAB Function' */
  DW_I2CControllerWrite_FC_Test_T I2CControllerWrite;/* '<S15>/I2C Controller Write' */
  DW_I2CControllerRead_FC_Test_T I2CControllerRead;/* '<S15>/I2C Controller Read' */
  DW_I2CControllerWrite_FC_Test_T I2CControllerWrite_p;/* '<S15>/I2C Controller Write' */
  DW_I2CControllerRead_FC_Test_T I2CControllerRead_pn;/* '<S15>/I2C Controller Read' */
  DW_I2CControllerWrite_FC_Test_T I2CControllerWrite_pnaevv;/* '<S15>/I2C Controller Write' */
  DW_I2CControllerRead_FC_Test_T I2CControllerRead_pnaevv;/* '<S15>/I2C Controller Read' */
  DW_I2CControllerWrite_FC_Te_f_T I2CControllerWrite1;/* '<S20>/I2C Controller Write' */
  DW_I2CControllerWrite_FC_Te_f_T I2CControllerWrite_pnaev;/* '<S20>/I2C Controller Write' */
  DW_I2CControllerWrite_FC_Test_T I2CControllerWrite_pnae;/* '<S15>/I2C Controller Write' */
  DW_I2CControllerRead_FC_Test_T I2CControllerRead_pnaev;/* '<S15>/I2C Controller Read' */
  DW_I2CControllerWrite_FC_Test_T I2CControllerWrite_pna;/* '<S15>/I2C Controller Write' */
  DW_I2CControllerRead_FC_Test_T I2CControllerRead_pnae;/* '<S15>/I2C Controller Read' */
} DW_FC_Test_T;

/* Parameters (default storage) */
struct P_FC_Test_T_ {
  struct_9JhGOYyIHK3O74lk7jnC2G sensors;/* Variable: sensors
                                         * Referenced by:
                                         *   '<S22>/CheckWhoIs'
                                         *   '<S7>/CheckWhoIs'
                                         *   '<S24>/Constant'
                                         *   '<S10>/Constant'
                                         *   '<S13>/Constant5'
                                         *   '<S13>/Constant6'
                                         *   '<S13>/Constant7'
                                         *   '<S14>/Constant'
                                         *   '<S14>/Constant5'
                                         *   '<S14>/Constant6'
                                         *   '<S20>/Constant'
                                         *   '<S20>/Constant1'
                                         *   '<S20>/Constant2'
                                         *   '<S20>/Constant3'
                                         */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S7>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S7>/Constant1'
                                        */
  real_T Init_Y0;                      /* Computed Parameter: Init_Y0
                                        * Referenced by: '<S4>/Init'
                                        */
  real_T Constant_Value_c;             /* Expression: 1
                                        * Referenced by: '<S22>/Constant'
                                        */
  real_T Constant1_Value_c;            /* Expression: 0
                                        * Referenced by: '<S22>/Constant1'
                                        */
  real_T Init_Y0_m;                    /* Computed Parameter: Init_Y0_m
                                        * Referenced by: '<S22>/Init'
                                        */
  real_T Pressure_Y0;                  /* Computed Parameter: Pressure_Y0
                                        * Referenced by: '<S23>/Pressure'
                                        */
  real_T Step_Time;                    /* Expression: 0
                                        * Referenced by: '<S2>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<S2>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 1
                                        * Referenced by: '<S2>/Step'
                                        */
  real_T Step_Time_l;                  /* Expression: 0
                                        * Referenced by: '<S3>/Step'
                                        */
  real_T Step_Y0_d;                    /* Expression: 0
                                        * Referenced by: '<S3>/Step'
                                        */
  real_T Step_YFinal_p;                /* Expression: 1
                                        * Referenced by: '<S3>/Step'
                                        */
  uint8_T Constant1_Value_f;           /* Expression: uint8(1)
                                        * Referenced by: '<S11>/Constant1'
                                        */
  uint8_T Constant2_Value;             /* Expression: uint8(2)
                                        * Referenced by: '<S11>/Constant2'
                                        */
  uint8_T Constant1_Value_k;           /* Expression: uint8(0)
                                        * Referenced by: '<S12>/Constant1'
                                        */
  uint8_T Constant2_Value_h;           /* Expression: uint8(0)
                                        * Referenced by: '<S4>/Constant2'
                                        */
  uint8_T Constant2_Value_f;           /* Expression: uint8(0)
                                        * Referenced by: '<S2>/Constant2'
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
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S5>/Constant' : Unused code path elimination
 * Block '<S5>/Constant1' : Unused code path elimination
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
 * '<Root>' : 'FC_Test'
 * '<S1>'   : 'FC_Test/Sensor Board'
 * '<S2>'   : 'FC_Test/Sensor Board/ICM42688'
 * '<S3>'   : 'FC_Test/Sensor Board/LPS25'
 * '<S4>'   : 'FC_Test/Sensor Board/ICM42688/Configure'
 * '<S5>'   : 'FC_Test/Sensor Board/ICM42688/Read IMU'
 * '<S6>'   : 'FC_Test/Sensor Board/ICM42688/SwitchBank'
 * '<S7>'   : 'FC_Test/Sensor Board/ICM42688/Configure/RunConfig'
 * '<S8>'   : 'FC_Test/Sensor Board/ICM42688/Configure/SwitchBank'
 * '<S9>'   : 'FC_Test/Sensor Board/ICM42688/Configure/RunConfig/ConfigureSensors'
 * '<S10>'  : 'FC_Test/Sensor Board/ICM42688/Configure/RunConfig/ConfigureSensors/EnableSensor'
 * '<S11>'  : 'FC_Test/Sensor Board/ICM42688/Configure/RunConfig/ConfigureSensors/SetFilters'
 * '<S12>'  : 'FC_Test/Sensor Board/ICM42688/Configure/RunConfig/ConfigureSensors/SetODR'
 * '<S13>'  : 'FC_Test/Sensor Board/ICM42688/Configure/RunConfig/ConfigureSensors/SetFilters/Set Accel AAF'
 * '<S14>'  : 'FC_Test/Sensor Board/ICM42688/Configure/RunConfig/ConfigureSensors/SetFilters/Set Gyro AAF'
 * '<S15>'  : 'FC_Test/Sensor Board/ICM42688/Configure/RunConfig/ConfigureSensors/SetFilters/SwitchBank'
 * '<S16>'  : 'FC_Test/Sensor Board/ICM42688/Configure/RunConfig/ConfigureSensors/SetFilters/SwitchBank1'
 * '<S17>'  : 'FC_Test/Sensor Board/ICM42688/Configure/RunConfig/ConfigureSensors/SetFilters/Set Accel AAF/MATLAB Function'
 * '<S18>'  : 'FC_Test/Sensor Board/ICM42688/Configure/RunConfig/ConfigureSensors/SetFilters/Set Gyro AAF/MATLAB Function'
 * '<S19>'  : 'FC_Test/Sensor Board/ICM42688/Configure/RunConfig/ConfigureSensors/SetFilters/Set Gyro AAF/MATLAB Function1'
 * '<S20>'  : 'FC_Test/Sensor Board/ICM42688/Configure/RunConfig/ConfigureSensors/SetODR/ODR'
 * '<S21>'  : 'FC_Test/Sensor Board/ICM42688/Configure/RunConfig/ConfigureSensors/SetODR/SwitchBank1'
 * '<S22>'  : 'FC_Test/Sensor Board/LPS25/Configure'
 * '<S23>'  : 'FC_Test/Sensor Board/LPS25/Read Pressure'
 * '<S24>'  : 'FC_Test/Sensor Board/LPS25/Configure/ConfigureSensors'
 * '<S25>'  : 'FC_Test/Sensor Board/LPS25/Read Pressure/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_FC_Test_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
