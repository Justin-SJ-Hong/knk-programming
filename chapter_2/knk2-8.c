#include <stdio.h>

int main()
{
    float amount_loan;
    float interest_rate;
    float monthly_pay;

    printf("Enter amount of loan: ");
    scanf("%f", &amount_loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_pay);

    /*한달치 금리는 interest_rate를 12로 나눈다*/
    interest_rate /= 12;

    float first_pay = amount_loan * (1 + interest_rate / 100) - monthly_pay;
    float second_pay = first_pay * (1 + interest_rate / 100) - monthly_pay;
    float third_pay = second_pay * (1 + interest_rate / 100) - monthly_pay;

    printf("Balance remaining after first payment: $%.2f\n", first_pay);
    printf("Balance remaining after second payment: $%.2f\n", second_pay);
    printf("Balance remaining after third payment: $%.2f\n", third_pay);

    return 0;
}