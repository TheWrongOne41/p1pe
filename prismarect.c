#include <stdio.h>

int main ()
{
  int largo,ancho,altura,vol;
  printf("Introduzca la altura del prisma rectangular: ");
  scanf("%d",&altura);
  printf("Introduzca el largo del prisma: ");
  scanf("%d",&largo);
  printf("Introduzca el ancho del prisma: ");
  scanf("%d",&ancho);

  vol=altura*largo*ancho;

  printf("El volumen de este prisma rectangular es %d\n",vol);
  return 0;
}
