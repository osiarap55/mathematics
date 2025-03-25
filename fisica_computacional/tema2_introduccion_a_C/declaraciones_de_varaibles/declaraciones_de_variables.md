## Declaración de variables, asignación de valores, ope- raciones básicas e impresión de resultados

La declaración de variables, indicando su tipo y su nombre, es obligatoria en C. En el listado 2c.3 se declaran tres variables de tipo “float”, se asignan valores a dos de ellas y se calcula la tercera como suma de las dos primeras.

Nótese la sintaxis de los números (notación decimal y científica) y la de la asignación con el signo “=”. 

Además de la operación de la suma “+”, se pueden emplear otros operadores binarios (que actúan sobre el valor dado por la expresión anterior y posterior a él): “-”, “*”, “/” 1 . Estos operadores binarios se aplican usando las “reglas de precedencia” habituales en álgebra. Por ejemplo, 

```“a*b+c” equivale a “(a*b)+c”. ```

El operador “-” también actúa como operador “unario”. Así, “-a” significa (sorprendente- mente), “el valor de la variable a con signo (±) cambiado”.2

```C 

#include <stdio.h>

int main(int argc, char** argv)

{ 
  float a, b, c; 
  a=1.5;
  b=-3.2e-2;
  c=a+b;

  printf(" %g+ %g= %g\n", a, b, c);

  return 0;
}
```

Ejercicio 3.4. Búsquese información sobre la función “atof” que interpreta una cadena como un valor real (archivo H en el que está declarada, argumentos que recibe y su tipo). Utilícese para modificar el programa anterior en un programa que recibe por línea de comandos los dos números y muestra la suma y su resultado. Ejercicio 3.5. Declárense las variables “a”, “b” y “c” como enteras y utilícese la función “atoi” para asignarle valores (búsquese el archivo H en el que está declarada, los argumentos que recibe y su tipo). Cámbiese la operación de suma (“+”) a división (“/”), y compruébese el comportamiento del programa.

#C
