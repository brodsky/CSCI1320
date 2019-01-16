% Example of menu() with switch statement

clear;
clc;

angle = input('Enter an angle in radians: ');

switch menu('Choose a trig function to calculate:','Sine','Cosine','Tangent')
    case 0
        disp('Ok, no calculations were performed.');
    case 1
        fprintf('Answer: %g\n',sin(angle));
    case 2
        fprintf('Answer: %g\n',cos(angle));
    case 3
        fprintf('Answer: %g\n',tan(angle));    
end