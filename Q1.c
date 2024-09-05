#include <stdio.h>

// Função recursiva para verificar se um número pertence à sequência de Fibonacci
int checkFibonacci(int n, int a, int b) {
    if (n == a || n == b) {
        return 1; 
    }
    if (b > n) {
        return 0; 
    }
    return isFibonacci(n, b, a + b);
}

int main() {
    int num;

    printf("Digite um número para verificar se pertence à sequência de Fibonacci: ");
    scanf("%d", &num);

    if (isFibonacci(num, 0, 1)) {
        printf("%d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}