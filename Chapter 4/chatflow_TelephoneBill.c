
 /*
  * Programmer: Tatenda E Chipwanya    Date completed: February 27, 2021
  * Instructor: Khulekani Sibanda      Class: SCS 1101(Computer Science)
  * Version:    1.0.0
  * National University of Science and Technology(Zimbabwe)
  *
  * Chatflow Wireless offers customers 600 weekday minutes for a flat rate of 39.99.
  * Night (8 P.M. to 7 A.M. ) and weekend minutes are free, but additional
  * weekday minutes cost 0.40 each. There are taxes of 5.25% on all charges.
  *
  */

  #include <stdio.h>
  #include <math.h>

  /* Function prototypes */

  #define WEEKDAY_MIN 2400 /* The weekday minutes are 600 hence monthly is  2400 */
  #define WEEKDAY_RATE 39.99 /* Weekly flat rate*/
  #define WEEKDAY_RATE_MIN 0.40 /* Additional weekday minutes cost 0.40 each*/
  #define TAX_RATE 5.25 /* 5.25% on all charges */


    /* Function prototypes */

   void instruct(void);
   double monthly_Bill(double weekDaysMinutes);
   double monthly_TaxBill(double preTaxBill);
   double averageMinuteCost(double preTaxBill,double weekDaysMinutes);
   void display_TotalBill(double weekDaysMinutes, double nightMinutes, double weekendMinutes,double preTaxBill,double tax,double total,double averageCost_min);

  int
  main()
  {
      double weekDaysMinutes;
      double nightMinutes;
      double weekendMinutes;
      double tax;
      double preTaxBill;
      double total;
      double averageCost_min;


      instruct(); /*Give instructions to the user*/
    /* Get data: unpaid balance, previous and current meter readings. */

    printf("Please total monthly Weekday Minutes > Min ");
    scanf("%lf", &weekDaysMinutes);
    printf("Please total monthly Night Minutes > Min ");
    scanf("%lf", &nightMinutes);
    printf("Please total monthly Weekend Minutes > Min ");
    scanf("%lf", &weekendMinutes);

    /* Calculate Monthly Bill Before Tax*/

    preTaxBill = monthly_Bill(weekDaysMinutes)/100;

   /*Calculate Monthly Tax*/

    tax = monthly_TaxBill(preTaxBill);

    /* Calculate Average Costs Per Min*/

    averageCost_min = averageMinuteCost(preTaxBill,weekDaysMinutes);

    /* Calculate the Total Monthly Bill*/

    total = (preTaxBill + tax);


    /* Calculate the Total Monthly Bill*/

    display_TotalBill(weekDaysMinutes,nightMinutes,weekDaysMinutes,preTaxBill,tax,total,averageCost_min);



      return(0);
  }


/*
 * Displays user instructions
 */

 void instruct()
 {
    printf("The program calculates a telephone bill ");
    printf("based on minutes used during the month\n");
    printf("A customer is charged a flat rate of\n ");
    printf(" $ %.2f for a weekly usage of %d minutes. \n",WEEKDAY_RATE,WEEKDAY_MIN);
    printf("Night (8 P.M. to 7 A.M. ) and weekend minutes are free, but additional\n");
    printf("weekday minutes cost $ %.2f  each. There are taxes of %.2f%% on all charges.\n",WEEKDAY_RATE_MIN,TAX_RATE);
    printf("Press <return> or <enter> after ");
    printf("typing each entry.\n\n");
 }

 /*
  * Computes the monthly bill before taxation
  * Pre: weekDays are defined.
  */

double
monthly_Bill(double weekDaysMinutes)
{
    double pretax_TotalCharge;
    if(weekDaysMinutes >= 0 || weekDaysMinutes < WEEKDAY_MIN)    /* Per Month hence 600 * 4*/
    {
       pretax_TotalCharge = weekDaysMinutes*4*WEEKDAY_RATE*100;     /* Convert cents by multiplying by hundred . 4 weeks in a month*/
    }

    else if (weekDaysMinutes > WEEKDAY_MIN)
    {
        pretax_TotalCharge = (weekDaysMinutes*WEEKDAY_RATE*4*100) + (weekDaysMinutes - WEEKDAY_MIN)*WEEKDAY_RATE_MIN*100;
    }
    else
        printf("Invalid Entry please try again");


    return pretax_TotalCharge;
}

 /*
  * Computes tax
  * Pre: preTaxBill is defined.
  */

double
monthly_TaxBill(double preTaxBill)
{
    double total_Tax;
    total_Tax = preTaxBill*TAX_RATE/100;
    return total_Tax;
}

 /*
  * Computes average cost per minute
  * Pre: preTaxBill is defined.
  */

double
averageMinuteCost(double preTaxBill,double weekDaysMinutes)
{
    double average_Charge;
    average_Charge = preTaxBill/(weekDaysMinutes);     /* 60 Minutes*/

    return average_Charge;
}



/*
 * Displays Telephone Bill.
 *
 */

void
display_TotalBill(double weekDaysMinutes, double nightMinutes, double weekendMinutes,double preTaxBill,double tax,double total,double averageCost_min)
{
    printf("\nTotal WeekDays Minutes\t\t\t%.2f", weekDaysMinutes);
    printf("\nNight Minutes\t\t\t\t%.2f", nightMinutes);
    printf("\nWeekend Minutes\t\t\t\t%.2f", weekendMinutes);
    printf("\nPre-Tax Bill\t\t\t\t$%.2f",preTaxBill);
    printf("\nTax (5.25%%)\t\t\t\t$%.2f", tax);

    printf("\nTotal after Tax\t\t\t\t$%.2f", total);

    printf("\nAverage Cost Per Minute\t\t\t$%.2f", averageCost_min);
}
