#include <stdio.h>

int main(){
    int limsup,i,resi,total=0;
    printf("Escribe el limite superior: ");
    scanf("%d",&limsup);
    if (limsup>0){
        resi=limsup%2;
        if (resi==0){
            printf("%d\n",limsup);
            total=limsup+total;
            limsup=limsup-1;
        }
        for (i=limsup;i>0;i=i-2){
            printf("%d\n",limsup);
            total=limsup+total;
            limsup=limsup-2;
        }
    }else if(limsup<0){
        resi=limsup%-2;
        if (resi==0){
            printf("%d\n",limsup);
            total=limsup+total;
            limsup=limsup+1;
        }
        for (i=limsup;i<0;i=i+2){
            printf("%d\n",limsup);
            total=limsup+total;
            limsup=limsup+2;
        }
    }
    printf("La suma de los impares son: %d",total);
    return 0;
}
