
#include "functions.h"

int potencia (int x, int n)
{
   int resu;
  if (n==0)
  return 1;
  //resu= 1;

  else
  return (x*(potencia(x,n-1)));
    //resu = x*(potencia(x,n-1));

    return resu;
}
