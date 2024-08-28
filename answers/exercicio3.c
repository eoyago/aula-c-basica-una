#include <stdio.h>
#include <stdbool.h>

bool isCousin(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    
    return true;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isCousin(num)) {
        printf("%d is cousin.\n", num);
    } else {
        printf("%d is not cousin.\n", num);
    }
    
    return 0;
}
