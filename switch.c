#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,n,sum,sub,mul,div,rem;
    
    printf("ENTER THE TWO NUMBERS");
    scanf("%d %d",&a,&b);
    printf("\n ENTER THE OPERATION PERFORMED ON THESE NUMBERS\n 1 for sum\n 2 for subtraction\n 3 for multiplication \n 4 for dividing\n 5 for the reminder\n");
    scanf("%d",&n);
    switch(n){
    case 1:
    sum=a+b;
    printf("SUM OF THE TWO NUMBERS IS %d",sum);
    break;
    case 2:
    sub=a-b;
    printf("DIFFERENCE BETWEEN TWO NUMBERS IS %d",sub);
    break;
    case 3:
    mul=a*b;
    printf("MULTIPLICATION OF THE TWO NUMBERS IS %d",mul);
    break;
    case 4:
    div=a/b;
    printf("DIVIDING THE TWO NUMBERS WE GET %d",div);
    break;
    case 5:
    rem=a%b;
    printf("REMINDER OF THE TWO NUMBERS IS%d",rem);
    default:
    printf("ENTER THE CORRECT NUMBER");
    break;
    }

return 0;
      
}