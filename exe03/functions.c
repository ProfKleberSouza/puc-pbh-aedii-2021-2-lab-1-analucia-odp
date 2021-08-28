
#include "functions.h"
#include <stdio.h>

void menor_maior(int v[], int n, int *menor, int *maior)
{
  *menor = v[0];
  *maior = v[0];
    for (int pos=0; pos<n; pos++)
    {
      if(v[pos]>*maior)
      *maior = v[pos];

      if(v[pos]<*menor)
      *menor = v[pos];
    }

}
