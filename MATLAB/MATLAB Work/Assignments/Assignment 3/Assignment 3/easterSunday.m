% Code by Andrew Brodsky | SID: 107217786 | Assignment 3
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

% This script asks the user to input a year, then performs calculations to
% determine on what day in that year Easter Sunday occurred.

clear
clc

% Prompt the user for the year.
year=input('Enter the year of interest: ');

% Perform calculation:
a=floor(mod(year,19));
b=floor(year/100);
c=floor(mod(year,100));
d=floor(b/4);
e=floor(mod(b,4));
g=floor((8*b+13)/25);
h=floor(mod((19*a+b-d-g+15),30));
j=floor(c/4);
k=floor(mod(c,4));
m=floor((a+11*h)/319);
r=floor(mod((2*e+2*j-k-h+m+32),7));
n=floor((h-m+r+90)/25);
p=floor(mod((h-m+r+n+19),32));

% Output resulting date:
fprintf('In %d, Easter Sunday fell on %d/%d.\n',year,n,p);
