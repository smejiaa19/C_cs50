//Hacer menu interactivo switch
#include <stdio.h>
#include <stdlib.h>

int main(){
    int seq;

    printf("\nQue opcion desea escoger (1: Saludar - 2: Mostrar numero fav - 3: Salir): \n");
    scanf("%i", &seq);

    switch(seq){
        case 1:
        printf("Saludos persona que probo mi codigo");
        break;
        
        case 2:
        printf("Mi numero favorito es no tengo jeje");
        break;

        case 3: 
        exit(0);
        break;

        default:
        printf("Error");
    }
    return 0;
}