#include<stdio.h> // Corecao do #include, ajuste na formatacao

int main() {
    float nota1, nota2, media; // Falta de ; depois da identificacao das variaveis.
    int opcao;
    int notas_inseridas = 0;
    int media_calculada = 0;
    int situacao_verificada = 0;

    do {
        printf("\n==============================\n");
        printf(" SISTEMA EQUIPE XYZ\n");
        printf("==============================\n");
        printf("1 - Inserir notas\n");
        printf("2 - Calcular media\n");
        printf("3 - Verificar situacao\n");
        printf("4 - Exibir resultado\n");
        printf("5 - Calcular derivada\n");
        printf("6 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

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