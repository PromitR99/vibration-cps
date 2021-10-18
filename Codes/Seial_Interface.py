import serial
import matplotlib.pyplot as plt
import numpy as np

s_data = serial.Serial('COM3', 9600)
plt.close('all');
plt.figure();
plt.ion();
plt.show()

p_data = np.array([])
i = 0
while i < 200:
    a_data = s_data.readline()
    a_data.decode()
    b_data = float(a_data)
    p_data = np.append(p_data, b_data)
    plt.cla()
    plt.plot(p_data)
    plt.ylim((-5, 5))
    plt.xlabel("Time (in 10 ms scale)")
    plt.ylabel("Acceleration (in g)")
    plt.title("Acceleration vs Time Plot")
    plt.pause(0.01)
    i = i+1
    
s_data.close()
