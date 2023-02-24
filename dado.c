#include <stdio.h>
#include <stdlib.h> // para el random
#include <time.h>  // para el time

int main ()
{
    time_t t1;
    int numero,veces,valor,numvec=0;
    printf("Cuantas veces tiraras el dado? ");
    scanf("%d",&veces);
    printf("Cual valor te interesa? ");
    scanf("%d",&valor);
    
    if(valor>6 || valor<0){
        printf("*** Error, su valor no se encuentra en el dado.");
        exit(-1);
    }
    srand ((unsigned) time (&t1));
    for(int i=1;i<=veces;i++){
        numero = (rand () % 5) + 1;
        printf("%d\n", numero);
        if (numero==valor){
            numvec++;
        }
    }
    printf("El %d cayo %d veces",valor,numvec);
    return 0;
}
