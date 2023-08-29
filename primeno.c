#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER THAT YOU WANT TO CHECK WHETHER THE PRIME NO OR NOT=");
    scanf("%d",&n);
    if(n%n==0&&n%2==1)
    printf("GIVEN NUMBER IS THE PRIME NUMBER");
    else
    printf("GIVEN NUMBER IS NOT THE PRIME NUMBER");
    return 0;
}
