#include <stdio.h>
#include <math.h>

int main ()
{
  float lado1,lado2,angulo1,angulo2,lado3;
  printf("Introduzca el valor del primer lado: ");
  scanf("%f",&lado1);
  printf("Ponga el valor del segundo lado: ");
  scanf("%f",&lado2);
  printf("Introduzca el angulo entre estos lados: ");
  scanf("%f",&angulo1);

  angulo2=angulo1*(3.14/180); 
  lado3=sqrt((pow(lado1,2))+(pow(lado2,2))-(2*(lado1*lado2)*cos(angulo2)));

  printf("El tercer lado del triangulo mide %2.f\n",lado3);
  return 0;
}
