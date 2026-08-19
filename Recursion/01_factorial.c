#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    printf("=== Factorial (Recursion) ===\n");
    
    for (int i = 0; i <= 6; i++) {
        printf("Factorial of %d: %d\n", i, factorial(i));
    }
    
    return 0;
}
