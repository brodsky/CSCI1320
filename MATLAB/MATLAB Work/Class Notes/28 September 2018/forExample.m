% 'for' loop example:

clear
clc

% For writing programs with large vectors, it is best to preallocate space
% for the vector before writing to it iteratively!

vectorRows=4;
vectorCols=4;

vector=zeros(vectorRows,vectorCols);

for i=(1:numel(vector))
    vector(i)=input('Choose value for index of ''vector'': ');
end