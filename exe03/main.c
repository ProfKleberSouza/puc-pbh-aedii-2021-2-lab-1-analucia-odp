#include <stdio.h>
#include "functions.h"

int main() {

  int v[100], n, m;
  
  // ENTRADA DE DADOS
  scanf("%d", &n);

  for(int pos=0; pos<n; pos++)
    scanf("%d", &v[pos]);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  menor_maior(v, n, &v[0], &v[0]);

  // SAIDA - IMPRIMINDO O RESULTADO
  //printf("SOMA = %d\n", s);

  return(0);
}