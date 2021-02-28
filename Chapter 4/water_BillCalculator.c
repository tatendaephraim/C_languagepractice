 /*
  * Programmer: Tatenda E Chipwanya    Date completed: February 23, 2021
  * Instructor: Khulekani Sibanda      Class: SCS 1101
  * Version:    1.0.0
  *
  * Computes and prints a water bill given an unpaid balance and previous and
  * current meter readings. Bill includes a demand charge of $35.00, a use
  * charge of $1.10 per thousand gallons, and a surcharge of $2.00 if there is
  * an unpaid balance.
  */

  #include <stdio.h>
  #include <math.h>

  #define DEMAND_CHG 35.00 /* basic water demand charge */
  #define PER_1000_CHG 1.10 /* charge per thousand gallons used */
  #define LATE_CHG 2.00 /* surcharge assessed on unpaid balance */
  #define OVERUSE_CHG_RATE 2.0 /* double use charge as non-conservation penalty */
  #define CONSERV_RATE 95 /* percent of last year's use allowed this year */


  /* Function prototypes */

   void instruct_water(void);
   double comp_use_charge(int previous, int current, int use_LastYear);
   double comp_late_charge(double unpaid);
   void display_bill(double late_charge, double bill, double unpaid);


  int
  main()
  {

    int previous; /* input - meter reading from previous quarter in thousands of gallons */
    int current; /* input - meter reading from current quarter */
    int use_LastYear; /*Water usage from the previous year*/
    double unpaid; /* input - unpaid balance of previous bill */
    double bill; /* output - water bill */
    int used; /* thousands of gallons used this quarter */
    double use_charge; /* charge for actual water use */
    double late_charge; /* charge for nonpayment of part of previous balance*/
    /* Display user instructions. */
    instruct_water();

    /* Get data: unpaid balance, previous and current meter readings. */
    printf("Enter unpaid balance> $");
    scanf("%lf", &unpaid);
    printf("Enter previous meter reading> ");
    scanf("%d", &previous);
    printf("Enter current meter reading> ");
    scanf("%d", &current);
    printf("Enter water usage for the previous year ");
    scanf("%d", &use_LastYear);

/* Compute use charge. */
    use_charge = comp_use_charge(previous, current,use_LastYear);

/* Determine applicable late charge */
    late_charge = comp_late_charge(unpaid);

/* Figure bill. */
    bill = DEMAND_CHG + use_charge + unpaid + late_charge;

/* Print bill. */
    display_bill(late_charge, bill, unpaid);

      return (0);
  }
/*
 * Displays user instructions
 */
void
instruct_water(void)
{
    printf("This program figures a water bill ");
    printf("based on the demand charge\n");
    printf("($%.2f) and a $%.2f per 1000 ", DEMAND_CHG, PER_1000_CHG);
    printf("gallons use charge.\n\n");
    printf("A $%.2f surcharge is added to ", LATE_CHG);
    printf("accounts with an unpaid balance.\n");
    printf("and current meter readings\n");
    printf("on separate lines after the prompts.\n");
    printf("However the program enforces a water conservation requirement ");
    printf("where a user is levied twice normal rate of use when they exceed ");
    printf(" %d percent from the previous usage.\n",CONSERV_RATE);
    printf("Press <return> or <enter> after ");
    printf("typing each number.\n\n");
}
 /*
  * Computes use charge with conservation requirements
  * Pre: previous and current and use_LastYear are defined.
  */
double
comp_use_charge(int previous, int current, int use_LastYear)
{
    int used; /* gallons of water used (in thousands) */
    double use_charge; /* charge for actual water use */

    used = current - previous;

    if(used <= CONSERV_RATE/100*use_LastYear) /*Conservation Requirements are met*/
    {
        use_charge = used * PER_1000_CHG;
    }
    else
    {
        printf("Use charge is at %.2f times ", OVERUSE_CHG_RATE);
        printf("normal rate since use of\n");
        printf("%d units exceeds %d percent ", used, CONSERV_RATE);
        printf("of last year's %d-unit use.\n", use_LastYear);
        use_charge = used * OVERUSE_CHG_RATE * PER_1000_CHG;

    }

    return (use_charge);

}
/*
 * Computes late charge.
 * Pre : unpaid is defined.
 */
double
comp_late_charge(double unpaid)
{
    double late_charge; /* charge for nonpayment of part of previous balance */

    if (unpaid > 0)
        late_charge = LATE_CHG; /* Assess late charge on unpaid balance. */
    else
        late_charge = 0.0;

    return (late_charge);
}
/*
 * Displays late charge if any and bill.
 * Pre : late_charge, bill, and unpaid are defined.
 */
void
display_bill(double late_charge, double bill, double unpaid)
{
    if (late_charge > 0.0)
        {
        printf("\nBill includes $%.2f late charge", late_charge);
        printf(" on unpaid balance of $%.2f\n", unpaid);
        }
    printf("\nTotal due = $%.2f\n", bill);

}

