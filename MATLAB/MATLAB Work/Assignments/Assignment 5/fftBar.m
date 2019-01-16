% Code by Andrew Brodsky | SID: 107217786 | Assignment 5
% Prof: Maciej Zagrodzki (CSCI 1320) | Section 110 | anbr6390@colorado.edu

function fftBar(audioVec,sampleRate)

% 1. Eliminate all but the first 1000 samples of audioVec.
audioVec=audioVec(1:1000);

% 2. Apply a Fourier transform to audioVec.
fourTrans=fft(audioVec);

% 3. Remove the imaginary and negative values from audioVec that the
% Fourier transform produced.
fourTrans=abs(fourTrans);
fourTrans=fourTrans(1:length(fourTrans)/2);

% 4. Create a frequency vector for the x-axis of the bar graph.
freqVec = sampleRate*(0:(length(audioVec)-1)/2)/length(audioVec);

% 5. Create a bar graph of the amplitudes versus the frequencies. Set the
% x-limits to between 0 and 5 kHz and the y-limits to between 0 and the max
% value of the amplitude over that domain. Return nothing.
bar(freqVec,fourTrans);
axis([0 5000 0 max(fourTrans)]);

xlabel('Frequency (Hz)');
ylabel('Amplitude');
title('FFT of First 1000 Samples of Audio Input');

end