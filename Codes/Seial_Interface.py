import serial
import matplotlib.pyplot as plt
import numpy


ser = serial.Serial('COM3', baudrate = 9600, timeout = 0.001)

while(1):

    arduinoData = float(ser.readline().decode())
    print(arduinoData)
