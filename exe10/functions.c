#include <stdio.h>
#include "functions.h"

void tabela_verdade(int d)
{

  int tabela[100];
  tabela_verdade_rec(tabela, d, 0, 0);
}

void tabela_verdade_rec(int tabela[], int d, int pos, int cont)
{
  for (cont=0; cont<pow(2,d); cont++)
  {
    tabela[pos]=
  }
}
