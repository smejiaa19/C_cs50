//Pedir una cantidad de dias, luego calcular cuantas semanas tienen esos dias y cuantos dias faltan para completar otra semana

#include <stdio.h>

int main(){
    int cant_dias, sobrante;
    float cant_semanas;

    printf("\nIngrese la cantidad de dias: \n");
    scanf("%i", &cant_dias);

    printf("\nEn esa cantidad de dias hay %.0f semanas\n", cant_semanas=cant_dias/7);
    printf("\nSobran %i cantidad de dias\n", sobrante=cant_dias%7);

    return 0;
}