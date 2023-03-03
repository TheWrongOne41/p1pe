#include <stdio.h>

int main()
{
    int opcion,valor1,valor2;
    printf("Introduzca el numero de arriba del domino: ");
    scanf("%d",&valor1);
    printf("Introduzca el numero de abajo del domino: ");
    scanf("%d",&valor2);
    do{
        printf("Eliga una opcion para realizar del menu: \n");
        printf("[1] Pertenece al domino de doble 6?\n[2] Mula y si pertenece\n[3] Orden\n");
        printf("[4] Renglon de arriba y abajo \n[5] Salir\n");
        scanf("%d",&opcion);
        switch(opcion){
            case 1:
                if(valor1>=0 && valor1<=6){
                    if(valor2>=0 && valor2<=6){
                        printf("Si pertenece.\n");
                    }else{
                        printf("No pertenece.\n");
                    }
                }else{
                    printf("No pertenece.\n");
                }
                break;
            case 2:
                if (valor1==valor2){
                    if ((valor1>=0 && valor1<=6) && (valor2>=0 && valor2<=6)){
                        printf("Si es mula y si pertenece.\n");
                    }else{
                        printf("Si es mula pero no pertenece.\n");
                    }
                }else if ((valor1>=0 && valor1<=6) && (valor2>=0 && valor2<=6)){
                    printf("No es mula pero si pertenece.\n");
                }else{
                    printf("No es mula ni pertenece.\n");
                }
                break;
            case 3:
                if (valor1==valor2){
                    if(valor1==0){
                        printf("No hay anterior. Siguiente: [0|1].\n");
                    }else if(valor1==6){
                        printf("Anterior: [5|6]. No hay siguiente.\n");
                    }else{
                        printf("Anterior: [%d|%d]. Siguiente: [0|%d].\n",valor1-1,valor2,valor2+1);
                    }
                }else if(valor1>valor2){
                    printf("Anterior: [%d|%d]. Siguiente: [%d|%d].\n",valor2-1,valor1,valor2+1,valor1);
                }else if(valor1<valor2){
                    printf("Anterior: [%d|%d]. Siguiente: [%d|%d].\n",valor1-1,valor2,valor1+1,valor2);
                }
                break;
            case 4:
                if (valor1==valor2){
                    if (valor1==6){
                        printf("No hay arriba. No hay abajo.\n");
                    }else{
                        printf("No hay arriba. Abajo: [%d|%d].\n",valor1,valor2+1);
                    }
                }else if(valor1>valor2){
                    if (valor1==6){
                        printf("Arriba: [%d|%d]. No hay abajo.\n",valor2,valor1-1);
                    }else{
                        printf("Arriba: [%d|%d]. Abajo: [%d|%d].\n",valor2,valor1-1,valor2,valor1+1);
                    }
                }else if(valor1<valor2){
                    if (valor1==6){
                        printf("Arriba: [%d|%d]. No hay abajo.\n",valor1,valor2-1);
                    }else{
                        printf("Arriba: [%d|%d]. Abajo: [%d|%d].\n",valor1,valor2-1,valor1,valor2+1);
                    }
                }
                break;
            case 5:
                printf("Gracias, que tenga buen dia!\n");
                break;
            default:
                printf("Error, el numero no esta en el menu.\n");
                break;
        }
    }while(opcion!=5);
    return 0;
}
