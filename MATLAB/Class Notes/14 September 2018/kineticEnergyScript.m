clear;
clc;

mass = input('Enter the mass (in kg) of the object. ');
velocity = input('Enter the velocity (in m/s) of the object. ');

fprintf('\nThe kinetic energy of the function is %g joules. \n', kineticEnergy(mass, velocity));

