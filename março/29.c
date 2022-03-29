#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero=0, fatorial=0;
    printf("digite o numero: ");
    scanf("%i", &numero);
    fatorial=numero;
    for (int i = 1; i < numero-1; i++)
    {
        fatorial=fatorial*(numero-i);
    }
    printf("o fatorial e: %i", fatorial);

    return 0;
}
