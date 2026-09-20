#include <stdio.h>

int main()
{
    double cena = 0;
    int volba;
    int pokracovat = 1;

    printf("-----------------------------------\n");
    printf("OTVARATE DVERE BARU A VCHADZATE DNU\n");
    printf("-----------------------------------\n");

    printf("1. VYPYTAT SI DRINK\n");
    printf("-------------------\n");

    printf("Vyber si moznost: ");
    scanf("%d", &volba);

    if (volba == 1)
    {
        while (pokracovat == 1)
        {
            printf("\n");
            printf("Vyber si svoj drink:\n");
            printf("--------------------\n");

            printf("1. Vino\n");
            printf("2. Pivo\n");
            printf("3. Nealko\n");
            printf("4. Miesany drink\n");

            printf("Zadaj moznost: ");
            scanf("%d", &volba);

            printf("--------------------\n");

            if (volba == 1)
            {
                printf("Vino stoji 5 EUR\n");
                cena = cena + 5;
            }
            else if (volba == 2)
            {
                printf("Pivo stoji 4 EUR\n");
                cena = cena + 4;
            }
            else if (volba == 3)
            {
                printf("Nealko stoji 3 EUR\n");
                cena = cena + 3;
            }
            else if (volba == 4)
            {
                printf("Miesany drink stoji 7 EUR\n");
                cena = cena + 7;
            }
            else
            {
                printf("Tato moznost nie je na vyber\n");
            }

            printf("--------------------\n");
            printf("Chces este jeden drink?\n");
            printf("1. Ano\n");
            printf("2. Nie\n");

            printf("Vyber si moznost: ");
            scanf("%d", &pokracovat);
        }

        if (cena > 7)
        {
            cena = cena * 0.8;
        }

        printf("--------------------\n");
        printf("Tvoja kompletna suma je %.2f EUR\n", cena);
    }
    else
    {
        printf("Tato moznost nie je na vyber\n");
    }

    return 0;
}