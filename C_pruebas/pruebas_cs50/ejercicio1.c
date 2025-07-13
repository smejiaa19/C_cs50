#include <stdio.h>

int main(){
    int x;
    int y;
    printf("Ingrese el primer numero: \n");
    scanf("%i", &x);
    printf("Ingrese el segundo numero: \n");
    scanf("%i", &y);

    int suma = x + y;
    int resta = x - y;
    int mult = x * y;
    float div = (float)x / y;

    printf("El resultado de la suma es: %i\n", suma);
    printf("El resultado de la resta es: %i\n", resta);
    printf("El resultado de la multiplicacion es: %i\n", mult);
    printf("El resultado de la divisiones: %.2f\n", div);
    return 0;
}