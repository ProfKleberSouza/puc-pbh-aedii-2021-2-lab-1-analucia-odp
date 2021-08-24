#include <stdio.h>
#include "functions.h"
#include "string.h"
#include <stdbool.h>


int main() {

    char frase[100];
    bool resu;
  
  // ENTRADA DE DADOS
  fgets(frase,100,stdin);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
resu = is_palindromo(frase);

  // SAIDA - IMPRIMINDO O RESULTADO
  if(resu == true)
   printf("SIM");
  else
   printf("NAO");

  return(0);
}