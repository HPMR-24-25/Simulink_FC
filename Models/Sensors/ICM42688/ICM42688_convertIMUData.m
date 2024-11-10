function [accelX, accelY, accelZ, gyroX, gyroY, gyroZ] = ICM42688_convertIMUData(dataRead, accelRes, gyroRes)

    % % Combine bytes to get signed 16-bit values for accelerometer
    % accelX = double(typecast(int16(bitshift(uint16(dataRead(1)), 8) | uint16(dataRead(2))), 'int16')) / accelRes;
    % accelY = double(typecast(int16(bitshift(uint16(dataRead(3)), 8) | uint16(dataRead(4))), 'int16')) / accelRes;
    % accelZ = double(typecast(int16(bitshift(uint16(dataRead(5)), 8) | uint16(dataRead(6))), 'int16')) / accelRes;
    % 
    % % Combine bytes to get signed 16-bit values for gyroscope
    % gyroX = double(typecast(int16(bitshift(uint16(dataRead(7)), 8) | uint16(dataRead(8))), 'int16')) / gyroRes;
    % gyroY = double(typecast(int16(bitshift(uint16(dataRead(9)), 8) | uint16(dataRead(10))), 'int16')) / gyroRes;
    % gyroZ = double(typecast(int16(bitshift(uint16(dataRead(11)), 8) | uint16(dataRead(12))), 'int16')) / gyroRes;

end
