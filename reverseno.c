#include<stdio.h>
#include<conio.h>
void main()
{
    int a,n,r=0;
    printf("Enter the number that you want to reverse=");
    scanf("%d",&n);
    while(n>=1)
    {a=n%10;
    r=r*10+a;
    n=n/10;

    }
    printf("reverse of the given no=%d",r);
    getch();
}