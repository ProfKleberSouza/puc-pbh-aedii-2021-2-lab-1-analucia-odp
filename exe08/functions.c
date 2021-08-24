#include "string.h"
#include "functions.h"
#include <stdbool.h>
#include <stdio.h>

bool is_palindromo(char texto[])
{
  return is_palindromo_rec (texto, 0, strlen(texto)-1);
}

bool is_palindromo_rec (char texto[], int posi, int posf)
{
  if (texto[posi] != texto[posf])
  return false;

  if (posi>=posf)
   return true;
  else 
    return is_palindromo_rec(texto, posi+1, posf-1);
}