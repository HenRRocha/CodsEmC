#include <stdio.h>
#include <stdlib.h>

int uni = 0;
int mes_atual = 0;

int print_meses(int comeco, int mes1, int mes2)
{
    int iniciojan = comeco; //controla o inicio da impressão de janeiro
    int iniciofev = 0;
    int semana = 0;
    int auxmes1 = 1;
    int auxmes2 = 1;
    int odia1 = mes1;
    int odia2 = mes2;
    int contador_do_final = 0;
    int cintador2 = 0;

    if (iniciojan == 0)
    { // condições para achar o primeiro dia da semana de feveiro com o primeiro dia de janeiro
        iniciofev = 3;
    }
    if (iniciojan == 1)
    {
        iniciofev = 4;
    }
    if (iniciojan == 2)
    {
        iniciofev = 5;
    }
    if (iniciojan == 3)
    {
        iniciofev = 6;
    }
    if (iniciojan == 4)
    {
        iniciofev = 0;
    }
    if (iniciojan == 5)
    {
        iniciofev = 1;
    }
    if (iniciojan == 6)
    {
        iniciofev = 2;
    }

    if (mes_atual >= 4)
    {
        iniciofev --;
    }
    

    for (int i = 0; i < iniciojan; i++)
    { //imprime os traços de jan
        printf(" -- ");
        semana++;
    }

    for (int i = 0; i < 6; i++)
    { //laço que faço loop para imprimir os meses

        for (int i = 1; i <= odia1; i++)
        { // laço para imprmir janeiro

            if (auxmes1 <= odia1)
            {
                printf(" %.2d ", auxmes1);
                semana++;
                auxmes1++;
            }

            if (semana == 7)
            {
                printf("||");
                break;
            }

            if (auxmes1 > odia1)
            {
                printf(" -- ");
                semana++;
            }
        }

        if (auxmes2 == 1)
        {
            for (int i = 0; i < iniciofev; i++)
            { //imprime os traços fev
                printf(" -- ");
                semana++;
            }
        }

        for (int i = 1; i <= odia2; i++)
        { // laço para imprimir favereiro

            if (auxmes2 <= odia2)
            {
                printf(" %.2d ", auxmes2);
                semana++;
                auxmes2++;
            }

            if (semana == 14)
            {
                printf("|\n|");
                break;
            }

            if (auxmes2 > odia2)
            {
                printf(" -- ");
                contador_do_final++; //variavel para contar quantas casas acaba o mes
                semana++;
            }
        }
        semana = 0;
    }
    uni = contador_do_final; // guardando em uma variavel universal para usar fora do função

    mes_atual++;

    return uni; // retorno com o numero de casas
}

int printAno (int R)
{
    int janday = 31, fevday = 28, marday = 31, abriday = 30, maday = 31, junday = 30;
    int agosday = 31, setday = 30, outday = 31, novday = 30, dezday = 31, julday = 31;
    int R = 5; // entrada temporaria da função
    int U = 0; // variavel que vai guardar o numeoro de casas para usar no proximo mes

    printf("Calendario do ano 0000\n");
    printf("|----------------------------||----------------------------|\n");
    printf("|Janeiro                     ||Favereiro                   |\n");
    printf("|dom seg ter qua qui sex sab ||dom seg ter qua qui sex sab |\n");
    printf("|");
    print_meses(R, janday, fevday);
    printf("----------------------------||----------------------------|\n");
    //  printf("\n\n\n%d\n\n\n", uni);

    if (uni == 14)
    { //condição para imprimir o mes seguinte com o dado retornado da função
        U = 0;
    }
    if (uni == 13)
    {
        U = 1;
    }
    if (uni == 12)
    {
        U = 2;
    }
    if (uni == 11)
    {
        U = 3;
    }
    if (uni == 10)
    {
        U = 4;
    }
    if (uni == 9)
    {
        U = 5;
    }
    if (uni == 8)
    {
        U = 6;
    }
    if (uni == 7)
    {
        U = 7;
    }

    printf("|----------------------------||----------------------------|\n");
    printf("|Março                       ||Abril                       |\n");
    printf("|dom seg ter qua qui sex sab ||dom seg ter qua qui sex sab |\n");
    printf("|");
    print_meses(U, marday, abriday);
    printf("----------------------------||----------------------------|\n");

    if (uni == 14)
    {
        U = 0;
    }
    if (uni == 13)
    {
        U = 1;
    }
    if (uni == 12)
    {
        U = 2;
    }
    if (uni == 11)
    {
        U = 3;
    }
    if (uni == 10)
    {
        U = 4;
    }
    if (uni == 9)
    {
        U = 5;
    }
    if (uni == 8)
    {
        U = 6;
    }
    if (uni == 7)
    {
        U = 7;
    }

    printf("|----------------------------||----------------------------|\n");
    printf("|Maio                        ||Junho                       |\n");
    printf("|dom seg ter qua qui sex sab ||dom seg ter qua qui sex sab |\n");
    printf("|");
    print_meses(U, maday, junday);
    printf("----------------------------||----------------------------|\n");

    if (uni == 14)
    {
        U = 0;
    }
    if (uni == 13)
    {
        U = 1;
    }
    if (uni == 12)
    {
        U = 2;
    }
    if (uni == 11)
    {
        U = 3;
    }
    if (uni == 10)
    {
        U = 4;
    }
    if (uni == 9)
    {
        U = 5;
    }
    if (uni == 8)
    {
        U = 6;
    }
    if (uni == 7)
    {
        U = 7;
    }

    printf("|----------------------------||----------------------------|\n");
    printf("|Julho                       ||Agosto                      |\n");
    printf("|dom seg ter qua qui sex sab ||dom seg ter qua qui sex sab |\n");
    printf("|");
    print_meses(U, julday, agosday);
    printf("----------------------------||----------------------------|\n");

    if (uni == 14)
    {
        U = 0;
    }
    if (uni == 13)
    {
        U = 1;
    }
    if (uni == 12 || 5)
    {
        U = 2;
    }
    if (uni == 11)
    {
        U = 3;
    }
    if (uni == 10)
    {
        U = 4;
    }
    if (uni == 9)
    {
        U = 5;
    }
    if (uni == 8)
    {
        U = 6;
    }
    if (uni == 7)
    {
        U = 7;
    }

    printf("|----------------------------||----------------------------|\n");
    printf("|Setembro                    ||Outubro                     |\n");
    printf("|dom seg ter qua qui sex sab ||dom seg ter qua qui sex sab |\n");
    printf("|");

    print_meses(U, setday, outday);
    printf("----------------------------||----------------------------|\n");

    if (uni == 14)
    {
        U = 0;
    }
    if (uni == 13)
    {
        U = 1;
    }
    if (uni == 12 || 5)
    {
        U = 2;
    }
    if (uni == 11)
    {
        U = 3;
    }
    if (uni == 10)
    {
        U = 4;
    }
    if (uni == 9)
    {
        U = 5;
    }
    if (uni == 8)
    {
        U = 6;
    }
    if (uni == 7)
    {
        U = 7;
    }

    printf("|----------------------------||----------------------------|\n");
    printf("|Novembro                    ||Dezembro                    |\n");
    printf("|dom seg ter qua qui sex sab ||dom seg ter qua qui sex sab |\n");
    printf("|");

    print_meses(U, novday, dezday);
    printf("----------------------------||----------------------------|\n");

    return 0;
}
