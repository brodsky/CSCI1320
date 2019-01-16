function output = transposeMat(inputMatrix)
%
% Code by Andrew Brodsky | SID: 107217786 | Assignment 3
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu
%
% This function takes a 3x3 matrix and then returns its transpose.

% Allocate a 3x3 ouput matrix.
outputMatrix=[1:3;1:3;1:3];

% Set the first row of the output matrix to the first column of the input
% matrix.
outputMatrix(1,:)=inputMatrix(:,1);

% Set the second row of the output matrix to the second column of the input
% matrix.
outputMatrix(2,:)=inputMatrix(:,2);

% Set the third row of the output matrix to the third column of the input
% matrix.
outputMatrix(3,:)=inputMatrix(:,3);

% Output the result:
output=outputMatrix;

end