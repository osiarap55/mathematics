#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  int N, n;

  N=atoi(argv[1]);

  printf("cuenta atras:\n");

  for(n=N; n>=0; n--) {
    printf("%d\n", n);
  }
  return 0;
}
