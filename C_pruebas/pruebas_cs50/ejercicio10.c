#include <stdio.h>

int main(){
    int numero, suma=0;
    float promedio;

    for (int i = 1; i<=3; i++){
        printf("\nIngrese el numero %i :\n", i);
        scanf("%i", &numero);
        suma += numero;
    }
    promedio = (float) suma / 3;
    printf("\nEl promedio de los 3 numeros ingresados es: %.2f\n", promedio);
}