// Verificar se um número inteiro é um palíndromo.

#include <stdio.h>
#include <stdbool.h>

bool ehPalindromo(int x) {
    if (x < 0) return false;
    int original = x, invertido = 0;
    while (x != 0) {
        invertido = invertido * 10 + x % 10;
        x /= 10;
    }
    return original == invertido;
}

int main() {
    int x = 121;
    printf("É Palíndromo: %s\n", ehPalindromo(x) ? "verdadeiro" : "falso");
    return 0;
}
