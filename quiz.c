//Quiz
#include <stdio.h>
int main(){
    int item_number, item_price;              
    printf("Enter number of items: "); 
    scanf("%d", &item_number);     
    int count1=0, total_revenue=0;
    for (int i = 0; i < item_number; i++)
    {
        printf("Enter price for item%d: ", i+1);
        scanf("%d", &item_price);
        if (item_price<40)
        {
            printf("Low Cost Item!\n");
            count1++;
        }
        total_revenue+=item_price;    
    }
    printf("Total Revenue of Items: %d\n", total_revenue);
    printf("Number of Low cost items: %d\n", count1 );
}