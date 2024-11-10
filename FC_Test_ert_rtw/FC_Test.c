/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: FC_Test.c
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

#include "FC_Test.h"
#include "FC_Test_types.h"
#include "rtwtypes.h"
#include "mw_stm32_i2c_ll.h"
#include "FC_Test_private.h"

/* Block signals (default storage) */
B_FC_Test_T FC_Test_B;

/* Block states (default storage) */
DW_FC_Test_T FC_Test_DW;

/* Real-time model */
static RT_MODEL_FC_Test_T FC_Test_M_;
RT_MODEL_FC_Test_T *const FC_Test_M = &FC_Test_M_;

/* Forward declaration for local functions */
static void FC_Test_SystemCore_setup(stm32cube_blocks_I2CControlle_T *obj);
static void FC_Test_SystemCore_setup_b(stm32cube_blocks_I2CControl_b_T *obj);
static void FC_Test_SystemCore_setup(stm32cube_blocks_I2CControlle_T *obj)
{
  STM32_I2C_Struct_T * i2cBlockStruct_loc;
  STM32_I2C_ModuleStruct_T c;
  obj->isSetupComplete = false;

  /* Start for MATLABSystem: '<S11>/I2C Controller Write' */
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

static void FC_Test_SystemCore_setup_b(stm32cube_blocks_I2CControl_b_T *obj)
{
  STM32_I2C_Struct_T * i2cBlockStruct_loc;
  STM32_I2C_ModuleStruct_T c;
  obj->isSetupComplete = false;

  /* Start for MATLABSystem: '<S9>/I2C Controller Read' incorporates:
   *  MATLABSystem: '<S10>/I2C Controller Read'
   *  MATLABSystem: '<S10>/I2C Controller Read1'
   *  MATLABSystem: '<S10>/I2C Controller Read2'
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
  GPIO_TypeDef * portNameLoc;
  real_T tmp;
  uint32_T pinReadLoc;
  uint8_T SwappedDataBytes[2];
  uint8_T rxData;
  uint8_T rxDataLoc;
  uint8_T rxData_0;

  /* Reset subsysRan breadcrumbs */
  srClearBC(FC_Test_DW.ConfigureSensors_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FC_Test_DW.Configure_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(FC_Test_DW.ReadPressure_SubsysRanBC);

  /* MATLABSystem: '<S5>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOC);

  /* MATLABSystem: '<S5>/Digital Port Read' */
  FC_Test_B.DigitalPortRead = ((pinReadLoc & 8192U) != 0U);

  /* MATLABSystem: '<S7>/Digital Port Write' */
  portNameLoc = GPIOB;
  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)FC_Test_B.DigitalPortRead);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)FC_Test_B.DigitalPortRead & 1U);

  /* Step: '<S8>/Step' */
  if (FC_Test_M->Timing.t[0] < FC_Test_P.Step_Time) {
    tmp = FC_Test_P.Step_Y0;
  } else {
    tmp = FC_Test_P.Step_YFinal;
  }

  /* Outputs for Enabled SubSystem: '<S8>/Configure' incorporates:
   *  EnablePort: '<S9>/Enable'
   */
  if (tmp > 0.0) {
    /* MATLABSystem: '<S9>/I2C Controller Read' */
    rxDataLoc = 15U;
    pinReadLoc = I2C_Controller_TransmitData_Polling
      (FC_Test_DW.obj_o.MW_I2C_HANDLE, 92, &rxDataLoc, 1U, true, true, 1U);
    if (pinReadLoc == 0U) {
      I2C_Controller_ReceiveData_Polling(FC_Test_DW.obj_o.MW_I2C_HANDLE, 92,
        &rxData, 1U, false, false, 1U);
    } else {
      rxData = 0U;
    }

    /* Switch: '<S9>/CheckWhoIs' incorporates:
     *  MATLABSystem: '<S9>/I2C Controller Read'
     * */
    if (rxData >= FC_Test_P.sensors.LPS25.reg.WHO_ID) {
      /* Switch: '<S9>/CheckWhoIs' incorporates:
       *  Constant: '<S9>/Constant'
       */
      FC_Test_B.WhoIsCheck = FC_Test_P.Constant_Value;
    } else {
      /* Switch: '<S9>/CheckWhoIs' incorporates:
       *  Constant: '<S9>/Constant1'
       */
      FC_Test_B.WhoIsCheck = FC_Test_P.Constant1_Value;
    }

    /* End of Switch: '<S9>/CheckWhoIs' */

    /* Outputs for Enabled SubSystem: '<S9>/ConfigureSensors' incorporates:
     *  EnablePort: '<S11>/Enable'
     */
    if (FC_Test_B.WhoIsCheck > 0.0) {
      /* MATLABSystem: '<S11>/I2C Controller Write' incorporates:
       *  Constant: '<S11>/Constant'
       */
      SwappedDataBytes[0] = 32U;
      SwappedDataBytes[1] = FC_Test_P.Constant_Value_c;
      I2C_Controller_TransmitData_Polling(FC_Test_DW.obj.MW_I2C_HANDLE, 92,
        &SwappedDataBytes[0], 2U, false, false, 1U);
      srUpdateBC(FC_Test_DW.ConfigureSensors_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S9>/ConfigureSensors' */
    srUpdateBC(FC_Test_DW.Configure_SubsysRanBC);
  }

  /* End of Step: '<S8>/Step' */
  /* End of Outputs for SubSystem: '<S8>/Configure' */

  /* Outputs for Enabled SubSystem: '<S8>/Read Pressure' incorporates:
   *  EnablePort: '<S10>/Enable'
   */
  if (FC_Test_B.WhoIsCheck > 0.0) {
    /* MATLABSystem: '<S10>/I2C Controller Read' */
    rxDataLoc = 42U;
    pinReadLoc = I2C_Controller_TransmitData_Polling
      (FC_Test_DW.obj_gm.MW_I2C_HANDLE, 92, &rxDataLoc, 1U, true, true, 1U);
    if (pinReadLoc == 0U) {
      I2C_Controller_ReceiveData_Polling(FC_Test_DW.obj_gm.MW_I2C_HANDLE, 92,
        &rxDataLoc, 1U, false, false, 1U);
    }

    /* End of MATLABSystem: '<S10>/I2C Controller Read' */

    /* MATLABSystem: '<S10>/I2C Controller Read1' */
    rxDataLoc = 41U;
    pinReadLoc = I2C_Controller_TransmitData_Polling
      (FC_Test_DW.obj_g.MW_I2C_HANDLE, 92, &rxDataLoc, 1U, true, true, 1U);
    if (pinReadLoc == 0U) {
      I2C_Controller_ReceiveData_Polling(FC_Test_DW.obj_g.MW_I2C_HANDLE, 92,
        &rxDataLoc, 1U, false, false, 1U);
    }

    /* End of MATLABSystem: '<S10>/I2C Controller Read1' */

    /* MATLABSystem: '<S10>/I2C Controller Read2' */
    rxDataLoc = 40U;
    pinReadLoc = I2C_Controller_TransmitData_Polling
      (FC_Test_DW.obj_b.MW_I2C_HANDLE, 92, &rxDataLoc, 1U, true, true, 1U);
    if (pinReadLoc == 0U) {
      I2C_Controller_ReceiveData_Polling(FC_Test_DW.obj_b.MW_I2C_HANDLE, 92,
        &rxData_0, 1U, false, false, 1U);
    } else {
      rxData_0 = 0U;
    }

    /* MATLAB Function: '<S10>/MATLAB Function' incorporates:
     *  MATLABSystem: '<S10>/I2C Controller Read2'
     * */
    FC_Test_B.pressure = (real_T)rxData_0 / 4096.0;
    srUpdateBC(FC_Test_DW.ReadPressure_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<S8>/Read Pressure' */
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
  FC_Test_M->Sizes.checksums[0] = (2447828914U);
  FC_Test_M->Sizes.checksums[1] = (2256555079U);
  FC_Test_M->Sizes.checksums[2] = (3695933245U);
  FC_Test_M->Sizes.checksums[3] = (3447860932U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[14];
    FC_Test_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC;
    systemRan[4] = (sysRanDType *)&FC_Test_DW.ConfigureSensors_SubsysRanBC;
    systemRan[5] = (sysRanDType *)&FC_Test_DW.Configure_SubsysRanBC;
    systemRan[6] = (sysRanDType *)&FC_Test_DW.Configure_SubsysRanBC;
    systemRan[7] = (sysRanDType *)&FC_Test_DW.Configure_SubsysRanBC;
    systemRan[8] = (sysRanDType *)&FC_Test_DW.Configure_SubsysRanBC;
    systemRan[9] = (sysRanDType *)&FC_Test_DW.ReadPressure_SubsysRanBC;
    systemRan[10] = (sysRanDType *)&FC_Test_DW.ReadPressure_SubsysRanBC;
    systemRan[11] = (sysRanDType *)&FC_Test_DW.ReadPressure_SubsysRanBC;
    systemRan[12] = (sysRanDType *)&FC_Test_DW.ReadPressure_SubsysRanBC;
    systemRan[13] = (sysRanDType *)&FC_Test_DW.ReadPressure_SubsysRanBC;
    rteiSetModelMappingInfoPtr(FC_Test_M->extModeInfo,
      &FC_Test_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(FC_Test_M->extModeInfo, FC_Test_M->Sizes.checksums);
    rteiSetTPtr(FC_Test_M->extModeInfo, rtmGetTPtr(FC_Test_M));
  }

  /* SystemInitialize for Enabled SubSystem: '<S8>/Configure' */
  /* SystemInitialize for Enabled SubSystem: '<S9>/ConfigureSensors' */
  /* Start for MATLABSystem: '<S11>/I2C Controller Write' */
  FC_Test_DW.obj.isInitialized = 0;
  FC_Test_DW.obj.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup(&FC_Test_DW.obj);

  /* End of SystemInitialize for SubSystem: '<S9>/ConfigureSensors' */

  /* Start for MATLABSystem: '<S9>/I2C Controller Read' */
  FC_Test_DW.obj_o.isInitialized = 0;
  FC_Test_DW.obj_o.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup_b(&FC_Test_DW.obj_o);

  /* SystemInitialize for Switch: '<S9>/CheckWhoIs' incorporates:
   *  Outport: '<S9>/Out1'
   */
  FC_Test_B.WhoIsCheck = FC_Test_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<S8>/Configure' */

  /* SystemInitialize for Enabled SubSystem: '<S8>/Read Pressure' */
  /* Start for MATLABSystem: '<S10>/I2C Controller Read' */
  FC_Test_DW.obj_gm.isInitialized = 0;
  FC_Test_DW.obj_gm.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup_b(&FC_Test_DW.obj_gm);

  /* Start for MATLABSystem: '<S10>/I2C Controller Read1' */
  FC_Test_DW.obj_g.isInitialized = 0;
  FC_Test_DW.obj_g.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup_b(&FC_Test_DW.obj_g);

  /* Start for MATLABSystem: '<S10>/I2C Controller Read2' */
  FC_Test_DW.obj_b.isInitialized = 0;
  FC_Test_DW.obj_b.matlabCodegenIsDeleted = false;
  FC_Test_SystemCore_setup_b(&FC_Test_DW.obj_b);

  /* SystemInitialize for Outport: '<S10>/Pressure' */
  FC_Test_B.pressure = FC_Test_P.Pressure_Y0;

  /* End of SystemInitialize for SubSystem: '<S8>/Read Pressure' */
}

/* Model terminate function */
void FC_Test_terminate(void)
{
  /* Terminate for Enabled SubSystem: '<S8>/Configure' */
  /* Terminate for MATLABSystem: '<S9>/I2C Controller Read' */
  if (!FC_Test_DW.obj_o.matlabCodegenIsDeleted) {
    FC_Test_DW.obj_o.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S9>/I2C Controller Read' */

  /* Terminate for Enabled SubSystem: '<S9>/ConfigureSensors' */
  /* Terminate for MATLABSystem: '<S11>/I2C Controller Write' */
  if (!FC_Test_DW.obj.matlabCodegenIsDeleted) {
    FC_Test_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S11>/I2C Controller Write' */
  /* End of Terminate for SubSystem: '<S9>/ConfigureSensors' */
  /* End of Terminate for SubSystem: '<S8>/Configure' */

  /* Terminate for Enabled SubSystem: '<S8>/Read Pressure' */
  /* Terminate for MATLABSystem: '<S10>/I2C Controller Read' */
  if (!FC_Test_DW.obj_gm.matlabCodegenIsDeleted) {
    FC_Test_DW.obj_gm.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S10>/I2C Controller Read' */

  /* Terminate for MATLABSystem: '<S10>/I2C Controller Read1' */
  if (!FC_Test_DW.obj_g.matlabCodegenIsDeleted) {
    FC_Test_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S10>/I2C Controller Read1' */

  /* Terminate for MATLABSystem: '<S10>/I2C Controller Read2' */
  if (!FC_Test_DW.obj_b.matlabCodegenIsDeleted) {
    FC_Test_DW.obj_b.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S10>/I2C Controller Read2' */
  /* End of Terminate for SubSystem: '<S8>/Read Pressure' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
