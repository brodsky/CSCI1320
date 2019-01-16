% From the MATLAB warning for line 7: "MATLAB  interprets a < x < b as 
% (a < x) < b, comparing the logical result of a < x (either 0 or 1) to the 
% value b. Statements using this type of interval testing rarely yield 
% useful results.
% Therefore, as long as b is more than 1, 'true' will always be true.
x=randi([0 100], 1);
true=50<x<51;