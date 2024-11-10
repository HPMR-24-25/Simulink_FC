/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: FC_Test.c
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

#include "FC_Test.h"
#include "FC_Test_types.h"
#include "rtwtypes.h"
#include "FC_Test_private.h"
#include "mw_stm32_i2c_ll.h"
#include <math.h>

/* Block signals (default storage) */
B_FC_Test_T FC_Test_B;

/* Block states (default storage) */
DW_FC_Test_T FC_Test_DW;

/* Real-time model */
static RT_MODEL_FC_Test_T FC_Test_M_;
RT_MODEL_FC_Test_T *const FC_Test_M = &FC_Test_M_;

/* Forward declaration for local functions */
static void FC_Test_SystemCore_setup(stm32cube_blocks_I2CControlle_T *obj);

/* Forward declaration for local functions */
static void FC_Test_SystemCore_setup_n(stm32cube_blocks_I2CControl_l_T *obj);

/* Forward declaration for local functions */
static void FC_Test_SystemCore_setup_n2(stm32cube_blocks_I2CControl_l_T *obj);

/* Forward declaration for local functions */
static void FC_Test_SystemCore_setup_b(stm32cube_blocks_I2CControlle_T *obj);
static void FC_Test_SystemCore_setup_bg(stm32cube_blocks_I2CControl_l_T *obj);
static void FC_Test_SystemCore_setup(stm32cube_blocks_I2CControlle_T *obj)
{
  STM32_I2C_Struct_T * i2cBlockStruct_loc;
  STM32_I2C_ModuleStruct_T c;
  obj->isSetupComplete = false;

  /* Start for MATLABSystem: '<S15>/I2C Controller Read' */
  obj->isInitialized = 1;
  c.instance = I2C1;
  c.txCommunicationMode = MW_I2C_COMMUNICATION_POLLING;
  c.rxCommunicationMode = MW_I2C_COMMUNICATION_POLLING;
  obj->MW_I2C_BlockStruct.h_i2c = NULL;
  obj->MW_I2C_BlockStruct.rxBufferStructPtr = NULL;
  obj->MW_I2C_BlockStruct.txBufferStructPtr = NULL;
  i2cBlockStruct_loc = (STM32_I2C_Struct_T *)(&obj->MW_I2C_BlockStruct);
  obj->MW_I2C_HANDLE = I2C_Init(&c, i2cBlockStruct_loc);
  obj->isSetupComplete = true;
}

/* System initialize for atomic system: */
void FC_Test_I2CControllerRead_Init(DW_I2CControllerRead_FC_Test_T *localDW)
{
  /* Start for MATLABSystem: '<S15>/I2C Controller Read' */
  localDW->obj.isInitialized = 0;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  FC_Test_SystemCore_setup(&localDW->obj);
}

/* Output and update for atomic system: */
void FC_Test_I2CControllerRead(DW_I2CControllerRead_FC_Test_T *localDW)
{
  uint32_T status;
  uint8_T rxDataLoc;

  /* MATLABSystem: '<S15>/I2C Controller Read' */
  rxDataLoc = 118U;
  status = I2C_Controller_TransmitData_Polling(localDW->obj.MW_I2C_HANDLE, 104,
    &rxDataLoc, 1U, true, true, 1U);
  if (status == 0U) {
    I2C_Controller_ReceiveData_Polling(localDW->obj.MW_I2C_HANDLE, 104,
      &rxDataLoc, 1U, false, false, 1U);
  }

  /* End of MATLABSystem: '<S15>/I2C Controller Read' */
}

/* Termination for atomic system: */
void FC_Test_I2CControllerRead_Term(DW_I2CControllerRead_FC_Test_T *localDW)
{
  /* Terminate for MATLABSystem: '<S15>/I2C Controller Read' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S15>/I2C Controller Read' */
}

static void FC_Test_SystemCore_setup_n(stm32cube_blocks_I2CControl_l_T *obj)
{
  STM32_I2C_Struct_T * i2cBlockStruct_loc;
  STM32_I2C_ModuleStruct_T c;
  obj->isSetupComplete = false;

  /* Start for MATLABSystem: '<S15>/I2C Controller Write' */
  obj->isInitialized = 1;
  c.instance = I2C1;
  c.txCommunicationMode = MW_I2C_COMMUNICATION_POLLING;
  c.rxCommunicationMode = MW_I2C_COMMUNICATION_POLLING;
  obj->MW_I2C_BlockStruct.h_i2c = NULL;
  obj->MW_I2C_BlockStruct.rxBufferStructPtr = NULL;
  obj->MW_I2C_BlockStruct.txBufferStructPtr = NULL;
  i2cBlockStruct_loc = (STM32_I2C_Struct_T *)(&obj->MW_I2C_BlockStruct);
  obj->MW_I2C_HANDLE = I2C_Init(&c, i2cBlockStruct_loc);
  obj->isSetupComplete = true;
}

/* System initialize for atomic system: */
void FC_Test_I2CControllerWrite_Init(DW_I2CControllerWrite_FC_Test_T *localDW)
{
  /* Start for MATLABSystem: '<S15>/I2C Controller Write' */
  localDW->obj.isInitialized = 0;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  FC_Test_SystemCore_setup_n(&localDW->obj);
}

/* Output and update for atomic system: */
void FC_Test_I2CControllerWrite(uint8_T rtu_0, DW_I2CControllerWrite_FC_Test_T
  *localDW)
{
  uint8_T SwappedDataBytes[2];

  /* MATLABSystem: '<S15>/I2C Controller Write' */
  SwappedDataBytes[0] = 118U;
  SwappedDataBytes[1] = rtu_0;
  I2C_Controller_TransmitData_Polling(localDW->obj.MW_I2C_HANDLE, 104,
    &SwappedDataBytes[0], 2U, false, false, 1U);
}

/* Termination for atomic system: */
void FC_Test_I2CControllerWrite_Term(DW_I2CControllerWrite_FC_Test_T *localDW)
{
  /* Terminate for MATLABSystem: '<S15>/I2C Controller Write' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S15>/I2C Controller Write' */
}

static void FC_Test_SystemCore_setup_n2(stm32cube_blocks_I2CControl_l_T *obj)
{
  STM32_I2C_Struct_T * i2cBlockStruct_loc;
  STM32_I2C_ModuleStruct_T c;
  obj->isSetupComplete = false;

  /* Start for MATLABSystem: '<S20>/I2C Controller Write' */
  obj->isInitialized = 1;
  c.instance = I2C1;
  c.txCommunicationMode = MW_I2C_COMMUNICATION_POLLING;
  c.rxCommunicationMode = MW_I2C_COMMUNICATION_POLLING;
  obj->MW_I2C_BlockStruct.h_i2c = NULL;
  obj->MW_I2C_BlockStruct.rxBufferStructPtr = NULL;
  obj->MW_I2C_BlockStruct.txBufferStructPtr = NULL;
  i2cBlockStruct_loc = (STM32_I2C_Struct_T *)(&obj->MW_I2C_BlockStruct);
  obj->MW_I2C_HANDLE = I2C_Init(&c, i2cBlockStruct_loc);
  obj->isSetupComplete = true;
}

/* System initialize for atomic system: */
void FC_Te_I2CControllerWrite_j_Init(DW_I2CControllerWrite_FC_Te_f_T *localDW)
{
  /* Start for MATLABSystem: '<S20>/I2C Controller Write' */
  localDW->obj.isInitialized = 0;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  FC_Test_SystemCore_setup_n2(&localDW->obj);
}

/* Output and update for atomic system: */
void FC_Test_I2CControllerWrite_p(uint8_T rtu_0, DW_I2CControllerWrite_FC_Te_f_T
  *localDW)
{
  uint8_T SwappedDataBytes[2];

  /* MATLABSystem: '<S20>/I2C Controller Write' */
  SwappedDataBytes[0] = 80U;
  SwappedDataBytes[1] = rtu_0;
  I2C_Controller_TransmitData_Polling(localDW->obj.MW_I2C_HANDLE, 104,
    &SwappedDataBytes[0], 2U, false, false, 1U);
}

/* Termination for atomic system: */
void FC_Te_I2CControllerWrite_b_Term(DW_I2CControllerWrite_FC_Te_f_T *localDW)
{
  /* Terminate for MATLABSystem: '<S20>/I2C Controller Write' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S20>/I2C Controller Write' */
}

static void FC_Test_SystemCore_setup_b(stm32cube_blocks_I2CControlle_T *obj)
{
  STM32_I2C_Struct_T * i2cBlockStruct_loc;
  STM32_I2C_ModuleStruct_T c;
  obj->isSetupComplete = false;

  /* Start for MATLABSystem: '<S10>/I2C Controller Read' incorporates:
   *  MATLABSystem: '<S13>/I2C Controller Read1'
   *  MATLABSystem: '<S14>/I2C Controller Read2'
   *  MATLABSystem: '<S14>/I2C Controller Read3'
   *  MATLABSystem: '<S22>/I2C Controller Read'
   *  MATLABSystem: '<S23>/I2C Controller Read'
   *  MATLABSystem: '<S23>/I2C Controller Read1'
   *  MATLABSystem: '<S23>/I2C Controller Read2'
   *  MATLABSystem: '<S5>/I2C Controller Read'
   *  MATLABSystem: '<S7>/I2C Controller Read'
   */
  obj->isInitialized = 1;
  c.instance = I2C1;
  c.txCommunicationMode = MW_I2C_COMMUNICATION_POLLING;
  c.rxCommunicationMode = MW_I2C_COMMUNICATION_POLLING;
  obj->MW_I2C_BlockStruct.h_i2c = NULL;
  obj->MW_I2C_BlockStruct.rxBufferStructPtr = NULL;
  obj->MW_I2C_BlockStruct.txBufferStructPtr = NULL;
  i2cBlockStruct_loc = (STM32_I2C_Struct_T *)(&obj->MW_I2C_BlockStruct);
  obj->MW_I2C_HANDLE = I2C_Init(&c, i2cBlockStruct_loc);
  obj->isSetupComplete = true;
}

static void FC_Test_SystemCore_setup_bg(stm32cube_blocks_I2CControl_l_T *obj)
{
  STM32_I2C_Struct_T * i2cBlockStruct_loc;
  STM32_I2C_ModuleStruct_T c;
  obj->isSetupComplete = false;

  /* Start for MATLABSystem: '<S10>/I2C Controller Write' incorporates:
   *  MATLABSystem: '<S13>/I2C Controller Write3'
   *  MATLABSystem: '<S13>/I2C Controller Write4'
   *  MATLABSystem: '<S13>/I2C Controller Write5'
   *  MATLABSystem: '<S14>/I2C Controller Write4'
   *  MATLABSystem: '<S14>/I2C Controller Write5'
   *  MATLABSystem: '<S14>/I2C Controller Write6'
   *  MATLABSystem: '<S14>/I2C Controller Write8'
   *  MATLABSystem: '<S24>/I2C Controller Write'
   */
  obj->isInitialized = 1;
  c.instance = I2C1;
  c.txCommunicationMode = MW_I2C_COMMUNICATION_POLLING;
  c.rxCommunicationMode = MW_I2C_COMMUNICATION_POLLING;
  obj->MW_I2C_BlockStruct.h_i2c = NULL;
  obj->MW_I2C_BlockStruct.rxBufferStructPtr = NULL;
  obj->MW_I2C_BlockStruct.txBufferStructPtr = NULL;
  i2cBlockStruct_loc = (STM32_I2C_Struct_T *)(&obj->MW_I2C_BlockStruct);
  obj->MW_I2C_HANDLE = I2C_Init(&c, i2cBlockStruct_loc);
  obj->isSetupComplete = true;
}

/* Model step function */
void FC_Test_step(void)
{
  real_T rtb_ShiftArithmetic1;
  real_T tmp;
  int32_T i;
  uint32_T status;
  uint8_T SwappedDataBytes_0[9];
  uint8_T txDataSwapLoc[8];
  uint8_T SwappedDataBytes[2];
  uint8_T rxData;
  uint8_T rxDataLoc;
  uint8_T rxData_0;
  uint8_T rxData_1;
  uint8_T rxData_2;
  uint8_T rxData_3;
  uint8_T rxData_4;

  /* Reset subsysRan breadcrumbs */
  srClearBC(FC_Test_DW.ConfigureSensors_SubsysRanBC_m);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FC_Test_DW.Configure_SubsysRanBC_k);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FC_Test_DW.ReadIMU_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FC_Test_DW.ConfigureSensors_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FC_Test_DW.Configure_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FC_Test_DW.ReadPressure_SubsysRanBC);

  /* Step: '<S2>/Step' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Constant: '<S11>/Constant2'
   *  Constant: '<S12>/Constant1'
   *  Constant: '<S4>/Constant2'
   *  Step: '<S3>/Step'
   */
  tmp = FC_Test_M->Timing.t[0];
  if (tmp < FC_Test_P.Step_Time) {
    rtb_ShiftArithmetic1 = FC_Test_P.Step_Y0;
  } else {
    rtb_ShiftArithmetic1 = FC_Test_P.Step_YFinal;
  }

  /* Outputs for Enabled SubSystem: '<S2>/Configure' incorporates:
   *  EnablePort: '<S4>/Enable'
   */
  if (rtb_ShiftArithmetic1 > 0.0) {
    FC_Test_I2CControllerWrite(FC_Test_P.Constant2_Value_h,
      &FC_Test_DW.I2CControllerWrite_p);

    /* MATLABSystem: '<S7>/I2C Controller Read' incorporates:
     *  Constant: '<S4>/Constant2'
     */
    rxDataLoc = 117U;
    status = I2C_Controller_TransmitData_Polling(FC_Test_DW.obj_n.MW_I2C_HANDLE,
      104, &rxDataLoc, 1U, true, true, 1U);
    if (status == 0U) {
      I2C_Controller_ReceiveData_Polling(FC_Test_DW.obj_n.MW_I2C_HANDLE, 104,
        &rxData, 1U, false, false, 1U);
    } else {
      rxData = 0U;
    }

    /* Switch: '<S7>/CheckWhoIs' incorporates:
     *  MATLABSystem: '<S7>/I2C Controller Read'
     * */
    if (rxData >= FC_Test_P.sensors.ICM42688.WHO_ID) {
      /* Switch: '<S7>/CheckWhoIs' incorporates:
       *  Constant: '<S7>/Constant'
       */
      FC_Test_B.WhoIsCheck_e = FC_Test_P.Constant_Value;
    } else {
      /* Switch: '<S7>/CheckWhoIs' incorporates:
       *  Constant: '<S7>/Constant1'
       */
      FC_Test_B.WhoIsCheck_e = FC_Test_P.Constant1_Value;
    }

    /* End of Switch: '<S7>/CheckWhoIs' */

    /* Outputs for Enabled SubSystem: '<S7>/ConfigureSensors' incorporates:
     *  EnablePort: '<S9>/Enable'
     */
    if (FC_Test_B.WhoIsCheck_e > 0.0) {
      /* MATLABSystem: '<S10>/I2C Controller Read' */
      rxDataLoc = 78U;
      status = I2C_Controller_TransmitData_Polling
        (FC_Test_DW.obj_b.MW_I2C_HANDLE, 104, &rxDataLoc, 1U, true, true, 1U);
      if (status == 0U) {
        I2C_Controller_ReceiveData_Polling(FC_Test_DW.obj_b.MW_I2C_HANDLE, 104,
          &rxDataLoc, 1U, false, false, 1U);
      }

      /* End of MATLABSystem: '<S10>/I2C Controller Read' */

      /* MATLABSystem: '<S10>/I2C Controller Write' incorporates:
       *  Constant: '<S10>/Constant'
       */
      SwappedDataBytes[0] = 78U;
      SwappedDataBytes[1] = FC_Test_P.sensors.ICM42688.config.SENSOR_ENABLE;
      I2C_Controller_TransmitData_Polling(FC_Test_DW.obj_cm.MW_I2C_HANDLE, 104,
        &SwappedDataBytes[0], 2U, false, false, 1U);

      /* MATLABSystem: '<S14>/I2C Controller Read3' */
      rxDataLoc = 12U;
      status = I2C_Controller_TransmitData_Polling
        (FC_Test_DW.obj_j.MW_I2C_HANDLE, 104, &rxDataLoc, 1U, true, true, 1U);
      if (status == 0U) {
        I2C_Controller_ReceiveData_Polling(FC_Test_DW.obj_j.MW_I2C_HANDLE, 104,
          &rxDataLoc, 1U, false, false, 1U);
      }

      /* End of MATLABSystem: '<S14>/I2C Controller Read3' */

      /* MATLABSystem: '<S14>/I2C Controller Write8' incorporates:
       *  Constant: '<S14>/Constant'
       *  MATLAB Function: '<S14>/MATLAB Function1'
       */
      SwappedDataBytes[0] = 12U;
      SwappedDataBytes[1] = (uint8_T)
        FC_Test_P.sensors.ICM42688.config.gyro.AAF.DELT;
      I2C_Controller_TransmitData_Polling(FC_Test_DW.obj_c.MW_I2C_HANDLE, 104,
        &SwappedDataBytes[0], 2U, false, false, 1U);

      /* ArithShift: '<S14>/Shift Arithmetic1' incorporates:
       *  Constant: '<S14>/Constant5'
       */
      rtb_ShiftArithmetic1 = ldexp
        (FC_Test_P.sensors.ICM42688.config.gyro.AAF.BITSHIFT, 12);

      /* MATLABSystem: '<S14>/I2C Controller Write5' */
      mw_swap_double_uint8(&txDataSwapLoc[0], &rtb_ShiftArithmetic1, 1U);
      SwappedDataBytes_0[0] = 14U;
      for (i = 0; i < 8; i++) {
        SwappedDataBytes_0[i + 1] = txDataSwapLoc[i];
      }

      I2C_Controller_TransmitData_Polling(FC_Test_DW.obj_fl.MW_I2C_HANDLE, 104,
        &SwappedDataBytes_0[0], 9U, false, false, 1U);

      /* End of MATLABSystem: '<S14>/I2C Controller Write5' */

      /* MATLABSystem: '<S14>/I2C Controller Write4' incorporates:
       *  Constant: '<S14>/Constant6'
       */
      mw_swap_double_uint8(&txDataSwapLoc[0],
                           &FC_Test_P.sensors.ICM42688.config.gyro.AAF.DELT_SQR,
                           1U);
      SwappedDataBytes_0[0] = 13U;
      for (i = 0; i < 8; i++) {
        SwappedDataBytes_0[i + 1] = txDataSwapLoc[i];
      }

      I2C_Controller_TransmitData_Polling(FC_Test_DW.obj_c2.MW_I2C_HANDLE, 104,
        &SwappedDataBytes_0[0], 9U, false, false, 1U);

      /* End of MATLABSystem: '<S14>/I2C Controller Write4' */

      /* MATLABSystem: '<S14>/I2C Controller Read2' */
      rxDataLoc = 11U;
      status = I2C_Controller_TransmitData_Polling
        (FC_Test_DW.obj_f.MW_I2C_HANDLE, 104, &rxDataLoc, 1U, true, true, 1U);
      if (status == 0U) {
        I2C_Controller_ReceiveData_Polling(FC_Test_DW.obj_f.MW_I2C_HANDLE, 104,
          &rxData_4, 1U, false, false, 1U);
      } else {
        rxData_4 = 0U;
      }

      /* MATLABSystem: '<S14>/I2C Controller Write6' incorporates:
       *  MATLAB Function: '<S14>/MATLAB Function'
       *  MATLABSystem: '<S14>/I2C Controller Read2'
       * */
      SwappedDataBytes[0] = 11U;
      SwappedDataBytes[1] = (uint8_T)(rxData_4 | 3);
      I2C_Controller_TransmitData_Polling(FC_Test_DW.obj_a.MW_I2C_HANDLE, 104,
        &SwappedDataBytes[0], 2U, false, false, 1U);
      FC_Test_I2CControllerWrite(FC_Test_P.Constant1_Value_f,
        &FC_Test_DW.I2CControllerWrite_pnae);
      FC_Test_I2CControllerRead(&FC_Test_DW.I2CControllerRead_pnaev);

      /* MATLABSystem: '<S13>/I2C Controller Write4' incorporates:
       *  Constant: '<S11>/Constant1'
       *  Constant: '<S13>/Constant5'
       */
      mw_swap_double_uint8(&txDataSwapLoc[0],
                           &FC_Test_P.sensors.ICM42688.config.accel.AAF.DELT_SQR,
                           1U);
      SwappedDataBytes_0[0] = 4U;
      for (i = 0; i < 8; i++) {
        SwappedDataBytes_0[i + 1] = txDataSwapLoc[i];
      }

      I2C_Controller_TransmitData_Polling(FC_Test_DW.obj_gl.MW_I2C_HANDLE, 104,
        &SwappedDataBytes_0[0], 9U, false, false, 1U);

      /* End of MATLABSystem: '<S13>/I2C Controller Write4' */

      /* MATLABSystem: '<S13>/I2C Controller Write5' incorporates:
       *  Constant: '<S13>/Constant6'
       */
      mw_swap_double_uint8(&txDataSwapLoc[0],
                           &FC_Test_P.sensors.ICM42688.config.accel.AAF.BITSHIFT,
                           1U);
      SwappedDataBytes_0[0] = 5U;
      for (i = 0; i < 8; i++) {
        SwappedDataBytes_0[i + 1] = txDataSwapLoc[i];
      }

      I2C_Controller_TransmitData_Polling(FC_Test_DW.obj_lj.MW_I2C_HANDLE, 104,
        &SwappedDataBytes_0[0], 9U, false, false, 1U);

      /* End of MATLABSystem: '<S13>/I2C Controller Write5' */

      /* MATLABSystem: '<S13>/I2C Controller Read1' */
      rxDataLoc = 3U;
      status = I2C_Controller_TransmitData_Polling
        (FC_Test_DW.obj_p.MW_I2C_HANDLE, 104, &rxDataLoc, 1U, true, true, 1U);
      if (status == 0U) {
        I2C_Controller_ReceiveData_Polling(FC_Test_DW.obj_p.MW_I2C_HANDLE, 104,
          &rxDataLoc, 1U, false, false, 1U);
      }

      /* End of MATLABSystem: '<S13>/I2C Controller Read1' */

      /* MATLABSystem: '<S13>/I2C Controller Write3' incorporates:
       *  Constant: '<S13>/Constant7'
       *  MATLAB Function: '<S13>/MATLAB Function'
       */
      SwappedDataBytes[0] = 3U;
      SwappedDataBytes[1] = (uint8_T)((uint8_T)(real_T)((uint64_T)
        FC_Test_P.sensors.ICM42688.config.accel.AAF.DELT << 1) | 1);
      I2C_Controller_TransmitData_Polling(FC_Test_DW.obj_h.MW_I2C_HANDLE, 104,
        &SwappedDataBytes[0], 2U, false, false, 1U);
      FC_Test_I2CControllerWrite(FC_Test_P.Constant2_Value,
        &FC_Test_DW.I2CControllerWrite_pna);
      FC_Test_I2CControllerRead(&FC_Test_DW.I2CControllerRead_pnae);
      FC_Test_I2CControllerWrite(FC_Test_P.Constant1_Value_k,
        &FC_Test_DW.I2CControllerWrite_pnaevv);

      /* S-Function (sfix_bitop): '<S20>/Bitwise OR' incorporates:
       *  Constant: '<S11>/Constant2'
       *  Constant: '<S12>/Constant1'
       *  Constant: '<S20>/Constant'
       *  Constant: '<S20>/Constant1'
       */
      FC_Test_B.BitwiseOR = (uint8_T)
        (FC_Test_P.sensors.ICM42688.config.accel.ODR.kHz_2 |
         FC_Test_P.sensors.ICM42688.config.accel.SCALE.g16);
      FC_Test_I2CControllerWrite_p(FC_Test_B.BitwiseOR,
        &FC_Test_DW.I2CControllerWrite_pnaev);

      /* S-Function (sfix_bitop): '<S20>/Bitwise OR1' incorporates:
       *  Constant: '<S20>/Constant2'
       *  Constant: '<S20>/Constant3'
       */
      FC_Test_B.BitwiseOR1 = (uint8_T)
        (FC_Test_P.sensors.ICM42688.config.gyro.ODR.kHz_2 |
         FC_Test_P.sensors.ICM42688.config.gyro.SCALE.dps2000);
      FC_Test_I2CControllerWrite_p(FC_Test_B.BitwiseOR1,
        &FC_Test_DW.I2CControllerWrite1);
      FC_Test_I2CControllerRead(&FC_Test_DW.I2CControllerRead_pnaevv);
      srUpdateBC(FC_Test_DW.ConfigureSensors_SubsysRanBC_m);
    }

    /* End of Outputs for SubSystem: '<S7>/ConfigureSensors' */
    FC_Test_I2CControllerRead(&FC_Test_DW.I2CControllerRead_pn);
    srUpdateBC(FC_Test_DW.Configure_SubsysRanBC_k);
  }

  /* End of Step: '<S2>/Step' */
  /* End of Outputs for SubSystem: '<S2>/Configure' */

  /* Outputs for Enabled SubSystem: '<S2>/Read IMU' incorporates:
   *  EnablePort: '<S5>/Enable'
   */
  if (FC_Test_B.WhoIsCheck_e > 0.0) {
    /* MATLABSystem: '<S5>/I2C Controller Read' */
    rxDataLoc = 31U;
    status = I2C_Controller_TransmitData_Polling(FC_Test_DW.obj_d.MW_I2C_HANDLE,
      104, &rxDataLoc, 1U, true, true, 1U);
    if (status == 0U) {
      I2C_Controller_ReceiveData_Polling(FC_Test_DW.obj_d.MW_I2C_HANDLE, 104,
        &FC_Test_B.dataRead[0], 12U, false, false, 1U);
    } else {
      /* MATLABSystem: '<S5>/I2C Controller Read' */
      for (i = 0; i < 12; i++) {
        FC_Test_B.dataRead[i] = 0U;
      }
    }

    /* End of MATLABSystem: '<S5>/I2C Controller Read' */
    /* SignalConversion generated from: '<S5>/IMU_Data' */
    FC_Test_B.OutportBufferForIMU_Data = 0.0;
    srUpdateBC(FC_Test_DW.ReadIMU_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S2>/Read IMU' */
  /* Step: '<S3>/Step' */
  if (tmp < FC_Test_P.Step_Time_l) {
    tmp = FC_Test_P.Step_Y0_d;
  } else {
    tmp = FC_Test_P.Step_YFinal_p;
  }

  /* Outputs for Enabled SubSystem: '<S3>/Configure' incorporates:
   *  EnablePort: '<S22>/Enable'
   */
  if (tmp > 0.0) {
    /* MATLABSystem: '<S22>/I2C Controller Read' */
    rxDataLoc = 15U;
    status = I2C_Controller_TransmitData_Polling(FC_Test_DW.obj_o.MW_I2C_HANDLE,
      92, &rxDataLoc, 1U, true, true, 1U);
    if (status == 0U) {
      I2C_Controller_ReceiveData_Polling(FC_Test_DW.obj_o.MW_I2C_HANDLE, 92,
        &rxData_0, 1U, false, false, 1U);
    } else {
      rxData_0 = 0U;
    }

    /* Switch: '<S22>/CheckWhoIs' incorporates:
     *  MATLABSystem: '<S22>/I2C Controller Read'
     * */
    if (rxData_0 >= FC_Test_P.sensors.LPS25.reg.WHO_ID) {
      /* Switch: '<S22>/CheckWhoIs' incorporates:
       *  Constant: '<S22>/Constant'
       */
      FC_Test_B.WhoIsCheck = FC_Test_P.Constant_Value_c;
    } else {
      /* Switch: '<S22>/CheckWhoIs' incorporates:
       *  Constant: '<S22>/Constant1'
       */
      FC_Test_B.WhoIsCheck = FC_Test_P.Constant1_Value_c;
    }

    /* End of Switch: '<S22>/CheckWhoIs' */

    /* Outputs for Enabled SubSystem: '<S22>/ConfigureSensors' incorporates:
     *  EnablePort: '<S24>/Enable'
     */
    if (FC_Test_B.WhoIsCheck > 0.0) {
      /* MATLABSystem: '<S24>/I2C Controller Write' incorporates:
       *  Constant: '<S24>/Constant'
       */
      SwappedDataBytes[0] = 32U;
      SwappedDataBytes[1] = FC_Test_P.sensors.LPS25.config.ODR.Hz25;
      I2C_Controller_TransmitData_Polling(FC_Test_DW.obj_l.MW_I2C_HANDLE, 92,
        &SwappedDataBytes[0], 2U, false, false, 1U);
      srUpdateBC(FC_Test_DW.ConfigureSensors_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S22>/ConfigureSensors' */
    srUpdateBC(FC_Test_DW.Configure_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S3>/Configure' */

  /* Outputs for Enabled SubSystem: '<S3>/Read Pressure' incorporates:
   *  EnablePort: '<S23>/Enable'
   */
  if (FC_Test_B.WhoIsCheck > 0.0) {
    /* MATLABSystem: '<S23>/I2C Controller Read' */
    rxDataLoc = 42U;
    status = I2C_Controller_TransmitData_Polling(FC_Test_DW.obj_gm.MW_I2C_HANDLE,
      92, &rxDataLoc, 1U, true, true, 1U);
    if (status == 0U) {
      I2C_Controller_ReceiveData_Polling(FC_Test_DW.obj_gm.MW_I2C_HANDLE, 92,
        &rxData_1, 1U, false, false, 1U);
    } else {
      rxData_1 = 0U;
    }

    /* MATLABSystem: '<S23>/I2C Controller Read1' */
    rxDataLoc = 41U;
    status = I2C_Controller_TransmitData_Polling(FC_Test_DW.obj_g.MW_I2C_HANDLE,
      92, &rxDataLoc, 1U, true, true, 1U);
    if (status == 0U) {
      I2C_Controller_ReceiveData_Polling(FC_Test_DW.obj_g.MW_I2C_HANDLE, 92,
        &rxData_2, 1U, false, false, 1U);
    } else {
      rxData_2 = 0U;
    }

    /* MATLABSystem: '<S23>/I2C Controller Read2' */
    rxDataLoc = 40U;
    status = I2C_Controller_TransmitData_Polling(FC_Test_DW.obj.MW_I2C_HANDLE,
      92, &rxDataLoc, 1U, true, true, 1U);
    if (status == 0U) {
      I2C_Controller_ReceiveData_Polling(FC_Test_DW.obj.MW_I2C_HANDLE, 92,
        &rxData_3, 1U, false, false, 1U);
    } else {
      rxData_3 = 0U;
    }

    /* MATLAB Function: '<S23>/MATLAB Function' incorporates:
     *  MATLABSystem: '<S23>/I2C Controller Read'
     *  MATLABSystem: '<S23>/I2C Controller Read1'
     *  MATLABSystem: '<S23>/I2C Controller Read2'
     * */
    FC_Test_B.pressure = (real_T)((int32_T)((uint32_T)rxData_1 << 16 | (uint32_T)
      rxData_2 << 8) | rxData_3) / 4096.0;
    srUpdateBC(FC_Test_DW.ReadPressure_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S3>/Read Pressure' */
  /* Constant: '<S2>/Constant2' */
  FC_Test_I2CControllerWrite(FC_Test_P.Constant2_Value_f,
    &FC_Test_DW.I2CControllerWrite);
  FC_Test_I2CControllerRead(&FC_Test_DW.I2CControllerRead);

  {                                    /* Sample time: [0.0s, 0.0s] */
    extmodeErrorCode_T errorCode = EXTMODE_SUCCESS;
    extmodeSimulationTime_T currentTime = (extmodeSimulationTime_T)
      FC_Test_M->Timing.t[0];

    /* Trigger External Mode event */
    errorCode = extmodeEvent(0,currentTime);
    if (errorCode != EXTMODE_SUCCESS) {
      /* Code to handle External Mode event errors
         may be added here */
    }
  }

  {                                    /* Sample time: [0.2s, 0.0s] */
    extmodeErrorCode_T errorCode = EXTMODE_SUCCESS;
    extmodeSimulationTime_T currentTime = (extmodeSimulationTime_T)
      ((FC_Test_M->Timing.clockTick1) * 0.2);

    /* Trigger External Mode event */
    errorCode = extmodeEvent(1,currentTime);
    if (errorCode != EXTMODE_SUCCESS) {
      /* Code to handle External Mode event errors
         may be added here */
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  FC_Test_M->Timing.t[0] =
    ((time_T)(++FC_Test_M->Timing.clockTick0)) * FC_Test_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.2s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.2, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    FC_Test_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void FC_Test_initialize(void)
{
  /* Registration code */
  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&FC_Test_M->solverInfo, &FC_Test_M->Timing.simTimeStep);
    rtsiSetTPtr(&FC_Test_M->solverInfo, &rtmGetTPtr(FC_Test_M));
    rtsiSetStepSizePtr(&FC_Test_M->solverInfo, &FC_Test_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&FC_Test_M->solverInfo, (&rtmGetErrorStatus(FC_Test_M)));
    rtsiSetRTModelPtr(&FC_Test_M->solverInfo, FC_Test_M);
  }

  rtsiSetSimTimeStep(&FC_Test_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&FC_Test_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(FC_Test_M, &FC_Test_M->Timing.tArray[0]);
  rtmSetTFinal(FC_Test_M, -1);
  FC_Test_M->Timing.stepSize0 = 0.2;

  /* External mode info */
  FC_Test_M->Sizes.checksums[0] = (3695124942U);
  FC_Test_M->Sizes.checksums[1] = (551945652U);
  FC_Test_M->Sizes.checksums[2] = (2894574829U);
  FC_Test_M->Sizes.checksums[3] = (3995590031U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[46];
    FC_Test_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[2] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[3] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[4] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[5] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[6] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[7] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[8] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[9] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[10] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[11] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[12] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[13] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[14] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[15] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[16] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[17] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[18] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[19] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[20] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[21] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[22] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[23] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[24] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC_m;
    systemRan[25] = (sysRanDType *)&FC_Test_DW.Configure_SubsysRanBC_k;
    systemRan[26] = (sysRanDType *)&FC_Test_DW.Configure_SubsysRanBC_k;
    systemRan[27] = (sysRanDType *)&FC_Test_DW.Configure_SubsysRanBC_k;
    systemRan[28] = (sysRanDType *)&FC_Test_DW.Configure_SubsysRanBC_k;
    systemRan[29] = (sysRanDType *)&FC_Test_DW.Configure_SubsysRanBC_k;
    systemRan[30] = (sysRanDType *)&FC_Test_DW.Configure_SubsysRanBC_k;
    systemRan[31] = (sysRanDType *)&FC_Test_DW.ReadIMU_SubsysRanBC;
    systemRan[32] = (sysRanDType *)&FC_Test_DW.ReadIMU_SubsysRanBC;
    systemRan[33] = &rtAlwaysEnabled;
    systemRan[34] = &rtAlwaysEnabled;
    systemRan[35] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC;
    systemRan[36] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC;
    systemRan[37] = (sysRanDType *)&FC_Test_DW.Configure_SubsysRanBC;
    systemRan[38] = (sysRanDType *)&FC_Test_DW.Configure_SubsysRanBC;
    systemRan[39] = (sysRanDType *)&FC_Test_DW.Configure_SubsysRanBC;
    systemRan[40] = (sysRanDType *)&FC_Test_DW.Configure_SubsysRanBC;
    systemRan[41] = (sysRanDType *)&FC_Test_DW.ReadPressure_SubsysRanBC;
    systemRan[42] = (sysRanDType *)&FC_Test_DW.ReadPressure_SubsysRanBC;
    systemRan[43] = (sysRanDType *)&FC_Test_DW.ReadPressure_SubsysRanBC;
    systemRan[44] = (sysRanDType *)&FC_Test_DW.ReadPressure_SubsysRanBC;
    systemRan[45] = (sysRanDType *)&FC_Test_DW.ReadPressure_SubsysRanBC;
    rteiSetModelMappingInfoPtr(FC_Test_M->extModeInfo,
      &FC_Test_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(FC_Test_M->extModeInfo, FC_Test_M->Sizes.checksums);
    rteiSetTPtr(FC_Test_M->extModeInfo, rtmGetTPtr(FC_Test_M));
  }

  /* Start for MATLABSystem: '<S10>/I2C Controller Read' */
  FC_Test_DW.obj_b.isInitialized = 0;
  FC_Test_DW.obj_b.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup_b(&FC_Test_DW.obj_b);

  /* Start for MATLABSystem: '<S10>/I2C Controller Write' */
  FC_Test_DW.obj_cm.isInitialized = 0;
  FC_Test_DW.obj_cm.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup_bg(&FC_Test_DW.obj_cm);

  /* Start for MATLABSystem: '<S14>/I2C Controller Read3' */
  FC_Test_DW.obj_j.isInitialized = 0;
  FC_Test_DW.obj_j.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup_b(&FC_Test_DW.obj_j);

  /* Start for MATLABSystem: '<S14>/I2C Controller Write8' */
  FC_Test_DW.obj_c.isInitialized = 0;
  FC_Test_DW.obj_c.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup_bg(&FC_Test_DW.obj_c);

  /* Start for MATLABSystem: '<S14>/I2C Controller Write5' */
  FC_Test_DW.obj_fl.isInitialized = 0;
  FC_Test_DW.obj_fl.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup_bg(&FC_Test_DW.obj_fl);

  /* Start for MATLABSystem: '<S14>/I2C Controller Write4' */
  FC_Test_DW.obj_c2.isInitialized = 0;
  FC_Test_DW.obj_c2.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup_bg(&FC_Test_DW.obj_c2);

  /* Start for MATLABSystem: '<S14>/I2C Controller Read2' */
  FC_Test_DW.obj_f.isInitialized = 0;
  FC_Test_DW.obj_f.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup_b(&FC_Test_DW.obj_f);

  /* Start for MATLABSystem: '<S14>/I2C Controller Write6' */
  FC_Test_DW.obj_a.isInitialized = 0;
  FC_Test_DW.obj_a.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup_bg(&FC_Test_DW.obj_a);
  FC_Test_I2CControllerWrite_Init(&FC_Test_DW.I2CControllerWrite_pnae);
  FC_Test_I2CControllerRead_Init(&FC_Test_DW.I2CControllerRead_pnaev);

  /* Start for MATLABSystem: '<S13>/I2C Controller Write4' */
  FC_Test_DW.obj_gl.isInitialized = 0;
  FC_Test_DW.obj_gl.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup_bg(&FC_Test_DW.obj_gl);

  /* Start for MATLABSystem: '<S13>/I2C Controller Write5' */
  FC_Test_DW.obj_lj.isInitialized = 0;
  FC_Test_DW.obj_lj.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup_bg(&FC_Test_DW.obj_lj);

  /* Start for MATLABSystem: '<S13>/I2C Controller Read1' */
  FC_Test_DW.obj_p.isInitialized = 0;
  FC_Test_DW.obj_p.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup_b(&FC_Test_DW.obj_p);

  /* Start for MATLABSystem: '<S13>/I2C Controller Write3' */
  FC_Test_DW.obj_h.isInitialized = 0;
  FC_Test_DW.obj_h.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup_bg(&FC_Test_DW.obj_h);
  FC_Test_I2CControllerWrite_Init(&FC_Test_DW.I2CControllerWrite_pna);
  FC_Test_I2CControllerRead_Init(&FC_Test_DW.I2CControllerRead_pnae);
  FC_Test_I2CControllerWrite_Init(&FC_Test_DW.I2CControllerWrite_pnaevv);
  FC_Te_I2CControllerWrite_j_Init(&FC_Test_DW.I2CControllerWrite_pnaev);
  FC_Te_I2CControllerWrite_j_Init(&FC_Test_DW.I2CControllerWrite1);
  FC_Test_I2CControllerRead_Init(&FC_Test_DW.I2CControllerRead_pnaevv);

  /* End of SystemInitialize for SubSystem: '<S7>/ConfigureSensors' */
  FC_Test_I2CControllerWrite_Init(&FC_Test_DW.I2CControllerWrite_p);

  /* Start for MATLABSystem: '<S7>/I2C Controller Read' */
  FC_Test_DW.obj_n.isInitialized = 0;
  FC_Test_DW.obj_n.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup_b(&FC_Test_DW.obj_n);
  FC_Test_I2CControllerRead_Init(&FC_Test_DW.I2CControllerRead_pn);

  /* SystemInitialize for Switch: '<S7>/CheckWhoIs' incorporates:
   *  Outport: '<S4>/Init'
   */
  FC_Test_B.WhoIsCheck_e = FC_Test_P.Init_Y0;

  /* End of SystemInitialize for SubSystem: '<S2>/Configure' */
  /* Start for MATLABSystem: '<S5>/I2C Controller Read' */
  FC_Test_DW.obj_d.isInitialized = 0;
  FC_Test_DW.obj_d.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup_b(&FC_Test_DW.obj_d);

  /* End of SystemInitialize for SubSystem: '<S2>/Read IMU' */

  /* SystemInitialize for Enabled SubSystem: '<S3>/Configure' */
  /* SystemInitialize for Enabled SubSystem: '<S22>/ConfigureSensors' */
  /* Start for MATLABSystem: '<S24>/I2C Controller Write' */
  FC_Test_DW.obj_l.isInitialized = 0;
  FC_Test_DW.obj_l.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup_bg(&FC_Test_DW.obj_l);

  /* End of SystemInitialize for SubSystem: '<S22>/ConfigureSensors' */

  /* Start for MATLABSystem: '<S22>/I2C Controller Read' */
  FC_Test_DW.obj_o.isInitialized = 0;
  FC_Test_DW.obj_o.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup_b(&FC_Test_DW.obj_o);

  /* SystemInitialize for Switch: '<S22>/CheckWhoIs' incorporates:
   *  Outport: '<S22>/Init'
   */
  FC_Test_B.WhoIsCheck = FC_Test_P.Init_Y0_m;

  /* End of SystemInitialize for SubSystem: '<S3>/Configure' */

  /* SystemInitialize for Enabled SubSystem: '<S3>/Read Pressure' */
  /* Start for MATLABSystem: '<S23>/I2C Controller Read' */
  FC_Test_DW.obj_gm.isInitialized = 0;
  FC_Test_DW.obj_gm.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup_b(&FC_Test_DW.obj_gm);

  /* Start for MATLABSystem: '<S23>/I2C Controller Read1' */
  FC_Test_DW.obj_g.isInitialized = 0;
  FC_Test_DW.obj_g.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup_b(&FC_Test_DW.obj_g);

  /* Start for MATLABSystem: '<S23>/I2C Controller Read2' */
  FC_Test_DW.obj.isInitialized = 0;
  FC_Test_DW.obj.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup_b(&FC_Test_DW.obj);

  /* SystemInitialize for Outport: '<S23>/Pressure' */
  FC_Test_B.pressure = FC_Test_P.Pressure_Y0;

  /* End of SystemInitialize for SubSystem: '<S3>/Read Pressure' */
  FC_Test_I2CControllerWrite_Init(&FC_Test_DW.I2CControllerWrite);
  FC_Test_I2CControllerRead_Init(&FC_Test_DW.I2CControllerRead);
}

/* Model terminate function */
void FC_Test_terminate(void)
{
  /* Terminate for Enabled SubSystem: '<S2>/Configure' */
  FC_Test_I2CControllerWrite_Term(&FC_Test_DW.I2CControllerWrite_p);

  /* Terminate for MATLABSystem: '<S7>/I2C Controller Read' */
  if (!FC_Test_DW.obj_n.matlabCodegenIsDeleted) {
    FC_Test_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S7>/I2C Controller Read' */

  /* Terminate for Enabled SubSystem: '<S7>/ConfigureSensors' */
  /* Terminate for MATLABSystem: '<S10>/I2C Controller Read' */
  if (!FC_Test_DW.obj_b.matlabCodegenIsDeleted) {
    FC_Test_DW.obj_b.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S10>/I2C Controller Read' */

  /* Terminate for MATLABSystem: '<S10>/I2C Controller Write' */
  if (!FC_Test_DW.obj_cm.matlabCodegenIsDeleted) {
    FC_Test_DW.obj_cm.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S10>/I2C Controller Write' */

  /* Terminate for MATLABSystem: '<S14>/I2C Controller Read3' */
  if (!FC_Test_DW.obj_j.matlabCodegenIsDeleted) {
    FC_Test_DW.obj_j.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S14>/I2C Controller Read3' */

  /* Terminate for MATLABSystem: '<S14>/I2C Controller Write8' */
  if (!FC_Test_DW.obj_c.matlabCodegenIsDeleted) {
    FC_Test_DW.obj_c.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S14>/I2C Controller Write8' */

  /* Terminate for MATLABSystem: '<S14>/I2C Controller Write5' */
  if (!FC_Test_DW.obj_fl.matlabCodegenIsDeleted) {
    FC_Test_DW.obj_fl.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S14>/I2C Controller Write5' */

  /* Terminate for MATLABSystem: '<S14>/I2C Controller Write4' */
  if (!FC_Test_DW.obj_c2.matlabCodegenIsDeleted) {
    FC_Test_DW.obj_c2.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S14>/I2C Controller Write4' */

  /* Terminate for MATLABSystem: '<S14>/I2C Controller Read2' */
  if (!FC_Test_DW.obj_f.matlabCodegenIsDeleted) {
    FC_Test_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S14>/I2C Controller Read2' */

  /* Terminate for MATLABSystem: '<S14>/I2C Controller Write6' */
  if (!FC_Test_DW.obj_a.matlabCodegenIsDeleted) {
    FC_Test_DW.obj_a.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S14>/I2C Controller Write6' */
  FC_Test_I2CControllerWrite_Term(&FC_Test_DW.I2CControllerWrite_pnae);
  FC_Test_I2CControllerRead_Term(&FC_Test_DW.I2CControllerRead_pnaev);

  /* Terminate for MATLABSystem: '<S13>/I2C Controller Write4' */
  if (!FC_Test_DW.obj_gl.matlabCodegenIsDeleted) {
    FC_Test_DW.obj_gl.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S13>/I2C Controller Write4' */

  /* Terminate for MATLABSystem: '<S13>/I2C Controller Write5' */
  if (!FC_Test_DW.obj_lj.matlabCodegenIsDeleted) {
    FC_Test_DW.obj_lj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S13>/I2C Controller Write5' */

  /* Terminate for MATLABSystem: '<S13>/I2C Controller Read1' */
  if (!FC_Test_DW.obj_p.matlabCodegenIsDeleted) {
    FC_Test_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S13>/I2C Controller Read1' */

  /* Terminate for MATLABSystem: '<S13>/I2C Controller Write3' */
  if (!FC_Test_DW.obj_h.matlabCodegenIsDeleted) {
    FC_Test_DW.obj_h.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S13>/I2C Controller Write3' */
  FC_Test_I2CControllerWrite_Term(&FC_Test_DW.I2CControllerWrite_pna);
  FC_Test_I2CControllerRead_Term(&FC_Test_DW.I2CControllerRead_pnae);
  FC_Test_I2CControllerWrite_Term(&FC_Test_DW.I2CControllerWrite_pnaevv);
  FC_Te_I2CControllerWrite_b_Term(&FC_Test_DW.I2CControllerWrite_pnaev);
  FC_Te_I2CControllerWrite_b_Term(&FC_Test_DW.I2CControllerWrite1);
  FC_Test_I2CControllerRead_Term(&FC_Test_DW.I2CControllerRead_pnaevv);

  /* End of Terminate for SubSystem: '<S7>/ConfigureSensors' */
  FC_Test_I2CControllerRead_Term(&FC_Test_DW.I2CControllerRead_pn);

  /* End of Terminate for SubSystem: '<S2>/Configure' */

  /* Terminate for Enabled SubSystem: '<S2>/Read IMU' */
  /* Terminate for MATLABSystem: '<S5>/I2C Controller Read' */
  if (!FC_Test_DW.obj_d.matlabCodegenIsDeleted) {
    FC_Test_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S5>/I2C Controller Read' */
  /* Terminate for Enabled SubSystem: '<S3>/Configure' */
  /* Terminate for MATLABSystem: '<S22>/I2C Controller Read' */
  if (!FC_Test_DW.obj_o.matlabCodegenIsDeleted) {
    FC_Test_DW.obj_o.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S22>/I2C Controller Read' */

  /* Terminate for Enabled SubSystem: '<S22>/ConfigureSensors' */
  /* Terminate for MATLABSystem: '<S24>/I2C Controller Write' */
  if (!FC_Test_DW.obj_l.matlabCodegenIsDeleted) {
    FC_Test_DW.obj_l.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S24>/I2C Controller Write' */
  /* End of Terminate for SubSystem: '<S22>/ConfigureSensors' */
  /* End of Terminate for SubSystem: '<S3>/Configure' */

  /* Terminate for Enabled SubSystem: '<S3>/Read Pressure' */
  /* Terminate for MATLABSystem: '<S23>/I2C Controller Read' */
  if (!FC_Test_DW.obj_gm.matlabCodegenIsDeleted) {
    FC_Test_DW.obj_gm.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S23>/I2C Controller Read' */

  /* Terminate for MATLABSystem: '<S23>/I2C Controller Read1' */
  if (!FC_Test_DW.obj_g.matlabCodegenIsDeleted) {
    FC_Test_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S23>/I2C Controller Read1' */

  /* Terminate for MATLABSystem: '<S23>/I2C Controller Read2' */
  if (!FC_Test_DW.obj.matlabCodegenIsDeleted) {
    FC_Test_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S23>/I2C Controller Read2' */
  /* End of Terminate for SubSystem: '<S3>/Read Pressure' */
  FC_Test_I2CControllerWrite_Term(&FC_Test_DW.I2CControllerWrite);
  FC_Test_I2CControllerRead_Term(&FC_Test_DW.I2CControllerRead);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
