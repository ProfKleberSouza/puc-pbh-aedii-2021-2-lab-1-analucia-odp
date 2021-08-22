#include <stdio.h>
#include "functions.h"

int main() {

    int valor, base, expoente;
  
  // ENTRADA DE DADOS
  scanf("%d %d", &base, &expoente);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  valor = potencia(base, expoente);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("%d", valor);

  return(0);
}