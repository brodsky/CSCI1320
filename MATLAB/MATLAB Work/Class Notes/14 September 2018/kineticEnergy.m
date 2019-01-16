function output = kineticEnergy(massInput,velocityInput)
% kineticEnergy takes in values for mass (kg) and velocity (m/s) of some
% object and outputs the resulting kinetic energy of that object.
%
%   Syntax: kineticEnergy(mass, velocity)
%   As a reminder, kinetic energy = .5*mass*(velocity^2).

output = .5*massInput*(velocityInput^2);

end
