#include <stdio.h>

int main() {
    int N, i, soma = 0;
    
    printf("Digite um número N: ");
    scanf("%d", &N);
    
    for (i = 1; i <= N; i++) {
        soma += i;
    }
    
    printf("A soma de 1 a %d é %d.\n", N, soma);
    
    return 0;
}
