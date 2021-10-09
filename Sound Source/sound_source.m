clear all
close all
clc

%setting the frequency
f = 50;

%creating the waveform
fs = 100000; %sampling frequency
d = 210; %duration of audio
n = fs*d; %number of samples
t = (1:n)/fs; %total number of data points
y = cos(2*pi*f*t);

%generating the audio
sound(y,fs);
filename = 'sound.wav';
audiowrite(filename,y,fs)