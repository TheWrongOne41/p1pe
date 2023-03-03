#include <stdio.h>

int main()
{
    int opcion,valor,palo;
    printf("Introduzca el valor de la carta (1-13): ");
    scanf("%d",&valor);
    printf("Introduzca el palo de la carta \n[1]Corazon\n[2]Diamante\n[3]Trebol\n[4]Espada\n");
    scanf("%d",&palo);
    do{
        printf("Eliga una opcion para realizar del menu: \n");
        printf("[1] Pertenece a la baraja?\n[2] Valor de la Carta\n[3] Palo de la carta\n[4] Salir\n");
        scanf("%d",&opcion);
        switch(opcion){
            case 1:
                if (valor>0 && valor<14){
                    if (palo>0 && palo<5){
                        printf("Si pertenece a la baraja.\n");
                    }else{
                        printf("No pertenece a la baraja.\n");
                    }
                }else{
                    printf("No pertenece a la baraja.\n");
                }
                break;
            case 2:
                if (valor==1){
                    printf("Su carta es de valor A.\n");
                }else if (valor>1 && valor<11){
                    printf("Su carta es de valor %d.\n",valor);
                }else if(valor==11){
                    printf("Su carta es de valor J.\n");
                }else if(valor==12){
                    printf("Su carta es de valor Q.\n");
                }else if(valor==13){
                    printf("Su carta es de valor K.\n");
                }
                break;
            case 3:
                if (palo==1){
                    printf("El palo de su carta es de Corazones.\n");
                }else if (palo==2){
                    printf("El palo de su carta es de Diamantes.\n");
                }else if(palo==3){
                    printf("El palo de su carta es de Treboles.\n");
                }else if(palo==4){
                    printf("El palo de su carta es de Espada.\n");
                }
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
