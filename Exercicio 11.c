#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main () {

etlocale(LC_ALL, "portuguese");

    char codgodeacessosalvo[200] = "senai123";
    char codgodeacesso[200];

    while (1)
    {
        
        printf("Digite seu c�digo de acesso: ");
        gets(codgodeacesso);
        printf("\n");

        
        if (strcmp(codgodeacesso, codgodeacessosalvo) == 0)
        {
            printf("C�digo de acesso correto\n");
            printf("Seja bem-vindo\n");
            break;
        }
        else
        {
            printf("C�digo de acesso incorreto\n");
            printf("Acesso negado\n");
            printf("\n");
        }
    }

    return 0;
}