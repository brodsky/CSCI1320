% Code by Andrew Brodsky | SID: 107217786 | Lab 3
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

% This script serves as the master script for a program which converts
% 12-hour time into 24-hour time and vice versa. Calling this script will
% prompt the user for all necessary inputs, then pass those inputs to all
% of its child functions in order to output the converted time without any
% additional actions on the user's part.

clear
clc

% Ask user for a time input. Use int8 datatype (because a non-integer value
% for any of the variables wouldn't make sense in this context) and alert
% the user that any decimal values that they might enter will be rounded.
fprintf('Note: Entering a non-integer value into any of the three time inputs \nwill result in said value being rounded to the closest integer.\n\n');

hours=int8(input('Enter the hours of the time that you wish to convert: '));
minutes=int8(input('Enter the minutes of the time that you wish to convert: '));
seconds=int8(input('Enter the seconds of the time that you wish to convert: '));

% Ask user for the format of the time they have entered. If format is
% 12-hour, ask user to input AM or PM suffix; else, leave the suffix blank.
format=int8(input('\nWhat is the hour format of the time you have entered? (Enter 12 or 24): '));
if format==12
    suffix=input('Is the time you have entered in AM or PM? (Enter AM or PM): ','s');
else
    suffix=string();
end

% Pass all of the above inputs into getInputs for error checking. If no
% errors are found, then no changes need to be made to the inputs.

getInputs(hours,minutes,seconds,format,suffix);

% If no input errors are found by getInputs, then pass the hours, time
% format, and AMPM string to convertTime, which will convert the entered
% time from its native time format into the other time format.

[hours,format,suffix]=convertTime(hours,format,suffix);

% Finally, pass all the converted time values into displayTime, which will
% neatly output the converted time.

displayTime(hours,minutes,seconds,format,suffix);

