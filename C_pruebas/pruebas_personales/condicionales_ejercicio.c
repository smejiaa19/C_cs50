#include <stdio.h>

int main(){
    int nota;
    printf("Ingrese una nota: \n");
    scanf("%i", &nota);
    
    if (nota > 90){
        printf("\nEl estudiante es excelente");
    }
    else if (nota > 75){
        printf("\nEl estudiante es muy bueno");
    }
    else if (nota > 51){
        printf("\nAprobado");
    }
    else{
        printf("\nNo esta aprobado");
    }
    return 0;
}