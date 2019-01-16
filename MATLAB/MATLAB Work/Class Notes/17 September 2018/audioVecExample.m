% example of reading in an audio file, NOT COMPLETE

clear
clc

% read in audio file (file must be in current folder)

[audioVec, Fs]=audioread('filename.wav');

% now play the sound back!
sound(audioVec,Fs)