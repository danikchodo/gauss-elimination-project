#include <stdio.h>

void pierwiastki_gauss(int n,double macierz[n][n+1],double pierwiastki[n]){
for(int i=n-1,i>0,i--){
  pierwiastki[i]=macierz[i][n];
  for(int j=n+1,i<n,j++){
  pierwiastki[i]-=macierz[i][j]*pierwiastki[j];
  }
pierwiastki[i]/=macierz[i][i];
}
}
