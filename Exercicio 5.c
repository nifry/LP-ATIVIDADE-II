#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main () {

int idioma, idiomaI, idiomaE, idiomaF, op;
    setlocale(LC_ALL, "portuguese");

    printf("1 Ingles\n");
    printf("2 Espanhol\n");
    printf("3 Fran�es\n");
    printf("\n");

    printf("Escolha um idioma:");
    scanf("%d", &idioma);
    system("cls|| clear");

    printf("1 Ingles\n");
    printf("2 Espanhol\n");
    printf("2 Fran�es\n");
    printf("\n");

    system("cls|| clear");

    switch (idioma)
    {

    case 1:
        printf("Idioma escolhido � o Ingles:\n");
        printf("welcome!");
        scanf("%d", &idiomaI);
        break;
    case 2:
        printf("Idioma escolhido � o Espanhol:\n");
        printf("sea bienvenido!");
        scanf("%d", &idiomaE);

        break;
    case 3:
        printf("Idioma escolhido � o Fran�es:\n");
        printf("Accueillir!");
        scanf("%d", &idiomaF);
        break;

    default:
        printf("Op��o digitada errada");
        break;
    }

    return 0;
}