/*

Considere um array A de n números naturais Ai. Escreva um algoritmo que determine a maior diferença absoluta um par de elementos consecutivos da lista.
O algoritmo deve retornar o valor da diferença.

Exemplo: Para o array A = [9, 5, 8, 2, 1, 3, 5, 9, 4, 1], onde os índice são numerados de 0 a 9, da esquerda para
a direita, a maior diferença absoluta é 6, obtida a partir dos elementos consecutivos 8 e 2, nos índice 2 e 3,
respectivamente.

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[] = {9, 5, 8, 2, 1, 3, 5, 9, 4, 1};
    int i;
    int dif; // diferença
    int maior_dif = 0; // maior diferença
    int tamanho = sizeof(A) / sizeof(A[0]);

    for (i = 0; i < tamanho - 1; i++){
        int j = i + 1; // número seguinte
        dif = abs(A[i] - A[j]);
        if (maior_dif < dif){
            maior_dif = dif;
        }
    }

    printf("%d", maior_dif);
}
