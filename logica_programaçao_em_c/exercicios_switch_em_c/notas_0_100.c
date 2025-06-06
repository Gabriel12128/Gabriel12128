#include <stdio.h>

int main(){

    int nota = 0;
    int opcao;

    printf("insira a nota: ");
    scanf("%d", &nota);

    switch(nota /10){
    case 10:
        printf("exelente");
        break;
    case 9:
        printf("exelente");
        break;
    case 8:
        printf("bom");
        break;
    case 7:
        printf("bom");
        break;
    case 6:
        printf("Regular");
        break;
    case 5:
        printf("regular");
        break;
    case 4:
        printf("insuficiente");
        break;
    case 3:
        printf("insuficiente");
        break;
    case 2:
        printf("insuficiente");
        break;
    case 1:
        printf("insuficiente");
        break;
    case 0:
        printf("insuficiente");
        break;
    default:
        printf("numero invalido");

    }

    return 0;

}
