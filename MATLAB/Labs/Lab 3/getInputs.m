% Code by Andrew Brodsky | SID: 107217786 | Lab 3
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

function getInputs(hours,minutes,seconds,format,suffix)
% This function checks for erroneous user inputs. If none are found, the
% function passes control back to the master script and returns nothing.

% Check for input errors:
if minutes<0 || minutes>59
    error('Input of minutes should be between 0 and 59.');
end

if seconds<0 || seconds>59
    error('Input of seconds should be between 0 and 59.');
end

if format==12 && (hours<1 || hours>12)
    error('Since time format is 12-hour, input of hours should be between 1 and 12.');
end

if format==24 && (hours<0 || hours>23)
    error('Since time format is 24-hour, input of hours should be between 0 and 23.');
end

if format~=12 && format ~=24
    error('Invalid entry for time format. Enter either 12 or 24.');
end

if format==12 & suffix~='AM' & suffix~='PM'
     error('Invalid entry for AM/PM. Enter either AM or PM. (Did you capitalize?)');
end

% If no errors occur, then return nothing.
end