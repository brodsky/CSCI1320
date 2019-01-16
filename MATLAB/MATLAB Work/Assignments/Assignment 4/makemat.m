% Code by Andrew Brodsky | SID: 107217786 | Assignment 4
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

function output = makemat(colVec1,colVec2)
% This function takes inputs of two column vectors of any length and
% returns a 2-column matrix consisting of the two input vectors
% concatenated side-by-side.

% First, check to see if matrices were accidentally used as inputs; throw
% an error if so.

if numel(colVec1)>length(colVec1)||numel(colVec2)>length(colVec2)
   error('Sorry! Column vectors are the only accepted inputs for this function.') 
end

% If user accidentally entered a row vector, just transpose it into a
% column vector.

if isrow(colVec1)
    colVec1=colVec1';
end

if isrow(colVec2)
    colVec2=colVec2';
end

% Check to see if the column vectors are the same length or not. If not,
% pad the shorter one with zeros until it becomes the same length as the
% longer one.

if length(colVec1)>length(colVec2)
    for i=1:(length(colVec1)-length(colVec2))
        colVec2(length(colVec2)+1,1)=0;
    end
elseif length(colVec2)>length(colVec1)
    
    for i=1:(length(colVec2)-length(colVec1))
        colVec1(length(colVec1)+1,1)=0;
    end
end

% Now, concatenate the vectors side-by-side and output them.
output=[colVec1,colVec2];

end
