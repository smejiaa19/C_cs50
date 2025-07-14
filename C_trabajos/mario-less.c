#include <stdio.h>

int main(){
    int altura; 
    while (1){
        printf("\nIngrese la altura de la piramide: ");
        scanf("%i", &altura);
        if (altura <= 0){
            printf("La altura debe ser positiva");
        }
        else{
            break;
        }
    }
        
    return 0;
}   