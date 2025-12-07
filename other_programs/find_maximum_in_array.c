#include <stdio.h>
int main()
{
    int arr[]= {5,7,886,433,754,235,9753};
    //lets say
    int max;
    max= arr[0];
    for(int i=0; i<7; i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
    printf("%d", max);
}