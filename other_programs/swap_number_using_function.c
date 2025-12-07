#include <stdio.h>
void even_Odd(int x, int y){
    printf("Before swapping values of x: %d and y: %d\n",x, y);
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("After swapping values of x: %d and y: %d",x, y);
}
int main(){
    int a= 34;
    int b= 22;
    even_Odd(a,b);

}

