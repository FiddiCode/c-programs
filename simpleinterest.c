#include<stdio.h>
#include<conio.h>
void main()
{
    int p, r,t,si;
    
    printf("enter the principle,rate of interest&time to find the simplr interest");
    scanf("%d%d%d",&p,&r,&t);
    si=(p*r*t)/100;
    printf("simple interest=%d",si);
    getch();

}