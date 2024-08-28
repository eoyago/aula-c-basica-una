#include <stdio.h>

int main() {
    int arr[10];
    int i, maior, menor;
    
    printf("Digite 10 números inteiros:\n"); // Como esta sendo usado int, se digitar número quebrado com virgula ou ponto, o resultado pode dar erro ou ter um comportamento inesperado.
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    maior = menor = arr[0];
    
    for (i = 1; i < 10; i++) {
        if (arr[i] > maior) maior = arr[i];
        if (arr[i] < menor) menor = arr[i];
    }
    
    printf("O maior número é %d.\n", maior);
    printf("O menor número é %d.\n", menor);
    
    return 0;
}