#include <stdio.h>

int main(){
    int contador;
    double num, suma;
    for (contador = 1; contador <= 4; contador ++){
        printf("\nIngrese el numero %i :\n", contador);
        scanf("%lf", &num);
        
        if (num < 0.0){
            break;
        }
        
        suma += num;
    }
    printf("\nLa suma de los numeros da: %.2lf\n", suma);
    return 0;
}