 /*
  * Programmer: Tatenda E Chipwanya    Date completed: February 9, 2021
  * Instructor: Khulekani Sibanda      Class: SCS 1101(Computer Science)
  * Version:    1.0.0
  * National University of Science and Technology (Zimbabwe)
  * A PROGRAM THAT CALCULATES THE EQUATION OF A NORMAL GIVEN TWO COORDINATES.
  *
  */

#include <stdio.h>
#include <math.h>
int
main()
{
    double x_1,x_2,y_1,y_2,x_mid,y_mid,y_intercept,gradient_normal,gradient;

    printf("Please enter the A (x;y) coordinates  => \n");
    scanf("%lf\n %lf",&x_1,&y_1);
    printf("Please enter the B (x;y) coordinates  => \n");
    scanf("%lf\n %lf",&x_2,&y_2);
    gradient = (y_2 - y_1)/(x_2-x_1);
    gradient_normal = -1/gradient;

    x_mid = (x_1+x_2)/2;
    y_mid = (y_1+y_2)/2;

    y_intercept = -gradient_normal*x_mid + y_mid;


    printf("The equation of the normal between points A (%.2f;%.2f) and B (%.2f;%.2f) is y = %.2fx + (%.2f)",x_1,y_1,x_2,y_2,gradient_normal,y_intercept);

    return(0);
}
