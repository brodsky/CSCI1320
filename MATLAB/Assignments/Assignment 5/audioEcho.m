% Code by Andrew Brodsky | SID: 107217786 | Assignment 5
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

function output =  audioEcho(audioVec,sampleRate,echoDelay,echoGain)

% Ensure that all the input variables are in an appropriate domain.
if ~isempty(audioVec) && sampleRate > 0 && echoDelay >= 0 && echoGain >=0 && echoGain <= 1
    
    % Determine the number of samples by which audioVec needs to be shifted
    % forward and added to its original to create the desired echo.
    sampleAdvance=sampleRate*echoDelay;
    
    % Create an output vector equal to audioVec plus a padding of zeroes at
    % the end specified by the desired offset.
    output=(1:length(audioVec)+sampleAdvance)';
    output(1:end-sampleAdvance)=audioVec;
    
    % Add audioVec (multiplied by echoGain) at an offset to the output
    % vector and output it.
    output(sampleAdvance+1:end)=output(sampleAdvance+1:end)+audioVec.*echoGain;
    
else
    
    % Otherwise, output an empty vector.
    output=[];
end

end