#include "stdio.h"

int main() {
    float nota1, nota2, media; // Falta de ; depois da identificacao das variaveis.

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2); // Falta do & no scanf da nota2.

    media = nota1 + nota2 / 2; // Falta dos parenteses no calculo da meta, sem eles a ordem das operacoes feitas muda.

    if (media >= 6) { // Uso de = (atribuição) em vez de >= (comparação) no if
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}