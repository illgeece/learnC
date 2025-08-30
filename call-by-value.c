/*
*The called function only gets a local copy of the variable in the calling function
*It cannot edit the variable in the calling function, only its private copy
*Power function that uses this concept
*/

#include <stdio.h>
#include <stdlib.h>

int power(int base, int n){
  int p;
  for (p=1; n>0; --n)
    p=p*base;
  return p;
}

int int main(int argc, char *argv[])
{
  int grab;
  printf("POWER: a^b\ninput a:\n");
  scanf("%d", &a);
  printf("input b:\n");
  return 0;
}


