function output = simplerRepVec(inputVec,numOfDup)

output=1:length(inputVec)*numOfDup;

if isempty(output)
    output=[];
end

for i = 1:length(inputVec)
    chunkVec=ones(1,numOfDup);
    chunkVec=chunkVec*inputVec(i);
    output(i*numOfDup-(numOfDup-1):i*numOfDup)=chunkVec;
end

end