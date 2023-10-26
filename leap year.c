#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%400==0)
    {
        printf("%d is a Leap year",a);
    }
    else 
    {
        int g=0;
        if(a%4==0)
        {
            g=1;
        
        if(a%100==0)
        {
            g=1;
            
        }}
        if(g=0)
        {
            printf("%d is  not Leap year",a);
        }
        if(g=1)
        {
            printf("%d is a Leap year",a);
        }
    }
}