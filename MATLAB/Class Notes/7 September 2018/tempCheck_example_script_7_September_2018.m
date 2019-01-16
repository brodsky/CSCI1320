% Compare the current temperature to check if it is equal to target
% temperature AND that it is less than the max temp

% side note - you can create bold headers with double percentage signs!

% other side note: script names must start with a letter, include only
% letters, numbers, and underscores, and be <= 64 characters

clear % clear the workspace
clc % clear the command window
close all % close all windows

currentTemp = input('Input the current temperature.'); %#ok<NASGU> <- this suppresses a compiler warning for an unnecessary line 
targetTemp = 151; 
maxTemp = 160;

% -------- side note for homework
currentTemp = rand; % creates random # between 0 and 1
randi([0,150]) % creates random # between 0 and 150