#include <cs50.h>
#include <stdio.h>


int main(void)

{
    int altura, linha , coluna ;
    do
    {
        altura = get_int("Width: ");

    }
    while(altura < 1 || altura > 8);

    for (linha = 1; linha <= altura; linha++)
    {
        for (coluna = altura; coluna  > linha; coluna--)
        {
            printf(" ");
        }
        for (coluna = 1; coluna <= linha; coluna++)
        {
            printf("#");
        }

        printf(" ");

        for (coluna = 1; coluna <= linha; coluna++)
        {
            printf("#");
        }

        printf("\n");

    }







}
