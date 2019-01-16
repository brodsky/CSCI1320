% This script prompts the user for the hot and cold reservoir temperatures,
% calls the carnotFunction() to determine the maximum possible efficiency
% of the heat engine, and then prints the returned efficiency to the
% command window with 3 decimal places.

clear;
clc;

hotInput = input('Enter the temperature (in Kelvin) of the hot reservoir: ');
coldInput = input('Enter the temperature (in Kelvin) of the cold reservoir: ');

fprintf('The Carnot efficiency of the given engine is %.3f. \n', carnotEfficiencyCalculator(hotInput, coldInput));
