#include <stdio.h>
#include "macierz.h"
#include "gauss.h"
#include "pierwiastki.h"

int main(){
  int n=3;
double macierz[3][4]={
{1,1,1,6},
{2,-1,1,3},
{1,2,-1,1}
};
double pierwiastki[3];
eliminacja_gauss(n,macierz);
pierwiastki_gauss(n,macierz,pierwiastki);
printf("pierwiastki ukladu rownan\n");
for(int i=0;i<n;i++){
  printf("x%d=%8.2f\n",i+1,pierwiastki[i]);}
return 0;
}
