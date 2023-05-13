#include <stdio.h>
#include "matematicas.h"
#define MAX 255

int main()
{
    double base, exponente,datos[MAX];
    int opc,m,n;
    do{
        printf("Elige una opcion: \n[1] Potencia \n[2] Sumatoria \n[3] Multiplicatoria");
        printf("\nPresione otro numero para salir. ");
        scanf("%d",&opc);
        switch(opc){
            case 1:
                printf("Añade base: ");
                scanf("%lf",&base);
                printf("Añade exponencial: ");
                scanf("%lf",&exponente);
                potencia(base,exponente);
                break;
            case 2:
                printf("Introduzca el limite inferior: ");
                scanf("%d",&n);
                printf("Introduzca el limite superior: ");
                scanf("%d",&m);
                sumatoria(m,n,&datos[m-n]);
                break;
            case 3:
                printf("Introduzca el limite inferior: ");
                scanf("%d",&n);
                printf("Introduzca el limite superior: ");
                scanf("%d",&m);
                multiplicatoria(m,n,&datos[m-n]);
                break;
            default:
                printf("¡Que tenga buen dia!");
                break;
        }
    }while(opc>0 && opc<4);
    return 0;
}
