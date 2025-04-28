
#include <stdio.h>

int main()
{
    int yr;
    printf("Enter year");
    scanf("%d",&yr);

    (yr%4==0)? (yr%100!=0? printf("%d is leap year", yr):
                (yr%400==0? printf("%d is leap year", yr):
                printf("%d is leap not year", yr))):
                    printf("%d is leap not year", yr);
    return 0;
}
