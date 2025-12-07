#include <stdio.h>
int main(){
    int is_prime, i;
    printf("Enter a number: ");
    scanf("%d", &is_prime);
    int prime=0;
    for (i=2; i<is_prime; i++){
        if (is_prime%i==0){
            prime=1;
            break;
        }
    }
    if(prime){
        printf("%d is not a prime number", is_prime);
    }
    else{
        printf("%d is a prime number", is_prime);
    }
}