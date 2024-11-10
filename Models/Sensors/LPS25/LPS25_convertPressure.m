function pressure = LPS25_convertPressure(PRESSURE_H, PRESSURE_L, PRESSURE_XL)
    % Convert the three bytes into a single 24-bit signed integer
    pData = bitshift(uint32(PRESSURE_H), 16);  % MSB shifted by 16 bits
    pData = bitor(pData, bitshift(uint32(PRESSURE_L), 8));  % LSB shifted by 8 bits
    pData = bitor(pData, uint32(PRESSURE_XL));  % Add the extra-low byte

    % Convert to pressure in hPa
    pressure = double(pData) / 4096.0;
end
