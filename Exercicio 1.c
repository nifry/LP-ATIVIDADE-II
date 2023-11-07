#include <stdio.h>
#include<stdlib.h>
#include <locale.h>

int main () {

int temperatura;
   
    setlocale(LC_ALL, "portuguese");

    printf("Digite a temperatura:");
    scanf("%d",&temperatura);

    if (temperatura > 25)
    {
        printf("O clima está ensolarado.");
    }
    else if (temperatura >= 15)
    {
        printf("O clima hoje está nublado.");
    }
    else
    {
        printf("O clima está chuvoso.");
    }

    return 0;
}