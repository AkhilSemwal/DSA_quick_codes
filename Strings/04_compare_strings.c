#include <stdio.h>

int compareStrings(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            return *str1 - *str2;
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int main() {
    printf("=== Compare Strings ===\n");
    
    int result = compareStrings("Hello", "Hello");
    printf("Compare 'Hello' and 'Hello': %d (0=equal)\n", result);
    
    result = compareStrings("Apple", "Banana");
    printf("Compare 'Apple' and 'Banana': %d (negative=first smaller)\n", result);
    
    result = compareStrings("Zebra", "Apple");
    printf("Compare 'Zebra' and 'Apple': %d (positive=first larger)\n", result);
    
    return 0;
}
