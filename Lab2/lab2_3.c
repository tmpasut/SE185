/*-----------------------------------------------------------------------------
-					          SE 185 Lab 02
-             Developed for 185-Rursch by T.Tran and K.Wang
-	Name: Theresa Pasut
- 	Section: A
-	NetID: 511033540
-	Date: 9/7/2018
-----------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------
-	                            Includes
-----------------------------------------------------------------------------*/
#include <stdio.h>


/*-----------------------------------------------------------------------------
-	                            Defines
-----------------------------------------------------------------------------*/


/*-----------------------------------------------------------------------------
-	                            Prototypes
-----------------------------------------------------------------------------*/


/*-----------------------------------------------------------------------------
-							 Implementation
-----------------------------------------------------------------------------*/
int main()
{
    int integerResult;
    double decimalResult;

    integerResult = 77 / 5;
    printf("The value of 77/5 is %lf, using integer math\n", integerResult);

    integerResult = 2 + 3;
    printf("The value of 2+3 is %d\n");

    decimalResult = 1.0 / 22.0;
    printf("The value 1.0/22.0 is %d\n", decimalResult);

    return 0;
}

