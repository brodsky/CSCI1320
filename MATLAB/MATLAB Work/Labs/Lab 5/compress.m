% Code by Andrew Brodsky | SID: 107217786 | Lab 5
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

function output = compress(audioVec,compRatio)
%% THIS FUNCTION RETURNS A DUMMY VARIABLE

% 1. Make sure that the compression ratio is an integer >= 1.
% 2. Create a new vector with length of audioVec/compRatio.
% 3. Use a for loop to take every [compRatio]'th element of audioVec and
% put it into the new vector.
% 4. Output the compressed sound.

output = zeros(1,round(length(audioVec)/compRatio)); % DUMMY VARIABLE

end