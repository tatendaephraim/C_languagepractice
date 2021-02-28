 /*
  * Programmer: Tatenda E Chipwanya    Date completed: February 7, 2021
  * Instructor: Khulekani Sibanda      Class: SCS 1101
  *
  * THE APPLICATION THAT ESTIMATES TEMPERATURE OF THE FRIDGE AFTER A POWER OUTAGE FOR LAPSED DURATION IN HOURS AND MINUTES.
  *
  */

#include <stdio.h>
int
main()
{
    double temperature;
    double hours_Before_min; // Hours before minutes were added
    double final_Hours;
    double converted_Hours;
    double minutes;

    printf("Enter Hours since power outage >>> \n");
    scanf("%lf",&hours_Before_min);
    printf("How many minutes lapsed before power outage >>> \n");
    scanf("%lf",&minutes);

    converted_Hours =  minutes/60.00; // Conversion of minutes to Hours
    final_Hours = hours_Before_min + converted_Hours;

    temperature = (((4*final_Hours*final_Hours)/(final_Hours+2))-20); // Implementation of the final formula
    printf("The temperature is: %.2f Degrees Centigrade. ",temperature);



}
