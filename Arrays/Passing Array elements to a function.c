#include <stdio.h>
/*Demonstration of call by value*/
int main()
{
    int i;
    int marks[] = {55, 65, 90, 83, 93, 39, 37};

    for(i = 0; i <= 6; i++)
        display (marks[i]);
}

display(int m)
{
    printf("%d ", m);
}
