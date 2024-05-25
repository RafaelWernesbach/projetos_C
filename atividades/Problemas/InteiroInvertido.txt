// Dado um inteiro de 32 bits, reverter os seus dígitos.

#include <stdio.h>
#include <limits.h>

int inverter(int x) {
    long invertido = 0;
    while (x != 0) {
        invertido = invertido * 10 + x % 10;
        x /= 10;
        if (invertido > INT_MAX || invertido < INT_MIN) {
            return 0;
        }
    }
    return (int)invertido;
}

int main() {
    int x = 123;
    printf("Invertido: %d\n", inverter(x));
    return 0;
}

