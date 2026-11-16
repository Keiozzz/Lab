/*
Nombre del archivo: trap.c
Funcion: Estimar ingetral ente a y b mediante el metodo del trapecio
Argumentos de entrada: a, b, n, h
*/
#include "trap.h"

double Funcion_x(double x){
    return 4.00/(1.00 + x*x);
}

double Trap(double a, double b, double n, double h){
    double s = (Funcion_x(a)+Funcion_x(b))/2;
    for(int k = 1;k<=n-1;k++){
        s=s+Funcion_x(a+k*h);
    }
    return h*s;
}