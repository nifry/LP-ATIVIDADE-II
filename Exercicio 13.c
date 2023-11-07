#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main () {

  setlocale(LC_ALL, "portuguese");
    int n = 0;
    int gmaior;
    int gmenor;
    int i;

    for (i = 1; i <= 2; i++)
    {
        printf("Digite o %dº número: ", i);
        scanf("%d", &n);
    }
    if (n > gmaior)
    {
        gmaior = n;
    }
    if (n < gmenor)
    {
        gmenor = n;
    }
    printf("\n");
    printf("Maior número: %d\n", gmaior);
    printf("Menor número: %d\n", gmenor);


    return 0;
}