#include <iostream>
#include <math.h>
#include <stdlib.h> 
using namespace std;
int main() {
  float altura, sombra,angulo, param;
  double resultado;
  printf("Ingrese la altura del edificio en metros:");
 scanf("%f",& altura );
 printf("Ingrese el angulo de inclincion de la sombra:");
 scanf("%f",& param );
  resultado=tan(param*M_PI/180);
 sombra=altura/tan(resultado);
 cout<<"La longitud de la sombra es "<<sombra<<" metros";
}