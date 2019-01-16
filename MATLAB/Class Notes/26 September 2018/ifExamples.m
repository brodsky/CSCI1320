% Examples of if & if-else statements

clear
clc

x = input('Enter a number: ');

% Option 1: 'if' statements only:
% -------------------------------------------------------------------------

if x > 0
    disp('Positive');
end
if x == 0
    disp('Hooray!');
end
if x < 0
    disp('Negative');
end

% Option 2: Nesting
% -------------------------------------------------------------------------

if x > 0
    disp('Positive');
else
    if x == 0
        disp('Hooray!');
    else
        disp('Negative');
    end
end

% Option 3: elseif
% -------------------------------------------------------------------------

if x > 0
    disp('Positive');
elseif x == 0
    disp('Hooray!');
else
    disp('Negative');
end


if x >= 0
    disp('Positive');
elseif x == 0
    disp('Hooray!');
else
    disp('Negative');
end
