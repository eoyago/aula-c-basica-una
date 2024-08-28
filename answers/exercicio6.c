#include <stdio.h>

int fatorial(int num) {
    if (num == 0 || num == 1) return 1;
    return num * fatorial(num - 1);
}

int main() {
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    printf("O fatorial de %d é %d.\n", num, fatorial(num));
    
    return 0;
}