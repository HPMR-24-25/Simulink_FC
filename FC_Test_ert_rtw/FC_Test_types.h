/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: FC_Test_types.h
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

#ifndef DEFINED_TYPEDEF_FOR_struct_MnAFkuxEZ2lK2QZEny5MxG_
#define DEFINED_TYPEDEF_FOR_struct_MnAFkuxEZ2lK2QZEny5MxG_

typedef struct {
  uint8_T Hz25;
} struct_MnAFkuxEZ2lK2QZEny5MxG;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_SgQL6UbSHk5T0EOQclTrZH_
#define DEFINED_TYPEDEF_FOR_struct_SgQL6UbSHk5T0EOQclTrZH_

typedef struct {
  struct_MnAFkuxEZ2lK2QZEny5MxG ODR;
} struct_SgQL6UbSHk5T0EOQclTrZH;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_J7geYzRFz9Y17paId3MuGD_
#define DEFINED_TYPEDEF_FOR_struct_J7geYzRFz9Y17paId3MuGD_

typedef struct {
  struct_3gyfWdrENrc9nXy0LPK4BC reg;
  struct_SgQL6UbSHk5T0EOQclTrZH config;
} struct_J7geYzRFz9Y17paId3MuGD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_clApx4MfFdsu8b1LIN4yjD_
#define DEFINED_TYPEDEF_FOR_struct_clApx4MfFdsu8b1LIN4yjD_

typedef struct {
  uint8_T DEVICE_CONFIG;
  uint8_T DRIVE_CONFIG;
  uint8_T INT_CONFIG;
  uint8_T FIFO_CONFIG;
  uint8_T TEMP_DATA1;
  uint8_T TEMP_DATA0;
  uint8_T ACCEL_DATA_X1;
  uint8_T ACCEL_DATA_X0;
  uint8_T ACCEL_DATA_Y1;
  uint8_T ACCEL_DATA_Y0;
  uint8_T ACCEL_DATA_Z1;
  uint8_T ACCEL_DATA_Z0;
  uint8_T GYRO_DATA_X1;
  uint8_T GYRO_DATA_X0;
  uint8_T GYRO_DATA_Y1;
  uint8_T GYRO_DATA_Y0;
  uint8_T GYRO_DATA_Z1;
  uint8_T GYRO_DATA_Z0;
  uint8_T TMST_FSYNCH;
  uint8_T TMST_FSYNCL;
  uint8_T INT_STATUS;
  uint8_T FIFO_COUNTH;
  uint8_T FIFO_COUNTL;
  uint8_T FIFO_DATA;
  uint8_T APEX_DATA0;
  uint8_T APEX_DATA1;
  uint8_T APEX_DATA2;
  uint8_T APEX_DATA3;
  uint8_T APEX_DATA4;
  uint8_T APEX_DATA5;
  uint8_T INT_STATUS2;
  uint8_T INT_STATUS3;
  uint8_T SIGNAL_PATH_RESET;
  uint8_T INTF_CONFIG0;
  uint8_T INTF_CONFIG1;
  uint8_T PWR_MGMT0;
  uint8_T GYRO_CONFIG0;
  uint8_T ACCEL_CONFIG0;
  uint8_T GYRO_CONFIG1;
  uint8_T GYRO_ACCEL_CONFIG0;
  uint8_T ACCEL_CONFIG1;
  uint8_T TMST_CONFIG;
  uint8_T APEX_CONFIG0;
  uint8_T SMD_CONFIG;
  uint8_T FIFO_CONFIG1;
  uint8_T FIFO_CONFIG2;
  uint8_T FIFO_CONFIG3;
  uint8_T FSYNC_CONFIG;
  uint8_T INT_CONFIG0;
  uint8_T INT_CONFIG1;
  uint8_T INT_SOURCE0;
  uint8_T INT_SOURCE1;
  uint8_T INT_SOURCE3;
  uint8_T INT_SOURCE4;
  uint8_T FIFO_LOST_PKT0;
  uint8_T FIFO_LOST_PKT1;
  uint8_T SELF_TEST_CONFIG;
  uint8_T WHO_AM_I;
} struct_clApx4MfFdsu8b1LIN4yjD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_QjHRXu218iTBAl7YeGl1UG_
#define DEFINED_TYPEDEF_FOR_struct_QjHRXu218iTBAl7YeGl1UG_

typedef struct {
  uint8_T SENSOR_CONFIG0;
  uint8_T GYRO_CONFIG_STATIC2;
  uint8_T GYRO_CONFIG_STATIC3;
  uint8_T GYRO_CONFIG_STATIC4;
  uint8_T GYRO_CONFIG_STATIC5;
  uint8_T GYRO_CONFIG_STATIC6;
  uint8_T GYRO_CONFIG_STATIC7;
  uint8_T GYRO_CONFIG_STATIC8;
  uint8_T GYRO_CONFIG_STATIC9;
  uint8_T GYRO_CONFIG_STATIC10;
  uint8_T XG_ST_DATA;
  uint8_T YG_ST_DATA;
  uint8_T ZG_ST_DATA;
  uint8_T TMSTVAL0;
  uint8_T TMSTVAL1;
  uint8_T TMSTVAL2;
  uint8_T INTF_CONFIG4;
  uint8_T INTF_CONFIG5;
  uint8_T INTF_CONFIG6;
} struct_QjHRXu218iTBAl7YeGl1UG;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_GjPQa1dLGSeuPpK7PcCpGH_
#define DEFINED_TYPEDEF_FOR_struct_GjPQa1dLGSeuPpK7PcCpGH_

typedef struct {
  uint8_T ACCEL_CONFIG_STATIC2;
  uint8_T ACCEL_CONFIG_STATIC3;
  uint8_T ACCEL_CONFIG_STATIC4;
  uint8_T XA_ST_DATA;
  uint8_T YA_ST_DATA;
  uint8_T ZA_ST_DATA;
} struct_GjPQa1dLGSeuPpK7PcCpGH;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_1Vybem3AhLaR7BPbsnQUH_
#define DEFINED_TYPEDEF_FOR_struct_1Vybem3AhLaR7BPbsnQUH_

typedef struct {
  uint8_T APEX_CONFIG1;
  uint8_T APEX_CONFIG2;
  uint8_T APEX_CONFIG3;
  uint8_T APEX_CONFIG4;
  uint8_T APEX_CONFIG5;
  uint8_T APEX_CONFIG6;
  uint8_T APEX_CONFIG7;
  uint8_T APEX_CONFIG8;
  uint8_T APEX_CONFIG9;
  uint8_T APEX_CONFIG10;
  uint8_T APEX_CONFIG11;
  uint8_T APEX_CONFIG12;
  uint8_T APEX_CONFIG13;
} struct_1Vybem3AhLaR7BPbsnQUH;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_kEQnXOta8nanbmzXPJjY9D_
#define DEFINED_TYPEDEF_FOR_struct_kEQnXOta8nanbmzXPJjY9D_

typedef struct {
  uint8_T REG_BANK_SEL;
  uint8_T ADDR;
  struct_clApx4MfFdsu8b1LIN4yjD BANK0;
  struct_QjHRXu218iTBAl7YeGl1UG BANK1;
  struct_GjPQa1dLGSeuPpK7PcCpGH BANK2;
  struct_1Vybem3AhLaR7BPbsnQUH BANK4;
} struct_kEQnXOta8nanbmzXPJjY9D;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_IyNDJ51doc9bFDl8Fy6vWF_
#define DEFINED_TYPEDEF_FOR_struct_IyNDJ51doc9bFDl8Fy6vWF_

typedef struct {
  uint8_T kHz_2;
} struct_IyNDJ51doc9bFDl8Fy6vWF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_F6ifLqEryZukkGd5xUx8sD_
#define DEFINED_TYPEDEF_FOR_struct_F6ifLqEryZukkGd5xUx8sD_

typedef struct {
  uint8_T g16;
} struct_F6ifLqEryZukkGd5xUx8sD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_RqCDT7rsMsUurKtDxmcohB_
#define DEFINED_TYPEDEF_FOR_struct_RqCDT7rsMsUurKtDxmcohB_

typedef struct {
  real_T DELT;
  real_T DELT_SQR;
  real_T BITSHIFT;
} struct_RqCDT7rsMsUurKtDxmcohB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_1SpBDgcJwjnmZn6GXisonD_
#define DEFINED_TYPEDEF_FOR_struct_1SpBDgcJwjnmZn6GXisonD_

typedef struct {
  struct_IyNDJ51doc9bFDl8Fy6vWF ODR;
  struct_F6ifLqEryZukkGd5xUx8sD SCALE;
  struct_RqCDT7rsMsUurKtDxmcohB AAF;
  uint8_T ENABLE;
} struct_1SpBDgcJwjnmZn6GXisonD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_PM5maQDwjMqukiBhLxJrvE_
#define DEFINED_TYPEDEF_FOR_struct_PM5maQDwjMqukiBhLxJrvE_

typedef struct {
  uint8_T dps2000;
} struct_PM5maQDwjMqukiBhLxJrvE;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_SvOH6b9TBDxsAM6L9n6vHB_
#define DEFINED_TYPEDEF_FOR_struct_SvOH6b9TBDxsAM6L9n6vHB_

typedef struct {
  struct_RqCDT7rsMsUurKtDxmcohB AAF;
  struct_IyNDJ51doc9bFDl8Fy6vWF ODR;
  struct_PM5maQDwjMqukiBhLxJrvE SCALE;
  uint8_T ENABLE;
} struct_SvOH6b9TBDxsAM6L9n6vHB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_Bs1cPoPtAbtJK6G6E9a7qH_
#define DEFINED_TYPEDEF_FOR_struct_Bs1cPoPtAbtJK6G6E9a7qH_

typedef struct {
  uint8_T SENSOR_ENABLE;
  struct_1SpBDgcJwjnmZn6GXisonD accel;
  struct_SvOH6b9TBDxsAM6L9n6vHB gyro;
} struct_Bs1cPoPtAbtJK6G6E9a7qH;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_6Lzf7raDpptrhyp08vtT8_
#define DEFINED_TYPEDEF_FOR_struct_6Lzf7raDpptrhyp08vtT8_

typedef struct {
  struct_kEQnXOta8nanbmzXPJjY9D reg;
  uint8_T WHO_ID;
  struct_Bs1cPoPtAbtJK6G6E9a7qH config;
} struct_6Lzf7raDpptrhyp08vtT8;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_tdaakOg46zxGeR6JjUMlQG_
#define DEFINED_TYPEDEF_FOR_struct_tdaakOg46zxGeR6JjUMlQG_

typedef struct {
  struct_J7geYzRFz9Y17paId3MuGD LPS25;
  struct_6Lzf7raDpptrhyp08vtT8 ICM42688;
} struct_tdaakOg46zxGeR6JjUMlQG;

#endif

/* Custom Type definition for MATLABSystem: '<S19>/I2C Controller Read' */
#include "mw_stm32_i2c_ll.h"
#include "mw_stm32_i2c_ll.h"
#include "mw_stm32_i2c_ll.h"
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

#ifndef typedef_stm32cube_blocks_I2CControlle_T
#define typedef_stm32cube_blocks_I2CControlle_T

typedef struct tag_8PBRBp08FXETmEPkiExF6E stm32cube_blocks_I2CControlle_T;

#endif                             /* typedef_stm32cube_blocks_I2CControlle_T */

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

#ifndef typedef_stm32cube_blocks_I2CControl_l_T
#define typedef_stm32cube_blocks_I2CControl_l_T

typedef struct tag_Izy3MhkAN4z9ABEWyrEXwC stm32cube_blocks_I2CControl_l_T;

#endif                             /* typedef_stm32cube_blocks_I2CControl_l_T */

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
