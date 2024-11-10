function pressure = LPS25_convertPressure(PRESSURE_H, PRESSURE_L, PRESSURE_XL)

    pData = bitshift(PRESSURE_H, 16);
    pData = bitor(pData, bitshift(PRESSURE_L, 8));
    pData = bitor(pData, PRESSURE_XL);

    pressure = double(pData) / 4096.0;

end