#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int contVogais = 0;
    char vogaisEncontradas[10];
    int index = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contVogais++;
            int found = 0;
            for (int j = 0; j < index; j++) {
                if (vogaisEncontradas[j] == c) {
                    found = 1;
                    break;
                }
            }
            if (!found) {
                vogaisEncontradas[index++] = c;
            }
        }
    }

    printf("Quantidade de vogais na string: %d\n", contVogais);
    printf("Vogais encontradas: ");
    for (int i = 0; i < index; i++) {
        printf("%c ", vogaisEncontradas[i]);
    }
    printf("\n");

    return 0;
}