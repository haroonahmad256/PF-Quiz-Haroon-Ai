#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];
    printf("Enter a binary number to convert to decimal: ");
    scanf("%s", binary);

    int length = strlen(binary);
    int decimal = 0;

    for (int i = 0; i < length; i++) {
        int bit = binary[i] - '0';   // Convert char to int (0 or 1)
        decimal = decimal * 2 + bit; // Binary conversion logic
    }

    printf("The value of binary in decimal is %d\n", decimal);

    return 0;
}
