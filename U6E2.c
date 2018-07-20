#include<stdio.h>

int main()
{
    int n[]={23,14,12,43,25,34,45,67,39,98};
    int count=0;
    int temp;
    for(int j=0;j<=3;j++)
    {
    for(int i=0;i<=9;i++)
    {
        if((n[i]%2)==0)
            {
                temp=n[i];
                n[i]=n[i-count];
                n[i-count]=temp;
                count=0;
                //i=0;
            }
        else
            {
                count++;
            }
        
    }
    }
    for(int j=0;j<=9;j++)
    {
        printf("%d\t",n[j]);
    }
return 0;
}