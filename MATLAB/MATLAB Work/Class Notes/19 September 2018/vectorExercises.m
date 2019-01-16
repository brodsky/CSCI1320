clear
clc

% Create vector with values:
vec = [1,3,2,0,2,0,1,7];

% Overwrite the 8th element:
vec(8) = 8;

% Write the first element of the vector to a (scalar) variable:
x = vec(1);

% Create a new vector with the last 4 elements of the first vector:
indexVec = [5,6,7,8];
newVec = vec(indexVec);

% Alternatively...
indexVec = 5:8;
newVec = vec(indexVec);

% Concatenate subVec with some add'l values on the end:
newVec = [newVec,1:5];

% Concatenate the new version of subVec with itself!
newVec = [newVec,newVec];
