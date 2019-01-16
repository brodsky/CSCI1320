% Code by Andrew Brodsky | SID: 107217786 | Assignment 3
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

% Generate 3 pairs of identical column vectors. For the first vector, use
% the colon operator; for its pair, use the linspace function.

clear
clc

colvec1=(-18:-12)'; %#ok<*NASGU>
colvec1=linspace(-18,-12,7)';

colvec2=(8:4:16)';
colvec2=linspace(8,16,3)';

colvec3=(16:-6:4)';
colvec3=linspace(16,4,3)';