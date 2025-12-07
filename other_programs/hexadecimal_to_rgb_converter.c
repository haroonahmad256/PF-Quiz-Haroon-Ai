#include <stdio.h>
#include <string.h>


int main() {
    char hex[100];
    int length, decimal = 0, value;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    length = strlen(hex);

    for(int i = 0; i < length; i++) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            value = hex[i] - '0';
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F') {
            value = hex[i] - 'A' + 10;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f') {
            value = hex[i] - 'a' + 10;
        }
        else {
            printf("Invalid hexadecimal input.\n");
            return 0;
        }

        decimal = decimal * 16 + value;
    }

    int r, g, b;
    r= (decimal)/ 65336;
    g= (decimal/256)%256;
    b= decimal%256;
    
    printf("The value of rgb is %d%d%d", r,g,b);
    
    return 0;
}

