% Code by Andrew Brodsky | SID: 107217786 | Lab 2 
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

% This script takes inputs for the initial speed and angle above the
% horizontal (in degrees) at which some ball is launched into the air. The
% script then computes vectors for the x and y motion of the ball as a
% function of time, displays a graph of the ball's 2D motion based on those
% vectors, and then calculates the distance from the origin at which the
% ball strikes the ground.

% In the scope of this script, the positive y direction is defined to be up
% and the positive x direction is defined to be to the right.

clear
clc

% Define universal constants:
fGrav = -9.8;
releaseHeight = 1.5;

% Ask for user inputs:
vInitial=input('What is the velocity (in m/s) of the ball at the time of its launch? ');
angleInitial=input('\nWhat is the angle (in degrees) of the ball above the horizontal at the \ntime of its launch? ');

% Create column vector for time steps:
time=linspace(0,20,10000)';

% Create vectors for both X and Y motion
xMotion=vInitial*cos(angleInitial*pi/180)*time(:);
yMotion=releaseHeight+vInitial*sin(angleInitial*pi/180)*time(:)+0.5*fGrav*(time(:)).^2;

% Create logical vector to identify first index where yMotion is negative:
groundPoint=yMotion<0;

% Then, use logical vector to find the specific index at which y is first
% less than 0:
zeroIndex=find(groundPoint,1);

% Then, find the x position of the ball at the time given by zeroIndex:
fprintf('\nThe ball hits the ground at a distance of %.4g meters away from the launch point.\n', xMotion(zeroIndex));

% Open a new figure:
figure('Name','Graphical Ball Trajectory','NumberTitle','off');

% Plot the ball's motion on the figure:
plot(xMotion,yMotion,'LineWidth',3);

% Label axes and title the graph:
xlabel('X Position of Ball(m)');
ylabel('Y Position of Ball(m)');
title('2D Plot of Ball''s Position');

% Hold on to the graph:
hold on;
plot([0,xMotion(end)],[0,0],'--k');

