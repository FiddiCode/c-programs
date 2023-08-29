#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("ENTER M FOR  MONDAY \n T FOR TUESDAY\n W FOR WEDNESDAY \n H FOR THURSDAY \n F FOR FRIDAY \n S FOR SATURDAY \n U FOR SUNDAY\n");
    scanf("%c",&ch);
    switch (ch)
    {
    case'm':
    case 'M':
    printf("ENTERED DAY IS MONDAY");
    break;
    case 't':
    case'T':
    printf("ENTERED DAY IS TUESDAY");
    break;
    case'w':
    case'W':
    printf("ENTERED DAY IS WEDNESDAY");
    break;
    case 'h':
    case 'H':
    printf("ENTERED DAY IS THURSDAY");
    break;
    case 'f':
    case 'F':
    printf("ENTERED DAY IS FRIDAY");
    break;
    case 's':
    case 'S':
    printf("ENTERED DAY IS SATURDAY");
    break;
    case 'u':
    case 'U':
    printf("ENTERED DAY IS SUNDAY");
        
        break;
    
    default:
    printf("ENTER THE CORRECT FORM");
        break;
    }
    return 0;
}