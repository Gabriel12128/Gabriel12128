#include <stdio.h>
#include <stdlib.h>
int main() {

int a, b, operador;//a = primeiro numero, b = segundo numero, e as quatro opera��es aritmetica

    printf("-- CALCULADORA --\n\n");
    printf("1. adi�ao\n2. subtra�ao\n3. multiplicao\n4. divisao\n\n");


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
            printf("a subtra��o dos numeros eh: %d\n", a-b);
                break;

        case 3:
            printf("a multiplica��o dos numeros eh: %d\n", a*b);
                break;

        case 4:
            printf("a divis�o dos numeros eh: %d\n", a/b);
                break;

        default:
            printf("a algo de errado\n");
            break;
       }

     system("pause");

     return 0;
}
