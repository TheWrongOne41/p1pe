#include <stdio.h>

int sumar_enteros (int x, int y);
int restar_enteros(int x, int y);

int main()
{
    int x,y,suma,resta;
    printf("Introduzca el primer numero: ");
    scanf("%d",&x);
    printf("Introduzca el segundo numero: ");
    scanf("%d",&y);
    
    suma=sumar_enteros(x,y);
    resta=restar_enteros(x,y);
    
    printf("Su suma seria %d y la resta es %d",suma,resta);
    
    return 0;
}

int sumar_enteros(int x,int y){
    int suma;
    suma=x+y;
    return suma;
}

int restar_enteros(int x, int y){
    int resta;
    resta=x-y;
    return resta;
}
