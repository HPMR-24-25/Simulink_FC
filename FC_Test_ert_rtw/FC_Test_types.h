/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: FC_Test_types.h
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

#ifndef RTW_HEADER_FC_Test_types_h_
#define RTW_HEADER_FC_Test_types_h_
#include "rtwtypes.h"
#include "mw_stm32_i2c_ll.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_3gyfWdrENrc9nXy0LPK4BC_
#define DEFINED_TYPEDEF_FOR_struct_3gyfWdrENrc9nXy0LPK4BC_

typedef struct {
  uint8_T ADDR;
  uint8_T WHOAMI;
  uint8_T WHO_ID;
  uint8_T CTRL1;
  uint8_T CTRL2;
  uint8_T CTRL3;
  uint8_T CTRL4;
  uint8_T PWRUP;
  uint8_T ODR_1;
  uint8_T ODR_7;
  uint8_T ODR_12_5;
  uint8_T ODR_25;
  uint8_T STATUS_REG;
  uint8_T TEMP_READY;
  uint8_T PRESSURE_READY;
  uint8_T PRESSURE_OUT_XL;
  uint8_T PRESSURE_L_REG;
  uint8_T PRESSURE_H_REG;
  uint8_T TEMP_L_REG;
  uint8_T TEMP_H_REG;
} struct_3gyfWdrENrc9nXy0LPK4BC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_Evq4uzXjdc2WA3nBtoVnYF_
#define DEFINED_TYPEDEF_FOR_struct_Evq4uzXjdc2WA3nBtoVnYF_

typedef struct {
  struct_3gyfWdrENrc9nXy0LPK4BC reg;
} struct_Evq4uzXjdc2WA3nBtoVnYF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_2TKg85Vf5gzpYHzRAioonF_
#define DEFINED_TYPEDEF_FOR_struct_2TKg85Vf5gzpYHzRAioonF_

typedef struct {
  struct_Evq4uzXjdc2WA3nBtoVnYF LPS25;
} struct_2TKg85Vf5gzpYHzRAioonF;

#endif

#ifndef struct_tag_wiywjhRn0JhvylthmapQgB
#define struct_tag_wiywjhRn0JhvylthmapQgB

struct tag_wiywjhRn0JhvylthmapQgB
{
  int32_T isInitialized;
};

#endif                                 /* struct_tag_wiywjhRn0JhvylthmapQgB */

#ifndef typedef_stm32cube_blocks_DigitalPortR_T
#define typedef_stm32cube_blocks_DigitalPortR_T

typedef struct tag_wiywjhRn0JhvylthmapQgB stm32cube_blocks_DigitalPortR_T;

#endif                             /* typedef_stm32cube_blocks_DigitalPortR_T */

#ifndef struct_tag_S5MMpcz8vT0FlmhmEl4q5C
#define struct_tag_S5MMpcz8vT0FlmhmEl4q5C

struct tag_S5MMpcz8vT0FlmhmEl4q5C
{
  int32_T isInitialized;
};

#endif                                 /* struct_tag_S5MMpcz8vT0FlmhmEl4q5C */

#ifndef typedef_stm32cube_blocks_DigitalPortW_T
#define typedef_stm32cube_blocks_DigitalPortW_T

typedef struct tag_S5MMpcz8vT0FlmhmEl4q5C stm32cube_blocks_DigitalPortW_T;

#endif                             /* typedef_stm32cube_blocks_DigitalPortW_T */

/* Custom Type definition for MATLABSystem: '<S10>/I2C Controller Read2' */
#include "mw_stm32_i2c_ll.h"
#include "mw_stm32_i2c_ll.h"
#include "mw_stm32_i2c_ll.h"
#ifndef struct_tag_Izy3MhkAN4z9ABEWyrEXwC
#define struct_tag_Izy3MhkAN4z9ABEWyrEXwC

struct tag_Izy3MhkAN4z9ABEWyrEXwC
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  STM32_I2C_Struct_T * MW_I2C_HANDLE;
  STM32_I2C_Struct_T MW_I2C_BlockStruct;
};

#endif                                 /* struct_tag_Izy3MhkAN4z9ABEWyrEXwC */

#ifndef typedef_stm32cube_blocks_I2CControlle_T
#define typedef_stm32cube_blocks_I2CControlle_T

typedef struct tag_Izy3MhkAN4z9ABEWyrEXwC stm32cube_blocks_I2CControlle_T;

#endif                             /* typedef_stm32cube_blocks_I2CControlle_T */

#ifndef struct_tag_8PBRBp08FXETmEPkiExF6E
#define struct_tag_8PBRBp08FXETmEPkiExF6E

struct tag_8PBRBp08FXETmEPkiExF6E
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  STM32_I2C_Struct_T * MW_I2C_HANDLE;
  STM32_I2C_Struct_T MW_I2C_BlockStruct;
};

#endif                                 /* struct_tag_8PBRBp08FXETmEPkiExF6E */

#ifndef typedef_stm32cube_blocks_I2CControl_b_T
#define typedef_stm32cube_blocks_I2CControl_b_T

typedef struct tag_8PBRBp08FXETmEPkiExF6E stm32cube_blocks_I2CControl_b_T;

#endif                             /* typedef_stm32cube_blocks_I2CControl_b_T */

/* Parameters (default storage) */
typedef struct P_FC_Test_T_ P_FC_Test_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_FC_Test_T RT_MODEL_FC_Test_T;

#endif                                 /* RTW_HEADER_FC_Test_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
