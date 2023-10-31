#include <stdio.h>

int main()
{
    int x;
    // 틀린 부분
    //int square_x = x * x;
    //int cube_x = x * x * x;
    
    printf("Input x value : ");
    scanf("%d", &x);

    /*
    틀린 부분
    int polynimial = (3 * cube_x * square_x) + 
                     (2 * square_x * square_x) -
                     (5 * cube_x) - 
                     (cube_x) +
                     (7 * x) - 6;
    */

    int polymonial = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
    printf("polynimial value = %d\n", polymonial);

    return 0;
}