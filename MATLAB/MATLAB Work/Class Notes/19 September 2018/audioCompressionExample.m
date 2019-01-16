clear
clc

% Read in audio file:
[audioVec,Fs]=audioread('Africa 1 Beat Off and 1 Step Out of Key.wav');

% Check length of audioVec and write it to a variable:
lengthAudio = length(audioVec);

% Cut out right audio channel to make signal mono (left channel only):
% audioVec=(1:lengthAudio)';

% Play audio:
sound(audioVec,Fs)

% Crudely compress audioVec:
compressionRatio = 1;
compVec = (1:compressionRatio:lengthAudio)';
compressedAudio = audioVec(compVec);

% Play the compression!
% sound(compressedAudioVec,(Fs/compressionRatio))

% Export compressed song to a new file:
% audiowrite('Africa (compressed).wav', compressedAudio, round(Fs/compressionRatio));

% To store stereo audio, a matrix is used. First row contains the left
% channel while second row contains the right channel.