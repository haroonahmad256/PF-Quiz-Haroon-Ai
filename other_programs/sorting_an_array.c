#include <stdio.h>

int main() {
    int arr[] = {5, 3, 8, 1, 4};   
    int n = 5;                     
    int i, j, temp;

    for(i = 0; i < n ; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

return 0;
}