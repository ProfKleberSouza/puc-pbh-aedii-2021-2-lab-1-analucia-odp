
#include "functions.h"
#include <stdio.h>
#include "string.h"

void inverte(char texto[])
{
  //char invertido[100];
  //int cont = strlen(texto)-1;
  for(int pos=strlen(texto)-1; pos>=0; pos--)
  {
    //invertido[pos] = texto[cont];
    //cont--;
    printf ("%c", texto[pos]);
  }
   // SAIDA - IMPRIMINDO O RESULTADO

  return;
}
