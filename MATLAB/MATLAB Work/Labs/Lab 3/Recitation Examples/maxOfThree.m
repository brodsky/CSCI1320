function output = maxOfThree(x,y,z)
if x>y && x>z
    output = 'First number is the largest.';
elseif y>x && y>z
    output = 'Second number is the largest.';
elseif z>x && z>y
    output = 'Third number is the largest.';
else
    output = 'The largest value is shared by two of the inputs.';
end