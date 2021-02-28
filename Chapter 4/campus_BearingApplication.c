/*
  * Programmer: Tatenda E Chipwanya    Date completed: February 25, 2021
  * Instructor: Khulekani Sibanda      Class: SCS 1101
  * Version:    1.0.0
  *
  * Computes the bearing application
  * and direction of the surveyor after
  * inserting the campus input
  *
  */

  #include <stdio.h>
  #include <math.h>

  /*Constants*/


  /* Function Prototypes*/
  void instruct(void);
  void displayResult(double bearing);

  int
  main()
  {
      double bearing;
      double angle;


      instruct();

      /*Obtain Data from the user*/

      printf("Please enter the Angle > ");
      scanf("%lf", &angle);

      /*The Display of the results*/

       displayResult(angle);




      return(0);
  }

/*
 * Displays user instructions
 */

void
instruct(void)
{
    printf("This program calculates the bearing and direction after surveyor ");
    printf("input the degress\n");
    printf("Press <return> or <enter> after ");
    printf("typing each entry requested.\n\n");
}

/*
 * Calculates the Bearing of the First Quadrant
 *Pre: angle is defined
 */

double
first_QuadrantBearing(double angle)
{
    double bearing;
    bearing = angle;

    return (bearing);
}

/*
 * Calculates the Bearing of the Second Quadrant
 *Pre: angle is defined
 */

double
second_QuadrantBearing(double angle)
{
    double bearing;
    bearing = 180 - angle;

    return (bearing);
}
/*
 * Calculates the Bearing of the Third Quadrant
 *Pre: angle is defined
 */

double
third_QuadrantBearing(double angle)
{
    double bearing;
    bearing = 270 - angle;

    return (bearing);
}
/*
 * Calculates the Bearing of the Fourth Quadrant
 *Pre: angle is defined
 */

double
fourth_QuadrantBearing(double angle)
{
    double bearing;
    bearing = 360 - angle;

    return (bearing);
}

/*
 * Display the Bearing
 *
 */


void
displayResult(double angle)
{
    double bearing;

    if(angle > 0 && angle < 90)
    {
        bearing = first_QuadrantBearing(angle);
        printf("The bearing is North 0%.2f East",bearing);
    }
    else if (angle == 90)
    {
        printf("The bearing is East due Direction");
    }
    else if (angle > 90 && angle < 180)
    {
        bearing = second_QuadrantBearing(angle);
        printf("The bearing is South 0%.2f East",bearing);
    }
    else if  (angle == 180)
    {
        printf("The bearing is South Direction");
    }
    else if  (angle > 180 && angle < 270)
    {
        bearing = third_QuadrantBearing(angle);
        printf("The bearing is South 0%.2f West",bearing);
    }
    else if  (angle == 270)
    {
        printf("The bearing is West Direction");
    }
    else if  (angle > 270 && angle < 360)
    {
        bearing = fourth_QuadrantBearing(angle);
        printf("The bearing is North 0%.2f West",bearing);
    }
    else if (angle == 0 || angle == 360 )
    {

        printf("The bearing is due North Direction");
    }
    else
        printf("Error angle entry");
}

