% Theoretically, preallocating a vector before writing to it will save
% processing time. This requires creating a *very* large vector to really
% see the results, though.

clear
clc

% Create a variable for the length of the vectors.
n=100000;

% Start a timer.
tic;

% Option 1: Expand the vector every time an element is added.
for i=1:n
    vec1(i)=i^2;
end

% Read the timer.
toc;

% Restart the timer.
tic;

% Option 2: Preallocate a vector, then write to it.
vec2=zeros(1,n);

for i=1:n
    vec2(i)=i^2;
end

% Read the timer.
toc;