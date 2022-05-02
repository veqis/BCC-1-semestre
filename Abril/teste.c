#include <stdlib.h>
#include <stdio.h>

#define TAMVET 10



int main(void)
{

    int vet[TAMVET];
    vet[0] = 7;
    vet[1] = -1;
    vet[2] = 9;
    vet[3] = 2;
    vet[4] = 0;
    vet[5] = -8;
    vet[6] = 10;
    vet[7] = 22;
    vet[8] = 45;
    vet[9] = 11;
    int aux = 0;
    

    for(int i = 0; i < TAMVET-1; i++)
    {    

        for (int j = i + 1; i < TAMVET; j++)
        {
            if (vet[i] > vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;   
                //printf("%i", vet[0]); 
            }
              
        } 
    }

    for (int i = 0; i < TAMVET; i++)
    {
        printf("%i\n", vet[i]);
        fflush ( stdout );
    }
    

     
    return 0;
}
