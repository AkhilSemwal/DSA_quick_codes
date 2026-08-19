#include <stdio.h>

int sumOfN(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sumOfN(n - 1);
}

int main() {
    printf("=== Sum of N Numbers (Recursion) ===\n");
    
    for (int i = 1; i <= 5; i++) {
        printf("Sum of 1 to %d: %d\n", i, sumOfN(i));
    }
    
    return 0;
}
