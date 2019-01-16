% Code by Andrew Brodsky | SID: 107217786 | Assignment 3
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

clear
clc

% Efficiently generate a matrix.
M=[13:-3:7;1:4:9;30:-10:10;5:10:25];

% Write the contents of the element in the last row, third column to
% variable m1:
m1=M(end,3);

% Write the contents of the entire third column to vector m2:
m2=M(:,3);

% Write the contents of the second and third rows to matrix M3:
M3=M(2:3,:);