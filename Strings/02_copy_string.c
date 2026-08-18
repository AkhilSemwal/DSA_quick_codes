#include <stdio.h>

#define MAX_STR 1000

void copyString(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main() {
    char src[] = "Hello World";
    char dest[MAX_STR];
    
    printf("=== Copy String ===\n");
    printf("Source: %s\n", src);
    
    copyString(dest, src);
    printf("Destination: %s\n", dest);
    
    return 0;
}
