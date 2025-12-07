#include <stdio.h>
int main()
{
   
    int sum=0;
    for (int i = 1; i<=10; i++)
    {
        int Table8= ("8 x %d= %d",i,(8*i));
        sum= sum+Table8;
    }
    printf("%d", sum );
    
    return 0;
}
