#include <stdio.h>

int main(){
    int num;
    printf("Ingrese un numero: \n");
    scanf("%i", &num);
    if (num < 10){
        printf("Verdadero, el numero es menor que 10");
    }
    else{
        printf("Falso, el numero es mayor que 10");
    }
}