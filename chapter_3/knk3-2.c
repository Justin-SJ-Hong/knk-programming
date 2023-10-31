#include <stdio.h>

int main() 
{
    int item_num;
    double price;
    int month;
    int day;
    int year;

    printf("Enter item number: ");
    scanf("%d", &item_num);
    printf("Enter unit price: ");
    scanf("%lf", &price);
    printf("Enter purchase date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$  %7.2f\t%.2d/%.2d/%d\n",item_num, price, month, day, year);

    return 0;
}