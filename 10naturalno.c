#include<stdio.h>
#include<conio.h>
int main()
{int i,sum=0;
for(i=1;i<=10;i++)
{
    printf("%dth no is %d\n",i,i);
    sum=sum+i;
}
    printf("SUM OF THE 10 NATURAL NUMBERS ARE %d",sum);
    return 0;

}