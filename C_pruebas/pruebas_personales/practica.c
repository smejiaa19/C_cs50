#include <stdio.h>

int main(){
    int i, j, tabla = 2, max = 5;
    for(i = 1; i <= tabla; i++){ // Este ciclo for se encarga de la cantidad de tablas que vamos a usar
        for(j = 1; j <= max; j++){ // Este ciclo for se encarga de la cantidad de numeros dentro de la tabla de mult
            printf("%i x %i = %i\n",i,i, i * j);
        } 
        printf("\n");
    }
    return 0;
}