function output = quotientInBoundsFunc(input1, input2)
% Given two real numbers, this function checks to see if
% input1<(input1/input2)<input2 and then outputs a logical value based on
% that comparison.
output = (input1<(input1/input2) && (input1/input2)<input2);
end