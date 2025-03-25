#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  float a, b, c;

  if (argc < 3){
    printf("Uso: %s <numero1> <numero2>\n", argv[0]);
    return 1;
  }

  a = atof(argv[1]);
  b = atof(argv[2]);
  c = a + b;

  printf("%g + %g = %g\n", a, b, c);

  return 0;
}
