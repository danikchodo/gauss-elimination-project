#include <stdio.h>
#include "macierz.h"

void eliminacja_gauss(int n,double macierz[n][n+1]){
  for(int i=0;i<n;i++){
    for(int k=i+1;k<n;k++){
    double coef=macierz[k][i]/macierz[i][i];
    for(int j=i;j<=n;j++){
    macierz[k][j]-=coef*macierz[i][j];
    }
}
printf("krok %d\n",j+1);
macierz_gauss(n,macierz);  
}
}
  
