#include <stdio.h>
#include "functions.h"

int main() {

    int n1, n2, resu;
  
  // ENTRADA DE DADOS
  scanf("%d %d", &n1, &n2);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  resu = mdc(n1, n2);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("MDC = %d\n", resu);

  return(0);
}