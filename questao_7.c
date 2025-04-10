/*

Considere um array A de n números naturais Ai e s um valor natural. Escreva um algoritmo que verfique se existe
um par de elementos em A cuja soma seja s, ou seja,

∃i, j|0 ≤ i < j < |A| =⇒ Ai + Aj = s

onde |A| é a cardinalidade do array A.
O algoritmo deve retornar um valor lógico (verdadeiro ou falso) que determina se tal soma existe.

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int A[] = {9, 5, 8, 2, 1, 3, 5, 9, 4, 1};
    int s;
    scanf("%d", &s);
    int i;
    int soma; // diferença
    bool resultado; // maior diferença
    int tamanho = sizeof(A) / sizeof(A[0]);

    for (i = 0; i < tamanho - 1; i++){
        int j = i + 1; // número seguinte
        soma = abs(A[i] + A[j]);
        if (s == soma){
            resultado = true;
        }
        else{
            resultado = false;
        }
    }

    printf("%d", resultado);
}




