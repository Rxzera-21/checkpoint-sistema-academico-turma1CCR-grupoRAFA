#include<stdio.h> // Corecao do #include, ajuste na formatacao

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    float nota1 = 0.0, nota2 = 0.0, media = 0.0; // Falta de ; depois da identificacao das variaveis.
    int opcao;
    int notas_inseridas = 0;
    int media_calculada = 0;
    int situacao_verificada = 0;

    do {
        printf("\n==============================\n");
        printf(" SISTEMA EQUIPE RAFA\n");
        printf("==============================\n");
        printf("1 - Inserir notas\n");
        printf("2 - Calcular media\n");
        printf("3 - Verificar situacao\n");
        printf("4 - Exibir resultado\n");
        printf("5 - Calcular derivada\n");
        printf("6 - Sair\n");
        printf("Escolha uma opcao: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida!\n");
            limparBuffer();
            opcao = 0;
        } else {
            limparBuffer();
        }
        

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
            
            case 3:
                printf("\n--- VERIFICAR SITUACAO ---\n");
                if (media_calculada == 1) {
                    // O if-else obrigatório para classificar o aluno
                    if (media >= 6.0) {
                        situacao_verificada = 1;
                        printf("Situacao avaliada: O aluno atingiu a media.\n");
                    } else {
                        situacao_verificada = 2;
                        printf("Situacao avaliada: O aluno nao atingiu a media.\n");
                    }
                } else {
                    printf("Erro: Voce precisa calcular a media primeiro (Opcao 2).\n");
                }
                break;
            case 4:
                printf("\n--- EXIBIR RESULTADO ---\n");
                if (situacao_verificada != 0) {
                    printf("Nota 1: %.2f\n", nota1);
                    printf("Nota 2: %.2f\n", nota2);
                    printf("Media final: %.2f\n", media);
                    
                    if (situacao_verificada == 1) {
                        printf("Situacao: Aluno aprovado\n");
                    } else {
                        printf("Situacao: Aluno reprovado\n");
                    }
                } else {
                    printf("Erro: Siga as etapas 1, 2 e 3 antes de exibir o resultado final.\n");
                }
                break;

            case 5: {
                printf("\n--- Calcular Derivada ---\n");
                printf("Formato: f(x) = ax^2 + bx + c\n");
                printf("Derivada: f'(x) = 2ax + b\n\n");

                float a, b, c, x;

                printf("Digite o coeficiente a: ");
                scanf("%f", &a);
                limparBuffer();

                printf("Digite o coeficiente b: ");
                scanf("%f", &b);
                limparBuffer();

                printf("Digite o coeficiente c: ");
                scanf("%f", &c);
                limparBuffer();

                printf("Digite o valor de x: ");
                scanf("%f", &x);
                limparBuffer();

                float derivada = 2 * a * x + b;

                printf("\nFuncao   : f(x)  = %.2fx^2 + %.2fx + %.2f\n", a, b, c);
                printf("Derivada : f'(x) = %.2fx + %.2f\n", 2 * a, b);
                printf("Resultado: f'(%.2f) = %.2f\n", x, derivada);
                break;
            }
            case 6:
                printf("\nEncerrando o sistema. Ate logo!\n");
                break;

            default:
                printf("\nOpcao invalida. Por favor, escolha um numero de 1 a 6.\n");
                break;
        }
       
    } while (opcao != 6);  
    return 0;
}