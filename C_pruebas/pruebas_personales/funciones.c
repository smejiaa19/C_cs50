#include <stdio.h>

int calculadora(int a, int b);
int main(){
    int n1, n2, resp;
    printf("Ingrese dos numeros: ");
    scanf("%i %i", &n1, &n2);

    resp = calculadora(n1, n2);
    printf("\nresp = %i\n", resp);

    return 0;
}

int calculadora(int a, int b){
    int result; 
    result = a + b;
    return result;
}


