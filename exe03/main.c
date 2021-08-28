#include <stdio.h>
#include "functions.h"

int main() {

  int v[100], n, m, maior, menor;
  
  // ENTRADA DE DADOS
  scanf("%d", &n);

  for(int pos=0; pos<n; pos++)
    scanf("%d", &v[pos]);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  menor_maior(v, n, &menor, &maior);

     //SAIDA - IMPRIMINDO O RESULTADO
  printf("MENOR = %d\n", menor);
  printf("MAIOR = %d\n", maior);

  // SAIDA - IMPRIMINDO O RESULTADO
  //printf("SOMA = %d\n", s);

  return(0);
}