 /*
  * Programmer: Tatenda E Chipwanya    Date completed: February 24, 2021
  * Instructor: Khulekani Sibanda      Class: SCS 1101
  * Version:    1.0.0
  *
  *The program that that gives out lummens produced for a given light wattage
  */

  #include <stdio.h>
  #include <math.h>
  int
  main()
  {
      int watts,lummens;
      instruct();
      printf("Please Enter the desired wattage > ");
      scanf("%d",&watts);

      switch(watts)
      {
      case 15:
        lummens = 125;
        printf("Light wattage of %d Watts gives %d Lummnes",watts,lummens);
        break;
      case 25:
        lummens = 215;
        printf("Light wattage of %d Watts gives %d Lummnes",watts,lummens);
        break;
      case 40:
        lummens = 500;
        printf("Light wattage of %d Watts gives %d Lummnes",watts,lummens);
        break;
      case 60:
        lummens = 880;
        printf("Light wattage of %d Watts gives %d Lummnes",watts,lummens);
        break;
      case 75:
        lummens = 1000;
        printf("Light wattage of %d Watts gives %d Lummnes",watts,lummens);
        break;
       case 100:
        lummens = 1675;
        printf("Light wattage of %d Watts gives %d Lummnes",watts,lummens);
        break;
       default:
        lummens = -1;
        printf("Invalid wattage");

      }
      return(0);
  }
  /*
 * Displays user instructions
 */
void
instruct(void)
{
    printf("This program prompts user to give lamp wattage ");
    printf("in the range of 15, 25 ,40 ,60, 75, 100 watts and ");
    printf(" gives the respective lummens.\n");
    printf("Press <return> or <enter> after ");
    printf("typing each number.\n\n");

}
