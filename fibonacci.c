#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int fibonacci(int n);
int iterativo_fibonacci(int n);
int factorial(int n);
int factorial_iterativo(int n);
int main(int argc, char *argv[]){
    int valor = atoi(argv[1]);
    //automatizacion tiempos por valor
    int valores_prueba[]={20,30,40,50,60,70,80,90,50000000};
    double resultados[9][2];

    clock_t tiempo_inicio,tiempo_fin;


    for(int i=0;i<sizeof(valores_prueba)/sizeof(valores_prueba[0]);i++){
        tiempo_inicio=clock();
        iterativo_fibonacci(valores_prueba[i]);
        tiempo_fin=clock();
        resultados[i][0]=(double)(tiempo_fin-tiempo_inicio)/CLOCKS_PER_SEC;
    }
    
    for(int i=0;i<sizeof(valores_prueba)/sizeof(valores_prueba[0]);i++){
        tiempo_inicio=clock();
        factorial_iterativo(valores_prueba[i]);
        tiempo_fin=clock();
        resultados[i][1]=(double)(tiempo_fin-tiempo_inicio)/CLOCKS_PER_SEC;
    }
    
    //impresion de datos obtenidos con iteratividad
    printf("n\tFibonacci \tfacotiral\n");
    for(int i = 0; i < 9; i++){
        printf("%d\t%f\t%f\n", valores_prueba[i], resultados[i][0], resultados[i][1]);
    }
    


    printf("El numero seleccionado es %d\n", valor);
    //escribir valores fibonacci
    printf("El %d numero de fibonacci es; %d\n",valor,fibonacci(valor));
    printf("Con la funcion iterativa el %d valor de fibonacci da: %d\n",valor,iterativo_fibonacci(valor));

    //imprime factoriales
    printf("El factorial de %d con la funcion recursiva da %d\n",valor,factorial(valor));
    printf("El factorial de %d con la funcion iterativa da: %d\n",valor, factorial_iterativo(valor));
    
}

//fibonacci recusrivo
int fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

//fibonacci iterativo
int iterativo_fibonacci(int n){
    int primer_valor=0, segundo_valor=1,fib;
    if(n==0) return 0;
    if(n==1) return 1;
    for(int i=2;i<=n;i++){
        fib = primer_valor +segundo_valor;
        primer_valor = segundo_valor;
        segundo_valor = fib;
    }
    return fib;
}

//factorial recursivo

int factorial(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    return n*factorial(n-1);
}

//factorial iterativo

int factorial_iterativo(int n){
    int actual=1,i;
    for(i=1;i<=n;i++){
        actual = actual*i ;
    }
    return actual;
}