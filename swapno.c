#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
    printf("enter the two numbers that you want to swap:");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Numbers after swapping=%d                     %d",a,b);
}