vector = 1:20;
% preallocate the size of the vector so that the loop runs faster
% for loop repeats until the index variable is greater than the end number
for x=1:20
    vector(x)=sin(x); 
end
disp(vector)

% can extend a vector by just assigning a value to a not-yet-existing
% index. Any intermediate values are assigned a value of 0.
example=[2,5,7];
example(8)=4;
disp(example)


