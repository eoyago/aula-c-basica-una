#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i;
    
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    len = strlen(str);
    
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    
    printf("String invertida: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    
    return 0;
}
