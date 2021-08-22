#include "functions.h"
#include <stdio.h>
#include "string.h"

void numero_vogais(char texto[])
{
  int a=0, e=0, i=0, o=0, u=0;
  for(int pos=0; pos<strlen(texto); pos++)
  {
    if (texto[pos] == 'a' || texto[pos] == 'A')
    a++;

    else if (texto[pos] == 'e' || texto[pos] == 'E')
    e++;

    else if (texto[pos] == 'i' || texto[pos] == 'I')
    i++;

    else if (texto[pos] == 'o' || texto[pos] == 'O')
    o++;

    else if (texto[pos] == 'u' || texto[pos] == 'U')
    u++;

  }
   // SAIDA - IMPRIMINDO O RESULTADO
  printf("A = %d\n", a);
  printf("E = %d\n", e);
  printf("I = %d\n", i);
  printf("O = %d\n", o);
  printf("U = %d\n", u);

  return;
}
