% Code by Andrew Brodsky | SID: 107217786 | Assignment 6
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

% Usual housekeeping
clear
clc

% Read the data from the given spreadsheet into MATLAB. We're interested in
% the raw (complete) dataset only, so discard the others with ~.
[~,~,rawScoreData] = xlsread('Section9_data.xlsx');

% Create a new cell array that only contains the answer key, SID numbers,
% essay scores, and MC answers. All other rows/columns can be discarded
% (except for the column titles; save those in a separate array.)
cleanScoreData = rawScoreData(2:103, [2,5,7:23]);
cleanDataColumnTitles = rawScoreData(1,[2,5,7:23]);

% Save the clean, processed data in a .mat file.
save('processedScoreData.mat','cleanScoreData','cleanDataColumnTitles');