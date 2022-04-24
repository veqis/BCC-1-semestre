#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

void DigitarTabela(char tabuleiro[3][3]);
void Jogador1(char tabuleiro[3][3]);
void Jogador2(char tabuleiro[3][3]);
int verifica(char tabuleiro[3][3]);

int main(void)
{
    char tabuleiro[3][3] = {'-','+','-','+','=','+','-','+','-'};
    int ganhou;
    
    do
    {
        DigitarTabela(tabuleiro);
        Jogador1(tabuleiro);
        verifica(tabuleiro);

        DigitarTabela(tabuleiro);
        Jogador2(tabuleiro);
        verifica(tabuleiro);
        

    } while (ganhou==FALSE);
    
    
    return 0;
}

int verifica(char tabuleiro[3][3])
{
    int ganhou;

    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2])
        {
           if (tabuleiro[i][0] == 'o')
           {
               printf("Jogador 1 ganhou");
               ganhou = TRUE;
           }
           else
           {
               printf("Jogador 2 ganhou");
               ganhou = TRUE;
           }
           
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i])
        {
            if (tabuleiro[i][0] == 'o')
           {
               printf("Jogador 1 ganhou");
               ganhou = TRUE;
           }
           else
           {
               printf("Jogador 2 ganhou");
               ganhou = TRUE;
           }
        }
        
    }
    return ganhou;
}

void Jogador1(char tabuleiro[3][3])
{
    int linha = 0, coluna = 0, entrada;

    do
    {
        do
        {
            printf("Em qual linha deseja jogar: ");
            scanf("%d", &linha);
            
            if (linha > 2 || linha < 0)
            {
                printf("Entrada invalida, tente novamente\n");
            }   
        } while (linha > 2 || linha < 0);
        
        do
        {
            printf("Em qual coluna deseja jogar: ");
            scanf("%d", &coluna);
            
            if (coluna > 2 || coluna < 0)
            {
                printf("Entrada invalida, tente novamente\n");
            }
            
        } while (coluna > 2 || coluna < 0);

        if (tabuleiro [linha] [coluna] == 'x' || tabuleiro [linha] [coluna] == 'o')
        {
            printf("\nVoce nao pode jogar nessa casa\n");;
        }
        else
        {
            tabuleiro [linha] [coluna] = 'o';
        }
    } while (tabuleiro [linha] [coluna] == 'x'); 
}

void Jogador2(char tabuleiro[3][3])
{
    int linha = 0, coluna = 0, entrada;

    do
    {
        do
        {
            printf("Em qual linha deseja jogar: ");
            scanf("%d", &linha);
            
            if (linha > 2 || linha < 0)
            {
                printf("Entrada invalida, tente novamente\n");
            }   
        } while (linha > 2 || linha < 0);
        
        do
        {
            printf("Em qual coluna deseja jogar: ");
            scanf("%d", &coluna);
            
            if (coluna > 2 || coluna < 0)
            {
                printf("Entrada invalida, tente novamente\n");
            }
            
        } while (coluna > 2 || coluna < 0);

        if (tabuleiro [linha] [coluna] == 'o' || tabuleiro [linha] [coluna] == 'x')
        {
            printf("\nVoce nao pode jogar nessa casa\n");
        }
        else
        {
            tabuleiro [linha] [coluna] = 'x';
        }
    } while (tabuleiro [linha] [coluna] == 'o'); 
}

void DigitarTabela(char tabuleiro[3][3])
{
    printf("\n\n");
    
    printf("     0");
    printf("   1");
    printf("   2");        
    printf("\n0  |");
    for (int i = 0; i < 3; i++)
    {
        printf(" %c |", tabuleiro[0][i]);
    }
    
    printf("\n1  |");
    for (int i = 0; i < 3; i++)
    {
        printf(" %c |", tabuleiro[1][i]);
    }

    printf("\n2  |");
    for (int i = 0; i < 3; i++)
    {
        printf(" %c |", tabuleiro[2][i]);
    }

    printf("\n");
}