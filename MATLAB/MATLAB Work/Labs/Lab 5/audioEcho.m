% Code by Andrew Brodsky | SID: 107217786 | Lab 5
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

function output =  audioEcho(audioVec,sampleRate,echoDelay,echoGain)

%% THIS FUNCTION RETURNS A DUMMY VARIABLE

% 1. Ensure that all the input variables are numbers in the appropriate
% domain.
% 2. Determine the number of samples by which audioVec needs to be shifted
% forward and added to its original to create the desired echo.
% 3. Create a vector equal to audioVec plus a padding of zeroes at the
% front specified by the desired offset. Multiply it by the desired
% echoGain.
% 4. Add the offset audioVec to the original audioVec and output it.

output = zeros(1,length(audioVec)+echoDelay*sampleRate); % DUMMY VARIABLE

end