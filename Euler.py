import numpy as np
import matplotlib.pylab as plt

data = np.genfromtxt("Euler.dat")
plt.plot(data[:,0], data[:,1])
plt.savefig("Euler.png")