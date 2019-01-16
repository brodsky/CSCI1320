function carnotEfficiencyOut = carnotEfficiencyCalculator(hotReservoir,coldReservoir)

% This function determines the Carnot efficiency of a heat engine, given
% the temperatures (in Kelvin) of its hot and cold reservoirs.

carnotEfficiencyOut = 1-(coldReservoir/hotReservoir);

end

