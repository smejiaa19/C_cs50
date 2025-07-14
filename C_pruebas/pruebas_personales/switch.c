#include <stdio.h>

int main(){
    char operador;
    double n1,n2;

    printf("\nIngrese la operacion que desea realizar (+ - * /): \n");
    scanf("%c", &operador);

    printf("\nIngrese el primer numero: \n");
    scanf("%lf", &n1);
    printf("\nIngrese el segundo numero: \n");
    scanf("%lf", &n2);

    switch (operador){ //Esta es la sintaxis del switch
        case '+':
        printf("\nLa suma entre %.2lf y %.2lf da como resultado: %.2lf\n", n1, n2, n1+n2);
        break;

        case '-':
        printf("\nLa resta entre %.2lf y %.2lf da como resultado: %.2lf\n", n1, n2, n1-n2);
        break;

        case '*':
        printf("\nLa multiplicacion entre %.2lf y %.2lf da como resultado: %.2lf\n", n1, n2, n1*n2);
        break;

        case '/':
        printf("\nLa division entre %.2lf y %.2lf da como resultado: %.2lf\n", n1, n2, n1/n2);
        break;

        default:
        printf("\nError\n");
    }
    return 0;
}