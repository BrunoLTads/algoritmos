/*

Considere um array A de n números naturais Ai e s um valor natural. Escreva um algoritmo que verfique quantos
pares de elementos em A cuja soma seja s existem.
O algoritmo deve retornar um valor inteiro, a quantidade de pares cuja soma seja s.


*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[] = {9, 5, 8, 2, 1, 3, 5, 9, 4, 1};
    int s;
    scanf("%d", &s);
    int i;
    int soma; // diferença
    int qtd_repeticao = 0;
    int tamanho = sizeof(A) / sizeof(A[0]);

    for (i = 0; i < tamanho - 1; i++){
        int j = i + 1; // número seguinte
        soma = abs(A[i] + A[j]);
        

        if (s == soma){
            qtd_repeticao = qtd_repeticao + 1;
        }
    }

    printf("%d", qtd_repeticao);
}




