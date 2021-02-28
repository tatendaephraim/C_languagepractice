 /*
  * Programmer: Tatenda E Chipwanya    Date completed: February 20, 2021
  * Instructor: Khulekani Sibanda     Class: SCS 1101
  * Version:    1.0.0
  *
  * GOSPER'S FORMULA TO APPROXIMATE N! APPLICATION
  *
  */
#include <stdio.h>
#include <math.h>
#define PI 3.141592654

void instruct(void);
double square_Root(double n); /* Function declaration*/
double log_Multiplier(double n); /* Function declaration*/
int
main()
{
    instruct();
    double n;
    double result;
    printf("Please enter the value of n > ");
    scanf("%lf",&n);

    result = log_Multiplier(n)*square_Root(n);

    printf("%lf! is approximately %.5lf.",n,result);



}
void instruct()
{
    printf("The Application approximates n! \nThe condition is that n > 0 \n\n\n**************************************\n");
}
/*
 * Computes the square root .
 * Pre: n is defined and is > 0.
 * PI is a constant macro representing an approximation of pi.
 * Library math.h is included.
 */
double
square_Root(double n)
{
    double internal,   /*Expression in the Square Root Sign*/
    result; /*The Result of the computation*/
    internal = (2*n + 1/3)*PI;

    result = sqrt(internal);

    return result;

}
/*
 * Computes Log e to the power -n.
 */
double
log_Multiplier(double n)
{
    return (pow(n,n)*exp(-n));
}
