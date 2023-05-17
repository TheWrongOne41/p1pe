void buscar(char c, char *cadena){
    int i,x=-1;
    for(i=0;i<strlen(cadena);i++){
        if(c==cadena[i]){
            printf("La primera instancia de %c en la cadena es la posicion %d",c,i);
            i=strlen(cadena);
            x++;
        }
    }
    if(x<0){
        printf("%d",x);
    }
}
