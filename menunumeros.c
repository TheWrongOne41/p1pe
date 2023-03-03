#include <stdio.h>
#include <math.h>

int main()
{
    int opcion,num1,num2,parimp,pot,raiz;
    do{
        printf("Eliga una opcion para realizar del menu: \n");
        printf("[1] Par o impar \n[2] Potencia \n[3] Raiz cuadrada\n[4] Salir\n");
        scanf("%d",&opcion);
        switch(opcion){
            case 1:
                printf("Introduzca un numero: ");
                scanf("%d",&num1);
                parimp=num1%2;
                if (parimp==0){
                    printf("El numero es par.\n");
                }else{
                    printf("El numero es impar.\n");
                }
                break;
            case 2:
                printf("Introduzca un numero: ");
                scanf("%d",&num1);
                printf("Introduzca a que potencia elevarlo: ");
                scanf("%d",&num2);
                pot=pow(num1,num2);
                printf("%d elevado a %d es igual a %d.\n",num1,num2,pot);
                break;
            case 3:
                printf("Introduzca un numero: ");
                scanf("%d",&num1);
                raiz=sqrt(num1);
                printf("La raiz cuadrada de %d es %d.\n",num1,raiz);
                break;
            case 4:
                printf("Gracias, que tenga buen dia!\n");
                break;
            default:
                printf("Error, el numero no esta en el menu.\n");
                break;
        }
    }while(opcion!=4);
    return 0;
}
