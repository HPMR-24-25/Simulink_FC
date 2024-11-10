function setupEnv()
%% setupEnv - Configures simulation environment vars

simPaths = {

    %% Models
    'Models'
    
    % Sensors
    fullfile('Models', 'Sensors', 'LPS25')
    fullfile('Models', 'Sensors', 'ICM42688')
    
};

simPaths = strjoin(simPaths, ';');
addpath(simPaths);

% lpsConsts = getLP25Consts();

sensors.LPS25 = getLP25Consts();
sensors.ICM42688 = getICM42688Consts();

assignin('base', 'sensors', sensors);

disp('[Setup] Configured Environment!');

end