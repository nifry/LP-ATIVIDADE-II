#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main () {

int idioma, idiomaI, idiomaE, idiomaF, op;
    setlocale(LC_ALL, "portuguese");

    printf("1 Ingles\n");
    printf("2 Espanhol\n");
    printf("3 Françes\n");
    printf("\n");

    printf("Escolha um idioma:");
    scanf("%d", &idioma);
    system("cls|| clear");

    printf("1 Ingles\n");
    printf("2 Espanhol\n");
    printf("2 Françes\n");
    printf("\n");

    system("cls|| clear");

    switch (idioma)
    {

    case 1:
        printf("Idioma escolhido é o Ingles:\n");
        printf("welcome!");
        scanf("%d", &idiomaI);
        break;
    case 2:
        printf("Idioma escolhido é o Espanhol:\n");
        printf("sea bienvenido!");
        scanf("%d", &idiomaE);

        break;
    case 3:
        printf("Idioma escolhido é o Françes:\n");
        printf("Accueillir!");
        scanf("%d", &idiomaF);
        break;

    default:
        printf("Opção digitada errada");
        break;
    }

    return 0;
}