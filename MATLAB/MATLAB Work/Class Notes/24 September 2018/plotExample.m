% Plotting Example:

clear
close
clc

% Create x and y vectors for the plot:
ang=0:0.01:2*pi;
sinVec=sin(ang);
cosVec=cos(ang);

% Ask user what amplitude they want to find
amp=input('Enter an amplitude between 0 and 1 to highlight: ');

% Since angle steps might not hit right on the value, set a margin of
% error:
margin=0.02;

% Create logical arrays to find relevant indices. Note the use of single
% logical operators instead of double (e.g. & vs &&) with vectors.

logicalSin=(sinVec>(amp-margin)&sinVec<(amp+margin));
logicalCos=(cosVec>(amp-margin)&cosVec<(amp+margin));

highlightSin=find(logicalSin);
highlightCos=find(logicalCos);

% Plot both graphs! Make one graph dashed for better B&W identification.
hold on
plot(ang,sinVec,'--','LineWidth',2)
plot(ang,cosVec,'LineWidth',2)

% Make axes fit better [xMin,xMax,yMin,yMax] with 20% padding for y-values
axis([0,2*pi,1.2*min(sinVec),1.2*max(sinVec)])

% Label that boi
xlabel('Angle (rad)')
ylabel('Amplitude')

% Put points at highlight values:
plot(ang(highlightSin(:)),sinVec(highlightSin(:)),'*')
plot(ang(highlightCos(:)),cosVec(highlightCos(:)),'*')

% Legend that boi
legend('Sine','Cosine','Sine Highlight','Cosine Highlight')

