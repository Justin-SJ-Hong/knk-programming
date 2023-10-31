#include <stdio.h>

int main()
{
    short month;
    short day;
    int year;

    printf("Enter a date (mm/dd/yyyy) : ");
    scanf("%hd/%hd/%d", &month, &day, &year);

    printf("You entered the date %d%.2hd%.2hd \n", year, month, day);
}