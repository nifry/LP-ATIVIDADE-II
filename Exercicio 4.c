#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {

setlocale(LC_ALL, "portuguese");

int idade;

printf("Digite sua idade:");
scanf("%d", &idade);

if (idade >=18)
{
    printf("acesso permitido");
}
else
{
    printf("acesso negado");
}

    return 0;
}