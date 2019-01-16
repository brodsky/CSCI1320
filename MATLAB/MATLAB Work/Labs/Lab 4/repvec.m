% Code by Andrew Brodsky | SID: 107217786 | Lab 4
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

function output = repvec(inputVec,numOfDup)
% This function takes inputs of a row vector and the number of times that
% each element in the row vector is to be duplicated, then outputs a row
% vector with each element of the original vector duplicated as specified
% by the input for the number of duplicates for each element.

% Preallocate the length of the output vector.
output=linspace(0,1,length(inputVec)*numOfDup);

% If output comes out as a 1x0 matrix (effectively empty, but not of the
% fort of [] ), then set it to completely empty ( [] ).
if isempty(output)
    output=[];
end

% For as many times as an element needs to be duplicated, write it to the
% 'j'th position in the set of duplicates for element i of the original
% vector.
for i = 1:length(inputVec)
    for j = 0:(numOfDup-1)
        output(numOfDup*i-j)=inputVec(i);
    end 
end

end