#include <stdio.h>
int main()
{
    printf("\nI am in main");
    italy();
    printf("\nI am finally back in main");
}
italy()
{
    printf("\nI am in italy");
    brazil();
    printf("\nI am finally back in italy");
}
brazil()
{
    printf("\nI am in brazil");
    argentina();
}
argentina()
{
    printf("\nI am in argentina");
}
