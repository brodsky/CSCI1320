% Code by Andrew Brodsky | SID: 107217786 | Assignment 3
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

clear
clc

% Create vector vec:
vec = [-11 5 3 2 -18 4 -5 5 -66];

% Method 1: Use the find function to put non-negative elements into a new
% vector.
vec1=(vec(find(vec>0))); %#ok<FNDSB>

% Method 2: Create an index with a logical vector from which another vector
% can be made.
logicalIndex=(vec>0);
vec2=vec(logicalIndex);