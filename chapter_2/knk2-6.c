#include <stdio.h>

int main()
{
    int x;
    
    printf("Input x value : ");
    scanf("%d", &x);

    int polymonial = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x -6;
    printf("polynimial value = %d\n", polymonial);

    return 0;
}