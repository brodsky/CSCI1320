
function [diffProduct,rowIndices,columnIndices] = unique_elements(input1,input2)
% Note that input1 and input2 are assumed to be the same size.

% Initialize some vars:
rowIndices = [];
columnIndices = [];
diffProduct = [];
indexCount = 1;

for i=1:numel(input1)
    if input1(i)~=input2(i)
        diffProduct(indexCount)=input1(i)*input2(i);
        [rowIndices(indexCount),columnIndices(indexCount)]=ind2sub(size(input1),i);
        indexCount = indexCount+1;
    end
end

end