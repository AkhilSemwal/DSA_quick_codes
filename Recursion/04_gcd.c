#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    printf("=== GCD (Recursion) ===\n");
    
    printf("GCD(48, 18): %d\n", gcd(48, 18));
    printf("GCD(100, 50): %d\n", gcd(100, 50));
    printf("GCD(17, 5): %d\n", gcd(17, 5));
    
    return 0;
}
