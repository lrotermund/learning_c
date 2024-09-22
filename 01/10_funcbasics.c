#include <stdio.h>

// prototype of multiply, required if implementation is below main
int multiply(int a, int b);

int main() {
    printf("%d * %d = %d\n", 42, 42, multiply(42, 42));
}

int multiply(int a, int b) {
    return a * b;
}
