#include <stdio.h>

int main ()
{
    int letra=65;
    for(letra=letra;letra<=90;letra++){
        if(letra==65 || letra==69 || letra==73 || letra==79 || letra==85){
            printf("**%c** es una vocal\n",letra);
        }else if (letra==86){
            printf("$$$$$%c$$$$$ con esta letra empieza mi nombre\n",letra);
        }else{
            printf("-%c- es consonante\n",letra);
        }
    }
    return 0;
}
