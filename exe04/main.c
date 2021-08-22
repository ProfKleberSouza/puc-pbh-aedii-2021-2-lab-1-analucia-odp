#include <stdio.h>
#include "functions.h"
#include "string.h"

int main() {

    char frase[100];
  
  // ENTRADA DE DADOS
  fgets(frase,100,stdin);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  numero_vogais(frase);


  return(0);
}