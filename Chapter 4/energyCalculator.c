 /*
  * Programmer: Tatenda E Chipwanya    Date completed: February 14, 2021
  * Instructor: Khulekani Sibanda      Class: SCS 1101
  * Application version : 1.0.0
  * A PROGRAM THAT CALCULATES THE ENERGY DELIVERED INTO THE HOUSE AFTER COMBUSTION.
  *
  */

#include <stdio.h>
#include <math.h>

int
main()
{
    float gallons;
    unsigned long long btu;
    unsigned long long energyBeforeEfficiency;
    unsigned long long finalEnergy;
    double efficiency;
    printf("Enter number of gallons  => \n");
    scanf("%f",&gallons);
    printf("Enter percentage of efficiency of house machinery  => \n");
    scanf("%f",&btu);


    energyBeforeEfficiency = (gallons*5860000)/42;
    finalEnergy = (efficiency/100)*energyBeforeEfficiency;

    printf("Energy gained by burning %.2f gallons of fuel is %llu BTUs.",gallons,finalEnergy);


}
