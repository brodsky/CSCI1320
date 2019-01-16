% Code by Andrew Brodsky | SID: 107217786 | Assignment 5
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

function output = compress(audioVec,compRatio)

% Make sure that the compression ratio is an integer >= 1.
if compRatio >=1
    
    % Make sure that compRatio is an integer.
    compRatio = ceil(compRatio);
    
    % Output a vector containing every [compRatio]'th element of audioVec.
    output = audioVec(1:compRatio:end);

else
    
    % Otherwise, output an empty vector.
    output=[];
end

end