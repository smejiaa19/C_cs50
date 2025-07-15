#include <stdio.h>

int main(){
    int cambio;
        
    do
    {
        printf("\nIngrese la cantidad de centavos de cambio: \n");
        scanf("%i", &cambio);
    } while (cambio <= 0);
    
    int centavos25 = cambio / 25;
    cambio %= 25;

    int centavos10 = cambio / 10;
    cambio %= 10;

    int centavos5 = cambio / 5;
    cambio %= 5;

    int centavos1 = cambio;
    int total_centavos = centavos25+centavos10+centavos5+centavos1;
    
    printf("\nEn total se daran %i monedas\n", total_centavos);
    printf("\nDe esas %i monedas, %i de ellas son en centavos de 25\n", total_centavos, centavos25);
    printf("\nDe esas %i monedas, %i de ellas son en centavos de 10\n", total_centavos, centavos10);
    printf("\nDe esas %i monedas, %i de ellas son en centavos de 5\n", total_centavos, centavos5);
    printf("\nDe esas %i monedas, %i de ellas son en centavos de 1\n", total_centavos, centavos1);
    return 0;

}