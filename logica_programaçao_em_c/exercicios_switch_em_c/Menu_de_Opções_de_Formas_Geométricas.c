
#include <stdio.h>

int main()
{
    float base, altura;
    float lado;
    float raio;
    float pi = 3.14;
    int opcao;
    double resultado1, resultado2, resultado3;
    
    printf("Menu de Opções de Formas Geométricas\n\n");
    printf("1 - Calcular área do quadrado\n\n");
    printf("2 - Calcular área do triângulo\n\n");
    printf("3 - Calcular área do círculo\n\n");
    printf("4 - Sair\n\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1:
            printf("Digite o valor do lado do quadrado: ");
            scanf("%f", &lado);
            resultado1 = lado * lado ;
            printf("A área desse quadrado eh: %2.f", resultado1);
            break;
            
        case 2:
            printf("Digite o valor da base: ");
            scanf("%f", &base);
            printf("Digite o valor da altura: ");
            scanf("%f", &altura);
            resultado2 = (base * altura) / 2;
            printf("A área desse triangulo eh: %2.f", resultado2);
            break;
            
        case 3:
            printf("Digite o valor do raio: ");
            scanf("%f", &raio);
            resultado3 = (raio * raio) * pi;
            printf("A área desse circulo eh: %2.f", resultado3);
            break;
            
        case 4:
            printf("Saindo...");
            break;
            
        default:
            printf("Erro!!!");
        
    }
    
    return 0;
}