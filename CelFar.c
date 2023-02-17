#include <stdio.h>

int main (){
  float far, cel;

  printf("Indica los fahrenheit: ");
  scanf("%f",&far);

  cel=5*(far-32)/9;

  printf("%.2f en fahrenheit seria equivalente a %.2f celsius",far,cel);
  return 0;
}
