#include <stdio.h>
#include <stdlib.h>
int main() {

int a, b, operador;//a = primeiro numero, b = segundo numero, e as quatro operações aritmetica

    printf("-- CALCULADORA --\n\n");
    printf("1. adiçao\n2. subtraçao\n3. multiplicao\n4. divisao\n\n");


    printf("insira o primeiro numero: \n");
    scanf("%d", &a);//armazena o valor do primeiro numero

    printf("insira o operador( + | - | * | / ): \n");
    scanf("%d", &operador);//armazena o sinal do operador

    printf("insira o segundo numero: \n");//armazena o valor do segundo numero
    scanf("%d", &b);

         switch(operador){
        case 1:
            printf("a soma dos numeros eh: %d\n", a+b);
                break;

        case 2:
            printf("a subtração dos numeros eh: %d\n", a-b);
                break;

        case 3:
            printf("a multiplicação dos numeros eh: %d\n", a*b);
                break;

        case 4:
            printf("a divisão dos numeros eh: %d\n", a/b);
                break;

        default:
            printf("a algo de errado\n");
            break;
       }

     system("pause");

     return 0;
}
