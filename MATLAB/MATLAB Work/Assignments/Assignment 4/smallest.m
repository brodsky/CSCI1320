% Code by Andrew Brodsky | SID: 107217786 | Assignment 4
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

function output = smallest(vec)
% This function takes a vector input and outputs the smallest element of
% the vector that immediately precedes a zero. If there are no elements
% equal to zero in the vector or if the input vector is empty, the function
% returns an empty vector.

% First, parse the input vector for elements equal to zero.
zeroLogicVec = vec==0;
zeroIndices = find(zeroLogicVec);

% Now, create a vector to hold the values of the elements just before the
% above-found zeros:
elsBeforeZero=zeros(1,length(zeroIndices));

% If there are no zeros in vec to begin with, then the output should be an
% empty vector. If vec was empty to begin with, output should be an empty
% vector. Otherwise, find the smallest element immediately preceding zero.
if isempty(zeroIndices)
    output = [];
elseif  isempty(zeroLogicVec)
    output = [];
else
    for i=1:length(zeroIndices)
        % If the first element of vec is zero, then there won't be any
        % element preceding it to consider; therefore, skip the next step
        % if that's true.
        if zeroIndices(i) ~= 1
            elsBeforeZero(i)=vec(zeroIndices(i)-1);
        end     
    end
    output = min(elsBeforeZero);
end

end

