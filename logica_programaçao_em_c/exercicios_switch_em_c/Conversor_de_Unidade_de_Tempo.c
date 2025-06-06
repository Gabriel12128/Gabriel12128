
#include <stdio.h>

int main()
{
    int segundos;
    int minutos;
    int horas;
    int dias;
    int opcao;
    
    printf("Conversor de Unidade de Tempo\n\n");
    printf("1 - Minutos\n\n");
    printf("2 - horas\n\n");
    printf("3 - Dias\n\n");
    printf("4 - Sair\n\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);
    
    minutos = segundos / 60;
    horas = segundos / 3600;
    dias = segundos / 86400;
    
    switch(opcao){
        case 1:
            printf("Digite o valor em segundos: ");
            scanf("%d", &segundos);
             minutos = segundos / 60;
            printf("O valor em minutos de %d Segundos eh: %d", segundos, minutos);
            break;
            
        case 2:
            printf("Digite o valor em segundos: ");
            scanf("%d", &segundos);
             horas = segundos / 3600;
            printf("O valor em horas de %d Segundos eh: %d", segundos, horas);
            break;
            
        case 3:
            printf("Digite o valor em segundos: ");
            scanf("%d", &segundos);
             dias = segundos / 86400;
            printf("O valor em dias de %d Segundos eh: %d", segundos, dias);
            break;
            
        case 4:
            printf("Saindo...");
            break;
            
        default:
            printf("Erro!!!");
        
    }
    
    return 0;
}