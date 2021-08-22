
#include "functions.h"
#include <stdio.h>

void menor_maior(int v[], int n, int *menor, int *maior)
{
  *menor = v[0];
  *maior = v[0];
    for (int pos=0; pos<n; pos++)
    {
      if (*maior<v[pos])
      *maior = v[pos];

      if(*menor>v[pos])
      *menor = v[pos];
    }

    //SAIDA - IMPRIMINDO O RESULTADO
  printf("MENOR = %d\n", *menor);
  printf("MAIOR = %d\n", *maior);

  return;
}
