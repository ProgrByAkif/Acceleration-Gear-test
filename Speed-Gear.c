
#include <stdio.h>  /* Standard Input & Output  */
                    
float s;            /* Float used because of the decimal places */
float average;   /* Average is calculated with the numbers obtained with decimals*/
float total;       /* All whole and decimal numbers are counted together */

int main () {       /* Main function of the program */

    for (int z = 0; z < 10; z++){          /* This causes the user to request input 10 times */

            printf ("What is your current speed?\n");       /* (\ n) represents that it goes to the next line. */
            scanf  ("%f", &s);             /* Function that offers the possibility to read a float, string or integer from the keyboard. */

        /* Condition: if speed is greater than or equal to x. If not go to the next question.*/
        /* printf if condition is met */

        while (s> 100){     /* While: as long as the condition is met, the program keeps asking. */
                            

            printf ("false!!!!!\n"); /* answer on condition */
            scanf ("%f", &s);       /* Float is linked to speed. */
        }
         if (s >= 80){              /*  If speed is between 80.0 and 100.0. */
            printf (" gear 5\n");         /* Then it is in gear 5. */

        } else if (s >= 60){        /* If speed is between 60.0 and 80.0. */ 
            printf (" gear 4\n");         /* Then it is in gear 4. */

        } else if (s >= 30){        /* If speed is between 30.0 and 60.0. */
            printf (" gear 3\n");         /* Then it is in gear 3. */

        } else if (s >= 10){        /* If speed is between 10.0 and 30.0. */
            printf ("gear 2\n");         /* Then it is in gear 2. */

        } else if (s > 0){          /* If speed is between 0.0 and 10.0. */
            printf (" gear 1\n");         /* Then it is in gear 1. */

        } else if (s == 0){         /* If the speed is 0. */
            printf (" gear free\n");      /* Then it is in gear free. */

        } else {               /* In all other cases. */
            printf ("gear reverse\n");   /* Then it is in gear reverse. */
        }

        total += s;                /* total = total + speed. */
        printf ("total is: %f\n", total); /* Total sum. */
       
    } 
    average = total / 10;       /* The average is calculated here. */
    printf ("your average speed is: %f\n", average); /* Total sum divided by the number that you have added is the average speed. */
       

        return 0;                        
}
