#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main () {

 setlocale(LC_ALL, "portuguese");
    int numero1;
    int numero2;
    int i;
    int conta;
    int resultado;

    printf("Digite o 1° número: ");
    scanf("%d", &numero1);
    printf("Digite o 2° número: ");
    scanf("%d", &numero2);

    system("cls|| clear");

    printf("1 PARA SOMAR\n");
    printf("2 PARA SUBTRAIR\n");
    printf("\n");
    printf("ESCOLHA A Opção DE Operação: ");
    scanf("%d", &conta);

    switch (conta)
    {
    case 1:
        resultado = numero1 + numero2;
        printf("resultado da soma: %d", resultado);
        break;
    case 2:
        resultado = numero1 - numero2;
        printf("resultado da subtração: %d", resultado);
        break;

    default:
        printf("Opção invalida. \n");
        break;
    }

















    return 0;
}