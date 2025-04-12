#include <stdio.h>

int main() {
    unsigned int a; // Change 'int' to 'unsigned int'

    printf("Enter your number: ");
    scanf("%x", &a); // Now 'a' matches '%x' expected type
    printf("a = %u\n", a); // Use '%u' to correctly print an unsigned int

    return 0;
}
