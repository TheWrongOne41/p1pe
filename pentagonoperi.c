#include <stdio.h>

int main ()
{
  int lado,peri;
  printf("Introduzca un lado del pentagono: ");
  scanf("%d",&lado);

  peri=lado*5;

  printf("El perimetro de su pentagono seria %d\n",peri);
  return 0;
}
