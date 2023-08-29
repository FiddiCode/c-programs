#include<stdio.h>
#include<conio.h>
int main()
{
    int n, i,fact=1;
    printf("ENTER THE NUMBER THAT YOU WANT THE FACTORIAL OF=");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        fact=fact*i;

    }
    printf("FACTORIAL OF THE GIVEN NUMBER=%d",fact);
    return 0;
}