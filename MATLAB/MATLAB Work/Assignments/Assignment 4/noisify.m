% Code by Andrew Brodsky | SID: 107217786 | Assignment 4
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

% Clear any pre-existing figures and do the usual housekeeping:
hold off;
clear figure;
clc;

% Create a linearly spaced vector x with 20 elements in the interval
% [1,20].
x=linspace(1,20,20);

% Create a vector y equal to the element-wise square root of vector x.
y=x.^(.5);

% Plot vector y vs vector x. Hold on to this figure for later additions.
plot(x,y);
hold on;

% Create a new vector y2 with 20 noisy points based around the values in
% vector y by adding a random value between -0.05 and +0.05 to each element
% in y. Then, plot y2 vs x as points on the same graph as y vs x.
y2=y+(0.1*rand(1,length(y))-0.05);
plot(x,y2,'.r')

% Label and title graph as appropriate.
xlabel('X');
ylabel('Y');
title('X^1^/^2 vs X and Noisy X^1^/^2 vs X');
legend('Square Root of X','Square Root of X plus noise');
