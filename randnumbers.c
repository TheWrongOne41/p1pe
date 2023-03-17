#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(){
    time_t t1;
    int num,i,j,aleat;
    srand ((unsigned) time (&t1));
    num=(rand () % 15)+5;
    printf("Generando %d numeros\n", num);
    for(i=1;i<=num;i++){
        aleat=(rand()%29)+1;
        printf("%d\t",aleat);
        for(j=1;j<=aleat;j++){
            printf("$");
        }
        printf("\n");
    }
    return 0;
}
