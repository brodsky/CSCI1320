% Ask how many students are in the class, then display it.

clear;
clc;

stu = input('How many students are in the class? ');

disp('Students in class:');
disp(stu);
% Note that the disp() function *cannot* format its outputs!

% You can read in a string with the input function!
feelings = input('How do you feel about this class? ', 's');
fprintf("We're sorry that you feel ""%s"" about CSCI 1320. \n \n", feelings);

% Use multiple escape characters, use multiple commas!

fprintf("Guess what? %.1f other students also feel ""%s"" about this class. \n", stu-1, feelings);

% Putting a decimal point and a number inside a %f escape character (e.g.
% %.2f) specifies the number of decimals you want to be displayed in the
% float. Putting a number in front of the decimal specifies the total width
% of the number (e.g. %5.2f).