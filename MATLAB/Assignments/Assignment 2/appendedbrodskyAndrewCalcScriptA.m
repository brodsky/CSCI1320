% Code by Andrew Brodsky | SID: 107217786 | Assignment 2
% Prof: Maciej Zagrodzki | Section 110 | anbr6390@colorado.edu
%
% This script takes two floating-point numbers and then outputs
% the following calculations:
%
% 1. First number + second number
% 2. First number - second number
% 3. First number * second number
% 4. First number / second number
% 5. First number^(second number)
%
% 6. Logical comparison of the result of calculation 4 to the 
% two original numbers. If first number<result of calculation 
% 4<second number, then result is TRUE; else, result is FALSE.

%------------------------------

% Clear the command window and any variables in the workspace.
clc;
clear;

% Read in two floating point inputs. Default data type of double will be
% adequate for this purpose.
numberOne = 5;
numberTwo = 5;

% Perform and output calculations. Escape character of %g is used so that
% numbers smaller than 10^-6 appear in exponential form and not as 
% 0.000000.

fprintf('When the first number is %g and the second number is %g: \n\n', numberOne, numberTwo);

fprintf('The first number plus the second number is %g. \n', (numberOne+numberTwo));
fprintf('The first number minus the second number is %g. \n', (numberOne-numberTwo));
fprintf('The first number times the second number is %g. \n', (numberOne*numberTwo));
fprintf('The first number divided by the second number is %g. \n', (numberOne/numberTwo));
fprintf('The first number to the power of the second number is %g. \n\n', (numberOne^numberTwo));

fprintf('Is %g<%g<%g? Answer (logical): %d. \n', numberOne, numberOne/numberTwo, numberTwo, (numberOne<(numberOne/numberTwo) && (numberOne/numberTwo)<numberTwo));
