#include <stdio.h>

int main()
{
    int numeros_positivos = 0;
    int numeros_negativos = 0;
    int ceros = 0;
    for (int contador = 1; contador <= 10; contador ++)
    {
        int n;
        printf("\nIngrese el numero %i: ", contador);
        scanf("%i", &n);
        if (n > 0)
        {
            numeros_positivos ++;   
        }
        else if (n < 0)
        {
            numeros_negativos ++;
        }
        else 
        {
            ceros ++;
        }
    }
    printf("\nAnteriormente se ingresaron %i numeros positivo", numeros_positivos);
    printf("\nAnteriormente se ignresaron %i numeros negativos", numeros_negativos);
    printf("\nAnteriormente se ingresaron %i ceros\n", ceros);
}