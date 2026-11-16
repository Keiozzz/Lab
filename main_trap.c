/*
Archivo: main_trap.c
Proposito: Calcular integral definida mediaante metodo del trapecio

Entradas: a, b, n
Salida: Estimacion de la integral de f(x) en [a,b]

Compilacion: gcc main_trap.c trap.c -o main_trap
Ejecucion:
./main_trap
*/

#include <stdio.h>
#include "trap.h"

int main(){
    double a,b,h,n;
    printf("Ingrese los valores para:\nInicio intervalo, Final intervalo y  Cantidad de trapecios");
    scanf("%lf %lf %lf",&a,&b,&n);
    while(n<=0)
    {
        printf("Ingrese otro valor para n(mayor que 0)");
        scanf("%lf",&n);
    }
    h = (b-a)/n;
    printf("El area bajo la curva en el intervalo [%lf,%lf] es de aproximadamente %lf",a,b,Trap(a,b,n,h));


}