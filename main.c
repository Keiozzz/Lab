#include <stdio.h>
#include "promedio.h"
int main(){
    float a,b,c;
    printf("Ingrese los valores que desea promediar\n");
    scanf("%f %f %f",&a, &b, &c);
    printf("El promedio de los 3 valores es: %f",Promedio(a,b,c));
    return 0;
}