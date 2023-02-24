#include <stdio.h>

int main()
{
    int num, cont,res;
    printf("Entre un numero para determinar sus factores: ");
    scanf("%d",&num);
    printf("Los factores de %d son:\n",num);
    for (cont=1;cont<=num;cont++){
        res=num%cont;
        if(res==0){
            printf("%d, ",cont);
        }
    }
    return 0;
}
