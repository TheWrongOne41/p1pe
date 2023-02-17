#include <stdio.h>

int main()
{
    int edad, numeroDeSuerte;
    printf("Escribe tu edad: ");
    scanf("%d", &edad);
    printf("Escribe tu número de la suerte: ");
    scanf("%d", &numeroDeSuerte);
    
    printf("Eres muy joven a tus apenas %d años.\n",edad);
    printf("El %d es un número suertudo.\n",numeroDeSuerte);
    return 0;
}
