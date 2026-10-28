#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int fibonacci(int n);
int iterativo_fibonacci(int n);
int factorial(int n);
int factorial_iterativo(int n);
int main(int argc, char *argv[]){
    int valor = atoi(argv[1]);

}

//fibonacci recusrivo
int fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

//fibonacci iterativo
int iterativo_fibonacci(int n){
    int valor1=0, valor2=1, i=0, fib = 0;
    for(i=0;i<=n;i++){
        fib = valor1 + valor2;
        valor1 = fib - 1;
        valor2 = fib -2;
    } 
}

//factorial recursivo

int factorial(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    return factorial(n)*factorial(n-1);
}

//factorial iterativo

int factorial_iterativo(int n){
    int actual,i;
    for(i=1;i<=n;i++){
        actual = actual*i ;
    }
    return actual;
}