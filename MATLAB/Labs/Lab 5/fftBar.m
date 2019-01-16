% Code by Andrew Brodsky | SID: 107217786 | Lab 5
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

function fftBar(audioVec,sampleRate)
%% THIS FUNCTION RETURNS A DUMMY FIGURE

% 1. Eliminate all but the first 1000 samples of audioVec.
% 2. Apply a Fourier transform to audioVec.
% 3. Remove the imaginary and negative values from audioVec that the
% Fourier transform produced.
% 4. Create a frequency vector for the x-axis of the bar graph.
% 5. Create a bar graph of the amplitudes versus the frequencies. Set the
% x-limits to between 0 and 5 kHz and the y-limits to between 0 and the max
% value of the amplitude over that domain. Return nothing.

x=1:5000; % DUMMY VARIABLE
y=50*rand(1,5000); % DUMMY VARIABLE
bar(x,y); % DUMMY VARIABLE
axis([0,5000,0,max(y)]); % DUMMY VARIABLE

end