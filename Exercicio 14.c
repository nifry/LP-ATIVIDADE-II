#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main () {

setlocale(LC_ALL, "portuguese");

    // VariÃ¡veis
    int numero, par = 0, impar = 0, quantidadegeral = 0, somageral = 0, somapar = 0, somaimpar = 0;
    float mediageral, mediaimpar, mediapar;

    //
    do {
        printf("Digite o %d° número: ", quantidadegeral + 1);
        scanf("%d", &numero);

        if (numero > 0) {
            somageral += numero;
            quantidadegeral++;

            if (numero % 2 == 0) {
                somapar += numero;
                par++;
            } else {
                somaimpar += numero;
                impar++;
            }
        }
    } while (numero > 0);

    // Cast
    mediageral = somageral / (float) quantidadegeral;
    mediapar = somapar / (float) par;
    mediaimpar = somaimpar / (float) impar;

    //
    printf("\nQuantidade de números pares: %d \n", par);
    printf("Quantidade de números immpares: %d \n", impar);
    printf("MÃ©dia dos números pares: %.1f \n", mediapar);
    printf("MÃ©dia dos números impares: %.1f \n", mediaimpar);
    printf("MÃ©dia geral dos números: %.1f \n", mediageral);
















    return 0;
}