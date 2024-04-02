#include <stdio.h>
int main()
{
    int goals;

    printf("Enter the number of goals scored against India");
    scanf("%d", &goals);

    if(goals <= 5)
        goto sos;
    else
    {
        printf("About time soccer players learn C\n");
        printf("and said goodbye! adieu! to soccer");
        int exit(); /*terminates program execution*/
    }

    sos:
        printf("To err is human!");
}
