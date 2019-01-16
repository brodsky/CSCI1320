function output = oddEven(vec1,vec2)
% This function takes in two vectors (either row or column) and returns a
% column vector containing: first, the elements in all the odd indices of
% the first vector; then, the elements in all the even indices of the
% second vector. The function assumes that the inputs passed to it are
% always vectors and not matrices or otherwise.

% Initiate counter variables for later use.
icount=1;
jcount=0;

% Assign the odd elements of the first vector to consecutive
% indices of the output vector, starting with the output's first index.
for i=1:2:length(vec1)
    output(icount)=vec1(i);
    icount=icount+1;
end

% Starting from the index *after* the last index filled by an odd-index
% element from the first vector, assign the even elements of the second
% vector to consecutive indices in the output vector.
for j=2:2:length(vec2)
    output(icount+jcount)=vec2(j);
    jcount=jcount+1;
end

% Change the output to a column vector and return it.
output=output';

end