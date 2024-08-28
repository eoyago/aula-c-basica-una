#include <stdio.h>


int main() {

    int num;
    char resposta;

    do {
        printf("Digite um número: ");
        scanf("%d", &num);
        
        if (num % 2 == 0) {
            printf("%d é par.\n", num);
        } else {
            printf("%d é ímpar.\n", num);
        }
        
        printf("Deseja digitar outro número? (s/n): ");
        getchar();
        resposta = getchar();
        
    } while (resposta == 's' || resposta == 'S');

    printf("Programa encerrado. Pressione Enter para sair...");
    getchar();

    return 0;
}
