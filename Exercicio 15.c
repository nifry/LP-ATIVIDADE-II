#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main () {

int opcao;
    float valor; 
    float resultado;

    while (1) {
        printf("\nEscolha uma op��o de conversão:\n");
        printf("1. Converter quilometros para milhas\n");
        printf("2. Converter Celsius para Fahrenheit\n");
        printf("0. Sair do programa\n");
        printf("Op��o: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                printf("Saindo do programa...\n");
                return 0;
                case 1:
                printf("Digite a dist�ncia em quilometros: ");
                scanf("%f", &valor);
                resultado = valor * 0.621371;
                printf("%.2f quilometros � igual a %.2f milhas.\n", valor, resultado);
                break;
                case 2:
                printf("Digite a temperatura em graus Celsius: ");
                scanf("%f", &valor);
                resultado = (valor * 9 / 5) + 32;
                printf("%.2f graus Celsius é igual a %.2f graus Fahrenheit.\n", valor, resultado);
                break;
                default:
                printf("Op��o invalida Escolha uma op��o valida.\n");
                break;
        }
    }
}














