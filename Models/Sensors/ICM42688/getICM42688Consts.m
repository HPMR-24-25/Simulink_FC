function consts = getICM42688Consts()
    % Register Bank Selection
    reg.REG_BANK_SEL  = 0x76;
    reg.ADDR          = 0x68;

    % ------------------ Bank 0 ------------------
    reg.BANK0.DEVICE_CONFIG = 0x11; % R/W
    reg.BANK0.DRIVE_CONFIG = 0x13; % R/W
    reg.BANK0.INT_CONFIG = 0x14; 
    reg.BANK0.FIFO_CONFIG = 0x16; % R/W
    reg.BANK0.TEMP_DATA1 = 0x1D; % SYNCR
    reg.BANK0.TEMP_DATA0 = 0x1E; % SYNCR
    reg.BANK0.ACCEL_DATA_X1 = 0x1F; 
    reg.BANK0.ACCEL_DATA_X0 = 0x20; 
    reg.BANK0.ACCEL_DATA_Y1 = 0x21; 
    reg.BANK0.ACCEL_DATA_Y0 = 0x22; 
    reg.BANK0.ACCEL_DATA_Z1 = 0x23; 
    reg.BANK0.ACCEL_DATA_Z0 = 0x24; 
    reg.BANK0.GYRO_DATA_X1 = 0x25;
    reg.BANK0.GYRO_DATA_X0 = 0x26;
    reg.BANK0.GYRO_DATA_Y1 = 0x27;
    reg.BANK0.GYRO_DATA_Y0 = 0x28;
    reg.BANK0.GYRO_DATA_Z1 = 0x29;
    reg.BANK0.GYRO_DATA_Z0 = 0x2A;
    reg.BANK0.TMST_FSYNCH = 0x2B;
    reg.BANK0.TMST_FSYNCL = 0x2C; % SYNCR
    reg.BANK0.INT_STATUS = 0x2D; % R/C
    reg.BANK0.FIFO_COUNTH = 0x2E; % R
    reg.BANK0.FIFO_COUNTL = 0x2F; % R
    reg.BANK0.FIFO_DATA = 0x30; % R
    reg.BANK0.APEX_DATA0 = 0x31; % SYNCR
    reg.BANK0.APEX_DATA1 = 0x32; % SYNCR
    reg.BANK0.APEX_DATA2 = 0x33; % R
    reg.BANK0.APEX_DATA3 = 0x34; % R
    reg.BANK0.APEX_DATA4 = 0x35; % R
    reg.BANK0.APEX_DATA5 = 0x36; % R
    reg.BANK0.INT_STATUS2 = 0x37; % R/C
    reg.BANK0.INT_STATUS3 = 0x38; % R/C
    reg.BANK0.SIGNAL_PATH_RESET = 0x4B; % W/C
    reg.BANK0.INTF_CONFIG0 = 0x4C; % R/W
    reg.BANK0.INTF_CONFIG1 = 0x4D; % R/W
    reg.BANK0.PWR_MGMT0 = 0x4E; % R/W
    reg.BANK0.GYRO_CONFIG0 = 0x4F; % R/W
    reg.BANK0.ACCEL_CONFIG0 = 0x50; % R/W
    reg.BANK0.GYRO_CONFIG1 = 0x51; % R/W
    reg.BANK0.GYRO_ACCEL_CONFIG0 = 0x52; % R/W
    reg.BANK0.ACCEL_CONFIG1 = 0x53; % R/W
    reg.BANK0.TMST_CONFIG = 0x54; % R/W
    reg.BANK0.APEX_CONFIG0 = 0x56; % R/W
    reg.BANK0.SMD_CONFIG = 0x57; % R/W
    reg.BANK0.FIFO_CONFIG1 = 0x5F; % R/W
    reg.BANK0.FIFO_CONFIG2 = 0x60; % R/W
    reg.BANK0.FIFO_CONFIG3 = 0x61; % R/W
    reg.BANK0.FSYNC_CONFIG = 0x62; % R/W
    reg.BANK0.INT_CONFIG0 = 0x63; % R/W
    reg.BANK0.INT_CONFIG1 = 0x64; % R/W
    reg.BANK0.INT_SOURCE0 = 0x65; % R/W
    reg.BANK0.INT_SOURCE1 = 0x66; % R/W
    reg.BANK0.INT_SOURCE3 = 0x68; % R/W
    reg.BANK0.INT_SOURCE4 = 0x69; % R/W
    reg.BANK0.FIFO_LOST_PKT0 = 0x6C; % R
    reg.BANK0.FIFO_LOST_PKT1 = 0x6D; % R
    reg.BANK0.SELF_TEST_CONFIG = 0x70; % R/W
    reg.BANK0.WHO_AM_I = 0x75; % R

    % ------------------ Bank 1 ------------------
    reg.BANK1.SENSOR_CONFIG0 = 0x03; % R/W
    reg.BANK1.GYRO_CONFIG_STATIC2 = 0x0B; % R/W
    reg.BANK1.GYRO_CONFIG_STATIC3 = 0x0C; % R/W
    reg.BANK1.GYRO_CONFIG_STATIC4 = 0x0D; % R/W
    reg.BANK1.GYRO_CONFIG_STATIC5 = 0x0E; % R/W
    reg.BANK1.GYRO_CONFIG_STATIC6 = 0x0F; % R/W
    reg.BANK1.GYRO_CONFIG_STATIC7 = 0x10; % R/W
    reg.BANK1.GYRO_CONFIG_STATIC8 = 0x11; % R/W
    reg.BANK1.GYRO_CONFIG_STATIC9 = 0x12; % R/W
    reg.BANK1.GYRO_CONFIG_STATIC10 = 0x13; % R/W
    reg.BANK1.XG_ST_DATA = 0x5F; % R/W
    reg.BANK1.YG_ST_DATA = 0x60; % R/W
    reg.BANK1.ZG_ST_DATA = 0x61; % R/W
    reg.BANK1.TMSTVAL0 = 0x62; % R
    reg.BANK1.TMSTVAL1 = 0x63; % R
    reg.BANK1.TMSTVAL2 = 0x64; % R
    reg.BANK1.INTF_CONFIG4 = 0x7A; % R/W
    reg.BANK1.INTF_CONFIG5 = 0x7B; % R/W
    reg.BANK1.INTF_CONFIG6 = 0x7C; % R/W

    % ------------------ Bank 2 ------------------
    reg.BANK2.ACCEL_CONFIG_STATIC2 = 0x03; % R/W
    reg.BANK2.ACCEL_CONFIG_STATIC3 = 0x04; % R/W
    reg.BANK2.ACCEL_CONFIG_STATIC4 = 0x05; % R/W
    reg.BANK2.XA_ST_DATA = 0x3B; % R/W
    reg.BANK2.YA_ST_DATA = 0x3C; % R/W
    reg.BANK2.ZA_ST_DATA = 0x3D; % R/W

    % ------------------ Bank 4 ------------------
    reg.BANK4.APEX_CONFIG1 = 0x40; % R/W
    reg.BANK4.APEX_CONFIG2 = 0x41; % R/W
    reg.BANK4.APEX_CONFIG3 = 0x42; % R/W
    reg.BANK4.APEX_CONFIG4 = 0x43; % R/W
    reg.BANK4.APEX_CONFIG5 = 0x44; % R/W
    reg.BANK4.APEX_CONFIG6 = 0x45; % R/W
    reg.BANK4.APEX_CONFIG7 = 0x46; % R/W
    reg.BANK4.APEX_CONFIG8 = 0x47; % R/W
    reg.BANK4.APEX_CONFIG9 = 0x48; % R/W
    reg.BANK4.APEX_CONFIG10 = 0x49; % R/W
    reg.BANK4.APEX_CONFIG11 = 0x4A; % R/W
    reg.BANK4.APEX_CONFIG12 = 0x4B; % R/W
    reg.BANK4.APEX_CONFIG13 = 0x4C; % R/W

    consts.reg = reg;

    consts.WHO_ID = 0x47;

    config.SENSOR_ENABLE   = 0x0F;
    config.accel.ODR.kHz_2 = 0x05;
    config.accel.SCALE.g16 = 0x00;

    config.accel.AAF.DELT     = 3;
    config.accel.AAF.DELT_SQR = 9;
    config.accel.AAF.BITSHIFT = 12;

    config.gyro.AAF.DELT     = 3;
    config.gyro.AAF.DELT_SQR = 9;
    config.gyro.AAF.BITSHIFT = 12;

    config.gyro.ODR.kHz_2     = 0x05;
    config.gyro.SCALE.dps2000 = 0x00;

    config.accel.ENABLE = 0x02;
    config.gyro.ENABLE  = 0x00;

    consts.config = config;
end
