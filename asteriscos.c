#include <stdio.h>

int main ()
{
    int i,j,a,b,c,d,e,f,g,h,k,l,m,v,w,x,y=0,z;
    for (i=0;i<4;i++){
        for (j=0;j<10;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for (a=1;a<6;a++){
        for (b=0;b<a;b++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for (c=5;c>0;c--){
        for (d=0;d<c;d++){
            printf(" ");
        }
        for (e=6;e>c;e--){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for (f=1;f<6;f++){
        for (g=5;g>f;g--){
            printf(" ");
        }
        for (h=1-f;h<f;h++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for (k=1;k<6;k++){
        for (l=6;l>k;l--){
            printf(" ");
        }
        for (m=1-k;m<k;m++){
            printf("%d",k);
        }
        printf("\n");
    }
    printf("\n");
    for (w=1;w<6;w++){
        for (x=6;x>w;x--){
            printf(" ");
        }
        for (y=1-w;y<w;y++){
            if(y>0){
                printf("%d",y+1);
            }else{
                printf("%d",-y+1);
            }
        }
        printf("\n");
    }
    return 0;
}
