#include <stdio.h>
/*Insurance of driver using logical operators*/
int main()
{
    char sex, ms;
    int age;

    printf("Enter age, sex, maritial status");
    scanf("%d %c %c", &age, &sex, &ms);

    if((ms == 'M') || (ms == 'U' && sex == 'M' && age > 30) ||
                 (ms == 'U' && sex == 'F' && age > 25))
        printf("Driver is insured");
    else
        printf("Driver is not insured");
}
