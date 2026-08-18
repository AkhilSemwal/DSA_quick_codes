#include <stdio.h>

#define MAX_STR 2000

void concatenateStrings(char *dest, const char *src1, const char *src2) {
    int i = 0, j = 0;
    while (src1[i] != '\0') {
        dest[i] = src1[i];
        i++;
    }
    while (src2[j] != '\0') {
        dest[i] = src2[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

int main() {
    char str1[] = "Hello ";
    char str2[] = "World";
    char result[MAX_STR];
    
    printf("=== Concatenate Strings ===\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    
    concatenateStrings(result, str1, str2);
    printf("Concatenated: %s\n", result);
    
    return 0;
}
