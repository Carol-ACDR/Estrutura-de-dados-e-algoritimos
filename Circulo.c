#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// Definições de estruturas
typedef struct Ponto{
float X;
float Y;
} Ponto;

typedef struct Circulo{
char Nome[11];
Ponto Centro;
float Raio;
} Circulo;

//Chamadas de cabeçalho

Circulo *criaCirculo(char N[11],float a, float b,float R );
int contem(Circulo *p1,Circulo *p2);

// Main
int main(void){
  Circulo * c1, *c2 ,*c3;
  c1 = criaCirculo ("Circulo01",3.0,4.0,2.0);
  c2 = criaCirculo("Circulo02",3.0,3.0,1.0);
  c3 = criaCirculo("Circulo03",1.0,5.0,1.0);
  printf("%d\n",contem(c1,c2));
  printf("%d\n",contem(c1,c3));
  printf("%d\n",contem(c2,c3));
  free(c1);
  free(c2);
  free(c3);
  return 0;
}

//Funções
Circulo *criaCirculo(char N[11],float a, float b,float R ){
  Circulo *Circ;
  Circ = (Circulo*)malloc(sizeof(Circulo));
  strcpy(Circ->Nome, N);
  Circ->Centro.X = a;
  Circ->Centro.Y = b;
  Circ->Raio = R;

return Circ;
}
int contem(Circulo *p1, Circulo *p2){
  float x1,x2,y1,y2,D,N1,N2;
  x1 = p1->Centro.X;
  x2 = p2->Centro.X;
  y1 = p1->Centro.Y;
  y2 = p2->Centro.Y;
  N1 = x2-x1;
  N2 = y2-y1;
  N1 = pow(N1,2);
  N2 = pow(N2,2);
  D = sqrt((N1+N2));
  if (D+(p2->Raio) > (p1->Raio))
   return 0;
  else
   return 1;
}