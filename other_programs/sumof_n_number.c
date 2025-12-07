#include <stdio.h>
int main(){ 
    int number;
    printf("Enter a value: ");
    scanf("%d",&number);
    int sum=0;
    for (int i = 0; i <=number; i++) {
        sum+=i;
    }
    printf("%d", sum);
    return 0;
}
