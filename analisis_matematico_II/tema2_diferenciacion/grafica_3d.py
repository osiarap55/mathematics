import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

# Definir la función de la superficie
def f(x, y):
    return np.sqrt(x**2 + y**2)

# Crear una cuadrícula de puntos
x = np.linspace(-5, 5, 50)
y = np.linspace(-5, 5, 50)
X, Y = np.meshgrid(x, y)
Z = f(X, Y)

# Crear la figura y el gráfico 3D
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

# Dibujar la superficie
ax.plot_surface(X, Y, Z, cmap='gray', alpha=0.8, edgecolor='none')

# Dibujar las curvas de nivel
ax.contour3D(X, Y, Z, 50, cmap='binary', linewidths=0.5)

# Añadir etiquetas a los ejes
ax.set_xlabel('X')
ax.set_ylabel('Y')
ax.set_zlabel('Z')

plt.show()

