/*
  * Programmer: Tatenda E Chipwanya    Date completed: February 25, 2021
  * Instructor: Khulekani Sibanda      Class: SCS 1101
  * Version:    1.0.0
  *
  * Computes and prints the Body Mass Index(BMI)
  * The program asks the user to enter their
  * Mass in pounds and Height in Inches
  *
  */

  #include <stdio.h>
  #include <math.h>

  /* Function Prototypes*/
  void instruct(void);
  double bmi(double h_in,double wt_lb);
  void weight_Status(double bmi_Index);

  int
  main()
  {
      double h_in;
      double wt_lb;
      double bmi_Index;

      instruct();

      /*Obtain Data from the user*/

      printf("Please enter your height in inches > ");
      scanf("%lf", &h_in);

      printf("Please enter your weight in pounds > ");
      scanf("%lf", &wt_lb);

      bmi_Index = bmi(h_in,wt_lb);

      /*The Display of the results*/

       weight_Status(bmi_Index);





      return(0);
  }

/*
 * Displays user instructions
 */

void
instruct(void)
{
    printf("This program calculates the Body Mass Index of a person ");
    printf("after they input their Height and Mass\n");
    printf("The overall result is that it outputs categorise as");
    printf("obese,Overweight,Under Weight and Normal.\n\n");
    printf("Press <return> or <enter> after ");
    printf("typing each entry requested.\n\n");
}

/*
 * Calculates the BMI
 *Pre: height and mass are defined
 */

double
bmi(double h_in,double wt_lb)
{
    double bmi_Index;
    bmi_Index = (703*wt_lb)/pow(h_in,2);

    return (bmi_Index);
}

/*
 * Displays the weight status
 */

void
weight_Status(double bmi_Index)
{
    if( bmi_Index <18.5 )
        printf("The BMI index of %.2f shows the candidate is : Under Weight",bmi_Index);
    else if (bmi_Index >= 18.5 && bmi_Index < 25)
        printf("The BMI index of %.2f shows the candidate is : Normal Weight",bmi_Index);
    else if (bmi_Index >= 25 && bmi_Index < 30)
        printf("The BMI index of %.2f shows the candidate is : Over Weight",bmi_Index);
    else
        printf("The BMI index of %.2f shows the candidate is : Obese",bmi_Index);

}

