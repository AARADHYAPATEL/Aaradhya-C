#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int *j, *k;

    j = &arr[4];
    k = (arr + 4);

    if (j == k)
        printf("The two pointers point to the same location");
    else
        printf("The two pointers do not point to the same location");
}
