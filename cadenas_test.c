#include <stdio.h>
#include <string.h>
#include "cadenas.h"
#define MAX 255

int main()
{
    char c,cadena[MAX];
    printf("Ponga una palabra para la cadena: ");
    fgets(cadena,MAX,stdin);
    printf("Ponga un caracter para buscar en la cadena: ");
    scanf("%c",&c);
    buscar(c,cadena);
    return 0;
}
