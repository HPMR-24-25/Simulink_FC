function consts = getLPS25Consts()

    %% Registers
    reg.ADDR = 0x5c;
    reg.WHOAMI = 0x0f;
    reg.WHO_ID = 0xBD;
    reg.CTRL1 = 0x20;
    reg.CTRL2 = 0x21;
    reg.CTRL3 = 0x22;
    reg.CTRL4 = 0x23;
    reg.PWRUP = 0x80;
    reg.ODR_1 = 0x01;
    reg.ODR_7 = 0x02;
    reg.ODR_12_5 = 0x03;
    reg.ODR_25 = 0x4;
    reg.STATUS_REG = 0x27;
    reg.TEMP_READY = 0x1;
    reg.PRESSURE_READY = 0x2;
    reg.PRESSURE_OUT_XL = 0x28;
    reg.PRESSURE_L_REG = 0x29;
    reg.PRESSURE_H_REG = 0x2A;
    reg.TEMP_L_REG = 0x2B;
    reg.TEMP_H_REG = 0x2C;

    consts.reg = reg;

    %% Configurations
    config.ODR.Hz25 = 0xC0;

    consts.config = config;

end