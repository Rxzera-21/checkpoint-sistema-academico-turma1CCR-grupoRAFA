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

        switch (opcao) {
            case 1:
                printf("\n--- INSERIR NOTAS ---\n");
                printf("Digite a primeira nota: ");
                scanf("%f", &nota1);
                
                printf("Digite a segunda nota: ");
                scanf("%f", &nota2);
                
                notas_inseridas = 1; // Registra que as notas foram inseridas
                media_calculada = 0; // Reseta os status seguintes caso as notas sejam alteradas
                situacao_verificada = 0;
                printf("Notas registradas com sucesso!\n");
                break;

            case 2:
                printf("\n--- CALCULAR MEDIA ---\n");
                if (notas_inseridas == 1) {
                    media = (nota1 + nota2) / 2; // Correção dos parênteses aplicada
                    media_calculada = 1;
                    printf("Media calculada com sucesso!\n");
                } else {
                    printf("Erro: Voce precisa inserir as notas primeiro (Opcao 1).\n");
                }
                break;

    return 0;
}