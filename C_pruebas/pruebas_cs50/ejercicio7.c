// Usar una variable float para representar el nivel de un tanque (0 a 100) mostrar secuencia de llenado con un bucle while 

#include <stdio.h>

int main(){
    float nivel = 0.0;
    while (nivel <= 100.00)
    {
        for(nivel; nivel <= 100.00; nivel += 10.00){
            printf("\nEl tanque se esta llenando, ahorita tiene %.2f litros\n", nivel);
        }
    }
    return 0;
}
