/*
  * Programmer: Tatenda E Chipwanya    Date completed: February 7, 2021
  * College                            National University of Science and Technology(NUST)
  * Instructor: Khulekani Sibanda      Class: SCS 1101/Introduction to Computer Science
  *
  * THE APPLICATION THAT PROGRAMS QUANTITIES OF MEDICATION TO BE INFUSED INTO A PATIENT .
  *
  */

  int
  main()
  {
      double volume_mil;
      double minutes; /*Minutes to be infused into patient"s body*/
      double rate; /* The rate of infusion per hour*/

      printf("Enter the volume to be infused in (ml) =>>>  ");
      scanf("%lf",&volume_mil);

      printf("Minutes over which to infuse =>>>  ");
      scanf("%lf",&minutes);

      rate = (60.00* volume_mil)/minutes;
      printf("VTBI: %.2f ml \nRate: %.2f ml/h",volume_mil,rate);

      return(0);
  }
