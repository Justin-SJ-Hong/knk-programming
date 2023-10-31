#include <stdio.h>

int main(void)
{
    int r = 10;

    // float v = 4 / 3 * 3.14 * r * r * r; 걍 4/3하면 컴퓨터는 몫인 1만 뱉어냄
    float v = 4.0f / 3.0f * 3.14 * r * r * r;

    printf("Volume of Sphere is : %f \n", v);
    return 0;
}