% Example of switch statement
%
% Note that *specific* conditions of y must be used for the 'case'
% expressions. Relational operators CANNOT be used in 'case' statements.

clear
clc

y=input('Enter a number: ');

switch y
    case 1
        disp('One!');
    case 2
        disp('Two!');
    otherwise
        disp('Not a cool number.');    
end