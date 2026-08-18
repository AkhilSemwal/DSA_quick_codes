#include <stdio.h>

#define MAX_STR 1000

int stringLength(const char *str) {
    int len = 0;
    while (str[len] != '\0') len++;
    return len;
}

void reverseString(char *str) {
    int len = stringLength(str);
    int left = 0, right = len - 1;
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char str[MAX_STR];
    strcpy(str, "Hello World");
    
    printf("=== Reverse String ===\n");
    printf("Original: %s\n", str);
    
    reverseString(str);
    printf("Reversed: %s\n", str);
    
    return 0;
}
