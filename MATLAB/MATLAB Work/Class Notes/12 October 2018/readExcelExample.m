% Example: Reading in Excel data

clear
close
clc

% Note: if a function outputs certain variables but you're not going to
% use them, use the ~ to just throw it away:
[~,~,rawData]=xlsread('saleItems.xlsx');

% Remove the first row of data and the last column of data:
cleanData = rawData(2:end, 1:end-1);

% Save the clean data as a .mat file:
save('cleanData.mat','cleanData');