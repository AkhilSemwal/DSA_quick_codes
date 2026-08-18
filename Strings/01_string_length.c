#include <stdio.h>

int stringLength(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    char str[] = "Hello World";
    
    printf("=== String Length ===\n");
    printf("String: %s\n", str);
    printf("Length: %d\n", stringLength(str));
    
    return 0;
}
