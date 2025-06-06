#include <stdio.h>

int main() {

    int dias;

    printf("\ncoloque um numero de (1 - 7): ");
    scanf("%d", &dias);

    switch(dias){
    case 1:
        printf("Domingo\n");
        break;

    case 2:
        printf("Segunda-feira\n");
        break;

    case 3:
        printf("Terça-feira\n");
        break;

    case 4:
        printf("Quarta-feira\n");
        break;

    case 5:
        printf("Quinta-feira\n");
        break;

    case 6:
        printf("Sexta-feira\n");
        break;

    case 7:
        printf("Sabado\n");
        break;

    default:
        printf("Opção invalida\n");
        break;
    }

    return 0;

}
