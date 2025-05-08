#include <stdio.h>    // For input/output functions
#include <string.h>   // For string manipulation functions
#include <math.h>     // For mathematical functions
#include <time.h>     // For time functions

void reverseString(char* str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    // String manipulation
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character at the end
    str[strcspn(str, "\n")] = '\0';
    
    printf("Original string: %s\n", str);
    reverseString(str);
    printf("Reversed string: %s\n", str);
    printf("Length of the string: %lu\n", strlen(str));

    // Mathematical calculations
    double num = 25.0;
    printf("Square root of %.2f is %.2f\n", num, sqrt(num));
    printf("Cosine of %.2f is %.2f\n", num, cos(num));

    // Time functions
    time_t t;
    time(&t);
    printf("Current date and time: %s", ctime(&t));

    return 0;
}
