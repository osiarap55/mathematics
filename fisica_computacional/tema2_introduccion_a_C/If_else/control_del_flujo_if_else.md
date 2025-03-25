## Control de flujo: “if. . . else”

Hasta ahora la ejecución de los programas ha sido lineal: una instrucción tras otra. El “flujo” de un programa consiste en el orden en que sus instrucciones van siendo ejecutadas y si lo son o no, en función de lo que indique el “usuario” de dicho programa. La modificación más sencilla al flujo consiste en decidir si se ejecuta una instrucción u otra según una condición lógica.

En el listado 2c.4 se calcula el valor absoluto de la diferencia entre dos números reales. Se utiliza la instrucción “if...else” para ejecutar un bloque de instrucciones u otro (bloques,

```
1 A diferencia de otros lenguajes, en C no existe un operador de exponenciación; para ello se utilizará una función: “pow”. 2 En C también se puede utilizar “+” como operador “unario”. Obviamente “+a” (valor de la variable a sin cambio de signo) indica lo mismo que “a”. Sin embargo, a veces, puede ser conveniente esta notación para enfatizar lo que se está escribiendo.
```

entre “{...}”, con una única instrucción en ellos) de modo que se garantice el signo adecuado en el resultado.

La condición se construye con operadores de comparación: “<”, “>”, “<=”, “>=”, “!=”, “==”. Nótese la notación peculiar del C para el operador “distinto de” (“!=”) y para el operador “igual a” (“==”), que no se debe confundir con el operador “=” que sirve para asignar a la variable a su izquierda el valor de la expresión a su derecha. Los operadores de comparación tienen menos precedencia que los de suma o resta; esto no debe parecer evidente, ya que en C los resultados de operaciones lógicas se tratan como si fueran valores enteros. Es decir, se puede calcular algo así como “(4 || 6) + (7 || 8)”. . . otra cosa es el significado que tenga, pero en principio es legal.

Los resultados de las comparaciones se pueden combinar posteriormente con los opera- dores lógicos: “||” (disyunción, OR), “&&” (conjunción, AND), “^” (disyunción exclusiva, XOR). También se pueden “negar ” con el operador unario “!”. Estos operadores son los últimos en ser evaluados.

### el programa que calcula la distancia entre dos números reales

```C
#include <stdio.h>

int main(int argc, char** argv)
{ 
  float a, b, c;
 
  a=1.5; 8 
  b=3.2; 9 10 
 
  if( a<b ) {
    c=b-a;
  } else { 
    c=a-b;
  } 

  printf("| %g- %g|= %g\n", a, b, c);

  return 0;
}

```

Ejercicio 3.6. Modificar el listado anterior usando la función “atof” para leer los valores de “a” y “b” desde línea de comandos. Eliminar también la alternativa “else” haciendo primero la operación “a-b”, comprobando el signo de “c” y, si no es adecuado, cambiándolo con el operador unario “-”.

#C
