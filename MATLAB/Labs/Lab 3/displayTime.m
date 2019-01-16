% Code by Andrew Brodsky | SID: 107217786 | Lab 3
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

function displayTime(hours,minutes,seconds,format,suffix)
% This function neatly prints the converted time to the command window.

fprintf('\nThe time in %2.f-hour format is %02.f:%02.f:%02.f %s.\n\n',format,hours,minutes,seconds,suffix);

end