#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Função
double desviopadrao(double *v, int n);
//Main
int main(void){
double a[3] = {1.55,1.70,1.80},b[5]= {8.91,55.22,99.17,38.27,1.99}, c[5] = {123.332,456.433,234.675,345.888,675.439},Ex1,Ex2,Ex3,Teste1;
//Exemplos
Ex1 = desviopadrao(a, 3);
printf("Resultado do exemplo = %lf\n",Ex1);
Ex2 = desviopadrao(b, 5);
printf("Resultado do exemplo = %lf\n",Ex2);
Ex3 = desviopadrao(c, 5);
printf("Resultado do exemplo = %lf\n",Ex3);
//Teste de entrada
int x, y;
printf("Quantidade de números:");
scanf("%d",&x);
y = x-1;
double d[y];
for (int h = 0; h<x;h++){
printf("Número %d = ",(h+1));
scanf("%lf",&d[h]);
}
Teste1 = desviopadrao(d, x);
printf("Resultado do teste = %lf\n",Teste1);
return 0;
}
//Função
double desviopadrao(double *v, int n){
double M = 0,std = 0;
for (int i = 0; i<n;i++){
M += v[i];
}
M /=n;
for (int i = 0; i<n;i++){
std += pow((v[i]-M),2);
}
std = sqrt(std/(n-1));
return std;
}
