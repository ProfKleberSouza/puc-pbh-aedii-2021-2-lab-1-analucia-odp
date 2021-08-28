#include <stdio.h>
#include "functions.h"
#include <math.h>

void tabela_verdade(int d)
{
  int tabela[100];

  tabela_verdade_rec(tabela, d, 0, 0);
}

void tabela_verdade_rec(int tabela[], int d, int cont, int pos)
{
  if (cont>pow(2,d))
  {
    tabela[pos] = '\0';

    printf ("%d\n", tabela);
  }

  else
  {
    if (d>0)
    {
     tabela[pos] = 1;
     tabela_verdade_rec(placar,d-1,cont+1,pos+1);
    }

    
  }

}