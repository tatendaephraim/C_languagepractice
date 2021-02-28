 /*
  * Programmer: Tatenda E Chipwanya    Date completed: February 20, 2021
  * Instructor: Khulekani Sibanda     Class: SCS 1101
  * Version:    1.0.0
  *
  * LOAN APPLICATION TO COMPUTE MONTHLY PAYMENTS/INSTALLMENTS
  *
  */
#include <stdio.h>
#include <math.h>

void instruct(void);
double monthly_Installment(double purchase_Price,double down_Payment,double interest,double number_Payments); /* Function declaration*/

int
main()
{
    instruct();
    double purchase_Price,down_Payment,interest,number_Payments,borrowed_Amount,monthly_payments;
    printf("Please enter the Purchase Price > ");
    scanf("%lf",&purchase_Price);

    printf("Please enter the Down Payment > ");
    scanf("%lf",&down_Payment);

    printf("Please enter the Interest > ");
    scanf("%lf",&interest);

    printf("Please enter the desired number of payments > ");
    scanf("%lf",&number_Payments);

    borrowed_Amount = purchase_Price - down_Payment;

    monthly_payments = monthly_Installment(purchase_Price,down_Payment,interest,number_Payments);

    printf("The amount borrowed is $ %.2f and the monthly installment $ %.2f.",borrowed_Amount,monthly_payments);


    return 0;
}
void instruct()
{
    printf("The Application calculates the estimated monthly installments\nGiven the Down payment and interest rate follow instructions\ngiven\n\n\n**************************************\n");
}
double monthly_Installment(double purchase_Price,double down_Payment,double interest,double number_Payments)
{
    double payment,numerator,denominator,borrowed_Money;

    borrowed_Money = purchase_Price-down_Payment;

    numerator = (interest/(12*100))*borrowed_Money;
    denominator = 1 - pow(1+(interest/(12*100)),-number_Payments);

    payment = numerator/denominator;

    return payment;

}
