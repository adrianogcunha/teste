#include <stdio.h>
#include <ctype.h> // Para a função tolower()

int main() {
    char str[100]; 
    int count = 0; 

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin); 

    // Percorre cada caractere da string
    for (int i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == 'a') {
            count++; 
        }
    }

    if (count > 0) {
        printf("A letra 'a' (maiúscula ou minúscula) aparece %d vezes na string.\n", count);
    } else {
        printf("A letra 'a' (maiúscula ou minúscula) não aparece na string.\n");
    }

    return 0;
}
