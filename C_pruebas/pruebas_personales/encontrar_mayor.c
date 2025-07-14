//Condicionales
//Encontrar mayor de 3 numeros

#include <stdio.h>

int main(){
    int n1,n2,n3;
    printf("Ingrese el primer numero: \n");
    scanf("%i", &n1);
    printf("\nIngrese el segundo numero: \n");
    scanf("%i", &n2);
    printf("\nIngrese el tercer numero: \n");
    scanf("%i", &n3);

    if (n1>n2 && n1>n3){
        printf("\nEl numero mayor es: %i", n1);
    }
    else if (n2 > n1 && n2 > n3){
        printf("\nEL numero mayor es: %i", n2);
    }
    else{
        printf("\nEl numero mayor es: %i", n3);
    }
    return 0;
}       