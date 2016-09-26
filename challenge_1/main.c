#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
	long int T;
	scanf("%ld", &T);
    long int i = 0;
    long int n = 100;
    long int sum = 0;
    long int three = 0;
    long int five = 0;
    long int fifteen = 0;
    long int true_n = 0;
    
    long double calc = 0;
    long double calc2 = 0;
    long double calc3 = 0;
	while (T != 0)
	{
        /*
		scanf("%ld", &n);
        for (i = 0; i < n; i++)
        {
            if (i != 0 && i % 5 == 0 || i != 0 && i % 3 == 0) {
                sum += i;
            }
        }	
	printf("%ld\n", sum);
	sum = 0;
    */
        scanf("%ld", &n);
        /*Find the divisible value by 3 and five.
        For instnace, if 10 is given the closest divisible value for 3 is 9 because 3*3 = 9.
        */
        n = n-1;
        for (i = n; i > n-3; i--)
            {
            if (i % 3 == 0)
                three = i;
            //printf("Three: %ld", three);
        }
        
        for (i = n; i > n-5; i--)
            {
            if (i % 5 == 0)
            five = i;
            //printf("Five: %ld", five);
        }
        for (i = n; i > n-15; i--)
            {
            if (i % 15 == 0)
            fifteen = i;
            //printf("Five: %ld", five);
        }
        
        
        
        
        //printf("Five: %ld\n", five);
        true_n = (five/5);
        // printf("True N: %ld\n", true_n);
        calc = ((true_n/(long double)2)*(five+5));
        
        true_n = (three/3);
        //printf("True N: %ld\n", true_n);
        calc2 = ((true_n/(long double)2)*(three+3));
        true_n = (fifteen/15);
        calc3 = ((true_n/(long double)2)*(fifteen+15));
        /*
        printf("Formula value for 15: %.0Lf\n", calc3);
        printf("Formula value for 3: %.0Lf\n", calc2);
        printf("Formula value for 5: %.0Lf\n", calc);
        calc3 = calc+calc2-calc3;
        printf("Total calculation: %.0Lf\n", calc3);
        */
        calc3 = calc+calc2-calc3;
        printf("%.0Lf\n", calc3);
        //printf("Value: %ld\n", n);	
    T--;
	}
    return 0;
}

