#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  float a, b, c;

  if (argc < 3) {
    printf("Uso: %s <entero1> <entero2>\n", argv[0]);
    return 1;
  }

  a = atoi(argv[1]);
  b = atoi(argv[2]);

  if (b == 0){
    printf("Error: division por cero\n");
    return 1;
  }

  c = a / b;

  printf("%g / %g = %gn", a, b, c);

  return 0;
}

