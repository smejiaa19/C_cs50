// Solicitar al usuario un numero entero positivo n. Usar bucles anidados para imprimir un cuadrado de n x n usando caracter *

#include <stdio.h>

int main(){
    int n;
    printf("De que medidas desea su cuadrado: ");
    scanf("%i", &n);

    for (int filas = 1; filas <= n; filas++){
        for (int imprime = 1; imprime <= n; imprime++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}