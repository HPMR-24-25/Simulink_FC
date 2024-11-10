/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: FC_Test_private.h
 *
 * Code generated for Simulink model 'FC_Test'.
 *
 * Model version                  : 1.206
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sun Nov 10 12:34:15 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FC_Test_private_h_
#define RTW_HEADER_FC_Test_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "FC_Test.h"
#include "FC_Test_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

extern void FC_Test_I2CControllerRead_Init(DW_I2CControllerRead_FC_Test_T
  *localDW);
extern void FC_Test_I2CControllerRead(DW_I2CControllerRead_FC_Test_T *localDW);
extern void FC_Test_I2CControllerWrite_Init(DW_I2CControllerWrite_FC_Test_T
  *localDW);
extern void FC_Test_I2CControllerWrite(uint8_T rtu_0,
  DW_I2CControllerWrite_FC_Test_T *localDW);
extern void FC_Te_I2CControllerWrite_j_Init(DW_I2CControllerWrite_FC_Te_f_T
  *localDW);
extern void FC_Test_I2CControllerWrite_p(uint8_T rtu_0,
  DW_I2CControllerWrite_FC_Te_f_T *localDW);
extern void FC_Test_I2CControllerRead_Term(DW_I2CControllerRead_FC_Test_T
  *localDW);
extern void FC_Test_I2CControllerWrite_Term(DW_I2CControllerWrite_FC_Test_T
  *localDW);
extern void FC_Te_I2CControllerWrite_b_Term(DW_I2CControllerWrite_FC_Te_f_T
  *localDW);

#endif                                 /* RTW_HEADER_FC_Test_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
