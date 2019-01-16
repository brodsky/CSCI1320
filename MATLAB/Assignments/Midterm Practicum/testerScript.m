% This script calls the isequal(oddEven() function with various test cases
% and then checks to see if the resulting output is correct.

clear
clc

% Check if the function returns a correct result when given two equal
% length column vectors as input arguments.

if isequal(oddEven([1;2;3;4],[5;6;7;8]),[1;3;6;8])
    disp('PASSED Test 1: 2 equal length column vectors')
else
    disp('FAILED Test 1: 2 equal length column vectors')
end

% Check if the function returns a correct result when given a row vector
% and then a column vector (each with the same length) as input arguments.

if isequal(oddEven([1,2,3,4],[5;6;7;8]),[1;3;6;8])
    disp('PASSED Test 2: Equal length row vector, then column vector')
else
    disp('FAILED Test 2: Equal length row vector, then column vector')
end

% Check if the function returns a correct result when given a column vector
% and then a row vector (each with the same length) as input arguments.

if isequal(oddEven([1;2;3;4],[5,6,7,8]),[1;3;6;8])
    disp('PASSED Test 3: Equal length column vector, then row vector')
else
    disp('FAILED Test 3: Equal length column vector, then row vector')
end

% Check if the function returns a correct result when given two equal
% length row vectors as input arguments.

if isequal(oddEven([1,2,3,4],[5,6,7,8]),[1;3;6;8])
    disp('PASSED Test 4: 2 equal length row vectors')
else
    disp('FAILED Test 4: 2 equal length row vectors')
end

% Check if the function returns a correct result when given two column
% vectors of unequal length as input arguments.

if isequal(oddEven([1;2;3;4],[5;6;7]),[1;3;6])
    disp('PASSED Test 5: 2 uequal length column vectors')
else
    disp('FAILED Test 5: 2 unequal length column vectors')
end

