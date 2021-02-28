 /*
  * Programmer: Tatenda E Chipwanya    Date completed: February 23, 2021
  * Instructor: Khulekani Sibanda      Class: SCS 1101(Computer Science)
  * Version:    1.0.0
  * National University of Science and Technology (Zimbabwe)
  *
  * Computes and prints a bill and implements the Teacher's Discount policy
  * the computation offers teachers a general 10% Discount on purchased goods for
  * less than $100 and 12% discount rate on purchased goods worth $100 and more
  * a non Teacher is charged at a normal rate sales tax is added on both.
  *
  */

  #include <stdio.h>
  #include <math.h>

  #define GEN_DISCOUNT_RATE 10 /* basic percentage discount given to teachers with goods less than $100 */
  #define HIGHER_DISCOUNT_RATE 12 /* teacher discount percentage for goods worth $100 and more*/
  #define SALES_TAX 5 /* 5% Sales tax to be charged after discount rate is computed*/


    /* Function prototypes */

   void instruct(void);
   double comp_teacherDiscount(double totalPurchases);
   double comp_salesTax(double discountedTotal);
   void display_TeacherBill(double totalPurchases, double teacherDiscount, double discountedTotal,double salesTax,double total);
   void display_Bill(double totalPurchases,double salesTax,double total);
  int
  main()
  {
      double totalPurchases;
      double teacherDiscount;
      double discountedTotal;
      double salesTax;
      double total;
      char teacher; /*Asks wether a customer is a teacher or not*/

      instruct(); /*Give instructions to the user*/
    /* Get data: unpaid balance, previous and current meter readings. */

    printf("Please enter total purchases > $ ");
    scanf("%lf", &totalPurchases);
    printf("Please enter T if you are a teacher or N if not > ");
    scanf(" %c", &teacher);

    if(teacher == 'T' || teacher == 't')
    {
        teacherDiscount = comp_teacherDiscount(totalPurchases);
        discountedTotal = totalPurchases - teacherDiscount;
        salesTax = comp_salesTax(discountedTotal);
        total = discountedTotal + salesTax;
        display_TeacherBill(totalPurchases,teacherDiscount,discountedTotal,salesTax,total);
    }
    else if (teacher == 'N' || teacher == 'n')
    {
        salesTax = comp_salesTax(totalPurchases);
        total = totalPurchases + salesTax;
        display_Bill(totalPurchases,salesTax,total);
    }
    else
        printf("Invalid Teacher input try again");





      return(0);
  }


/*
 * Displays user instructions
 */

 void instruct()
 {
    printf("This program figures a purchase bill ");
    printf("based on wether the client is a teacher or not\n");
    printf("if a customer is a teacher a ");
    printf("(%d%%) and a %d%% are given ",GEN_DISCOUNT_RATE,HIGHER_DISCOUNT_RATE);
    printf("if the teacher purchases goods worth \n");
    printf("less than $100 and $100 and more respectively.\n");
    printf("A sales tax is charged after the discount is applied for teachers \n");
    printf("at a rate of %d%% ",SALES_TAX);
    printf("on separate lines after the prompts.\n");
    printf("Press <return> or <enter> after ");
    printf("typing each entry.\n\n");
 }
 /*
  * Computes teacher discount
  * Pre: totalPurchases are defined.
  */
double
comp_teacherDiscount(double totalPurchases)
{
    double teacherDiscount;
    if(totalPurchases < 100)
        teacherDiscount = totalPurchases*GEN_DISCOUNT_RATE/100;
    else
        teacherDiscount =totalPurchases*HIGHER_DISCOUNT_RATE/100;
    return teacherDiscount;
}

 /*
  * Computes sales tax
  * Pre: discountedTotal is defined.
  */

double
comp_salesTax(double discountedTotal)
{
    double salesTax;
    salesTax = discountedTotal*SALES_TAX/100;
    return salesTax;
}
/*
 * Displays Teacher Bill.
 *
 */

void
display_TeacherBill(double totalPurchases, double teacherDiscount, double discountedTotal,double salesTax,double total)
{
    printf("\nTotal Purchases\t\t\t\t$%.2f", totalPurchases);
    printf("\nTeacher's discount (12%%)\t\t$%.2f", teacherDiscount);
    printf("\nDiscounted Total\t\t\t$%.2f", discountedTotal);
    printf("\nSales Tax (5%%)\t\t\t\t$%.2f", salesTax);
    printf("\nTotal\t\t\t\t\t$%.2f", total);
}

/*
 * Displays General Customer Bill Bill.
 *
 */

void
display_Bill(double totalPurchases,double salesTax,double total)
{
    printf("\nTotal Purchases\t\t\t\t\t$%.2f", totalPurchases);
    printf("\nSales Tax (5%%)\t\t\t\t\t$%.2f", salesTax);
    printf("\nTotal \t\t\t\t\t\t$%.2f", total);
}
