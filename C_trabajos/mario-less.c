#include <stdio.h>

int main(){
    int altura, i, j, k; 
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
    
    for (i = 1; i <= altura; i++){
        for(j = 1; j <= altura - i; j++){
            printf(" ");
        }
        for(k = 1; k <= i; k++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}   