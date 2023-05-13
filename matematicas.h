void potencia(double base, double exponente){
    double respuesta=1;
    int i;
    for(i=0;i<exponente;i++){
        respuesta=respuesta*base;
    }
    printf("%.2lf elevado al %.2lf es igual a %.2lf\n",base,exponente,respuesta);
}

void sumatoria(int m,int n,double *datos){
    int i,j=n;
    for(i=0;i<m-n;i++){
        datos[i]=j+(j+1);
        printf("%d + %d = %lf\n",j,j+1,datos[i]);
        j++;
    }
}

void multiplicatoria(int m,int n,double *datos){
    int i,j=n;
    for(i=0;i<m-n;i++){
        datos[i]=j*(j+1);
        printf("%d x %d = %lf\n",j,j+1,datos[i]);
        j++;
    }
}
