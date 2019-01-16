% Code by Andrew Brodsky | SID: 107217786 | Lab 3
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

function [adjustedHours,adjustedFormat,timeSuffix] = convertTime(hours,format,suffix)
% This function converts 12-hour time into 24-hour time and vice versa,
% depending on the format of the input.

% If entered time was in 12-hour format, convert it to 24-hour format and
% return the relevant reformatted values:
if format==12
    if suffix=='PM'
        adjustedHours=hours+12;
    else
        adjustedHours=hours;
    end
    timeSuffix='hours';
    adjustedFormat=24;
end

% If entered time was in 24-hour format, convert it to 12-hour format and
% return the relevant reformatted values:
if format==24
    if hours>12
        adjustedHours=hours-12;
        timeSuffix='PM';
    else
        timeSuffix='AM';
        adjustedHours=hours;
    end
    adjustedFormat=12;
end

end