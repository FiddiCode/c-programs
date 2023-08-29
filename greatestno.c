#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter the threee numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
    printf("First number is the greatest among three numbers");
    if((b>a)&&(b>c))
    printf("Second number is the greatest among three numbers");
    if((c>a)&&(c>b))
    printf("Third number is the greatest among the three numbers");
    getch();
}