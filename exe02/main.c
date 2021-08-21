#include <stdio.h>
#include "functions.h"

int main() {

    int v[100], n, m;
  
  // ENTRADA DE DADOS
  scanf("%d", &n);

  for(int pos=0; pos<n; pos++)
    scanf("%d", &v[pos]);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  m = menor (v, n);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("MENOR = %d\n", m);

  return(0);
}