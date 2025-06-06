#include <stdio.h>

int main() {
    int opcao;
    float C, F;
    int M, CM;

    printf("\n\nConversor de Unidades:\n\n");
    printf("1 - Converter Celsius para Fahrenheit\n");
    printf("2 - Converter Fahrenheit para Celsius\n");
    printf("3 - Converter Metros para Centímetros\n");
    printf("4 - Sair\n");

    printf("Insira a opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1: {
            printf("Insira o valor em Celsius: ");
            scanf("%f", &C);
            F = (C * 9.0 / 5.0) + 32;
            printf("\nResultado: %.1f °C = %.1f °F\n", C, F);
            break;
        }

        case 2: {
            printf("Insira o valor em Fahrenheit: ");
            scanf("%f", &F);
            C = (F - 32) * 5.0 / 9.0;
            printf("\nResultado: %.1f °F = %.1f °C\n", F, C);
            break;
        }

        case 3: {
            printf("Insira o valor em metros: ");
            scanf("%d", &M);
            CM = M * 100;
            printf("\nResultado: %d m = %d cm\n", M, CM);
            break;
        }

        case 4:
            printf("Saindo...\n");
            break;

        default:
            printf("Opção inválida\n");
            break;
    }

    return 0;
}
