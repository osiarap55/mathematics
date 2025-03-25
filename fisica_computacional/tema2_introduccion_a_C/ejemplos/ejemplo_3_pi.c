#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  int Niter, n;
  double suma, flip, ePi;

  if(argc <= 1 ) {
    printf("el programa %s necesita saber el numero de interacciones\n", argv[0]);
    exit(1);
  }

  Niter=atoi(argv[1]);
  suma=0.0;
  flip=1;
  for(n=0; n<Niter; n++) {
    suma += flip/(2*n+1);
    flip=-flip;
  }
  ePi=4*suma;

  printf("PI = %f\n", ePi);

  return 0;
}

