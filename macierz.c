#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void macierz_gauss(int n,double macierz[n][n+1])
{
  for(int i=0,i<n,i++){
    for(int j=0,j<=n,j++){
    printf("%8.2f ",macierz[i][j]);
    }
    printf("\n");
    }
    printf("\n");
    }
