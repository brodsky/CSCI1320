function output = throwBall_func(v,theta,maxTime)
% Code by Andrew Brodsky | SID: 107217786 | Assignment 3 
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu
% 
% This function determines whether a ball launched with velocity v (in m/s)
% at an angle theta (in degrees) above the horizontal will fall back down
% to the ground within a time interval [0,maxTime] (where maxTime is in
% seconds) after its launch.
% 
% Syntax: throwBall_func(v,theta,maxTime)

% Define universal constants:
fGrav = -9.8;
releaseHeight = 1.5;

% Create time vector:
time=linspace(0,maxTime,maxTime*500)';

% Create a vector for the Y motion of the ball:
yMotion=releaseHeight+v*sin(theta*pi/180)*time(:)+0.5*fGrav*(time(:)).^2;

% Create logical vector to show when yMotion<0 (ball has hit ground):
groundPoint=yMotion<0;

% Find the specific index at which y is first less than 0:
zeroIndex=find(groundPoint,1);

% If zeroIndex is an empty vector (meaning the ball never hits the ground
% within maxTime), return 0. Else, return 1 (because the ball hits the
% ground within maxTime and therefore there exists one or more elements
% equal to 1 in groundPoint).

output = ~isempty(zeroIndex);

end

