#include <stdio.h>

int main()
{
    int opcion,lado1,lado2,lado3,altura;
    float res;
    do{
        printf("Eliga una opcion para realizar del menu: \n");
        printf("[1] Area de Triangulo \n[2] Perimetro de Triangulo \n[3] Tipo de triangulo\n[4] Salir\n");
        scanf("%d",&opcion);
        switch(opcion){
            case 1:
                printf("Introduzca la medida de la base del triangulo: ");
                scanf("%d",&lado1);
                printf("Introduzca la medida de la altura: ");
                scanf("%d",&altura);
                res=(lado1*altura)/2;
                printf("El triangulo tiene un area de %.2f.\n",res);
                break;
            case 2:
                printf("Introduzca un lado del triangulo equilatero: ");
                scanf("%d",&lado1);
                res=lado1*3;
                printf("El perimetro de este triangulo es %.2f.\n",res);
                break;
            case 3:
                printf("Introduzca el primer lado del triangulo: ");
                scanf("%d",&lado1);
                printf("Introduzca el segundo lado: ");
                scanf("%d",&lado2);
                printf("Introduzca el tercero: ");
                scanf("%d",&lado3);
                if (lado1==lado2 && lado2==lado3 && lado3==lado1){
                    printf("Su triangulo es equilatero.\n");
                }else if (lado1==lado2 || lado1==lado3 || lado2==lado3){
                    printf("Su triangulo es isoceles.\n");
                }else{
                    printf("Su triangulo es escaleno.\n");
                }
                break;
            case 4:
                printf("Gracias, que tenga buen dia!\n");
            default:
                printf("Error, el numero no esta en el menu.\n");
                break;
        }
    }while(opcion!=4);
    return 0;
}
