clear
clc

% Create matrix starting at 100 and ending at 1, then find the index of the
% element equal to 55.
matrix = linspace(100,-1,1);
x=find(matrix==46);

% Create a matrix and then find the indices of the elements where the value
% is zero.
matrix2 = [2,3,0;3,0,7;8,9,2];
indices = find(matrix2==0); 
% The find function returns LINEAR indices (where the order goes down the
% first column to the bottom, then back up to the top of the second
% column).

% Plot a sine curve over -2pi, 2pi. olot(x) takes a vector for both x and
% y.
xaxis = -2*pi:pi/1000:2*pi;
plot(xaxis,sin(xaxis))

% Add an x axis to the graph without generating a new graph. First, set the
% plot state to hold, then add a horizontal line to it.
hold on
plot([-2*pi,2*pi],[0,0],'k--')
