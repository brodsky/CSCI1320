 % Compare the current temperature to check if it is equal to target
% temperature AND that it is less than the max temp

% side note - you can create bold headers with double percentage signs!

% other side note: script names must start with a letter, include only
% letters, numbers, and underscores, and be <= 64 characters

clear % clear the workspace
clc % clear the command window
close all % close all windows

currentTemp = input('Input the current temperature: ');
targetTemp = 151; 
maxTemp = 160;

result = currentTemp==targetTemp;
disp('Target temperature status:');
disp(result);

% See 13 September for a better way to read in text.
feelings = inputdlg('How do you feel about this class?');
formattedFeelings = string(feelings);
fprintf("We're sorry that you feel ""%s"" about CSCI 1320. \n", formattedFeelings);

