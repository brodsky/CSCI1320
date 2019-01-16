% Code by Andrew Brodsky | SID: 107217786 | Assignment 6
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

% Usual housekeeping
clear
clc

% Read in the MATLAB data file that was created in Part 1.
load('processedScoreData.mat');

% Calculate each student?s grade. First, create a gradebook array that will
% contain SIDs, individual section scores, the overall weighted score, and
% the letter grade.
gradebook=cell(101,5);

% Input SIDs and essay scores into the gradebook; set default MC and
% overall scores to zero.
gradebook(:,[1,3])=cleanScoreData(2:end,1:2);
gradebook(:,[2,4])={0};

% Add a point to each student's MC score for every question they answer
% correctly.
for s=2:102
    for q=3:19
        if cleanScoreData{1,q}==cleanScoreData{s,q}
           gradebook{s-1,2}=gradebook{s-1,2}+1; 
        end
        
    end
end

% Weight and combine MC and essay scores to get the overall grade for each
% student. The multiple choice part of the quiz is worth 60% of the final
% grade and the essay is worth the remaining 40%.

for s=1:101
    gradebook{s,4} = gradebook{s,2}/17*0.6 + gradebook{s,3}/15*0.4;
end

% Assign letter grades to each student based on the percentage of their
% overall weighted score.
for s=1:101
    
    if gradebook{s,4} >= .93
        gradebook{s,5}="A";
    elseif gradebook{s,4} >= .90 && gradebook{s,4} < .93
        gradebook{s,5}="A-";
    elseif gradebook{s,4} >= .87 && gradebook{s,4} < .90
        gradebook{s,5}="B+";
    elseif gradebook{s,4} >= .83 && gradebook{s,4} < .87
        gradebook{s,5}="B";
    elseif gradebook{s,4} >= .80 && gradebook{s,4} < .83
        gradebook{s,5}="B-";
    elseif gradebook{s,4} >= .77 && gradebook{s,4} < .80
        gradebook{s,5}="C+";
    elseif gradebook{s,4} >= .73 && gradebook{s,4} < .77
        gradebook{s,5}="C";
    elseif gradebook{s,4} >= .70 && gradebook{s,4} < .73
        gradebook{s,5}="C-";
    elseif gradebook{s,4} >= .67 && gradebook{s,4} < .70
        gradebook{s,5}="D+";
    elseif gradebook{s,4} >= .63 && gradebook{s,4} < .67
        gradebook{s,5}="D";
    elseif gradebook{s,4} >= .60 && gradebook{s,4} < .63
        gradebook{s,5}="D-";
    else
        gradebook{s,5}="F";
    end
        
end

% Display each student's SID along with their letter grade for the quiz.
disp(gradebook(:,[1,5]));