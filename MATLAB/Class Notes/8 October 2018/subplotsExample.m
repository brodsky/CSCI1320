% Subplots example:

close
clear
clc

% Number of subplots:
numOfPlots=3;

% Create a time vector:
timeVec=0:0.001:2*pi;

% Create trig vectors:
sinVec = sin(timeVec);
cosVec = cos(timeVec);
tanVec = tan(timeVec);

% Concatenate above vectors
allVecs=[sinVec;cosVec;tanVec];

% Make vector for titles of different subplots. Note the use of double
% quotes here rather than single quotes - this creates a string datatype
% (size of 1 per string) instead of a char datatype (size of 1 *per char*),
% making them easier to concatenate as below.
nameStrings=["Sine";"Cosine";"Tangent"];

% Now, create the figure!
figure;

% Note the indexing of allVecs() to get data from all the columns in a
% certain row. Note also that all plot-related commands are applied to the
% target position specified in the most recent call of
% subplot(r,c,<position>).
for i=1:numOfPlots
    subplot(numOfPlots,1,i);
    plot(timeVec,allVecs(i,:));
    title(nameStrings(i));
end

