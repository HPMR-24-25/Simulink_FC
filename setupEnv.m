function setupEnv()
%% setupEnv - Configures simulation environment vars

simPaths = {

    %% Models
    'Models'
    
    % Sensors
    fullfile('Models', 'Sensors', 'LPS25')
    
};

simPaths = strjoin(simPaths, ';');
addpath(simPaths);

% lpsConsts = getLP25Consts();

sensors.LPS25 = getLP25Consts();

assignin('base', 'sensors', sensors);

disp('[Setup] Configured Environment!');

end