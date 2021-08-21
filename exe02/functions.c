
#include "functions.h"

int menor(int v[], int n){

    int n_menor = v[0];
    for (int pos=0; pos<n; pos++)
      if (n_menor>v[pos])
       n_menor=v[pos];

    return n_menor;
}
