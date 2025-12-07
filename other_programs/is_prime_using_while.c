#include <stdio.h>
int main(){
    int i, is_prime, prime;
    printf("Enter a number: ");
    scanf("%d", &is_prime);
    prime=0;
    i= 2;
    do {
        if (is_prime%i==0)
        {
            prime=1;
            break;
        }
        i++;
        
    } while (i < is_prime);

    if (prime){
        printf("%d is a prime number", is_prime);
    }
    else{
        printf("%d is not a prime number", is_prime);
    }
    
}

