 /*
  * Programmer: Tatenda E Chipwanya    Date completed: February 8, 2021
  * Instructor: Khulekani Sibanda     Class: SCS 1101
  *
  * PROGRAM THAT CALCULATES ACCELERATION AT TAKEOFF AND TIME A JET IS CATAPULT FROM AN AIRCRAFT CARRIER.
  *
  */

#include <stdio.h>
#include <math.h>
int
main()
{
    double velocity_initial; //Velocity input by the user in KM per hour
    double velocity_converted; // Converted Velocity to m/s
    double distance; // Distance over which a plate is catapult on the carrier
    double time_of_catapult; //Time during launch catapult
    double acceleration; // Constant acceleration at take-off
/* Get speed from the user*/
    printf("Enter the initial speed in Kilometers per Hour  => \n");
    scanf("%lf",&velocity_initial);

    printf("Enter the distance of catapult in meters   => \n");
    scanf("%lf",&distance);

    velocity_converted = (velocity_initial*1000)/(3600);  // 1 km = 1000 m and one hour = 3600 s

    acceleration = (velocity_converted*velocity_converted)/(2*distance); // acceleration calculation

    time_of_catapult = (velocity_converted)/acceleration;

    printf("A Jet catapult at velocity of : %.2f Km/Hr over a distance of :  %.2f meters gains takeoff acceleration of : %.2f m/s*s over : %.2f seconds.",velocity_initial,distance,acceleration,time_of_catapult);


    return(0);
}
