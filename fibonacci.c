#include <stdio.h>

int fib(int n);

int main(void) {
    int returnValue = 0;
    printf("\n\nFibonacci coding challenge\n\n");
    returnValue = fib(9);
    printf("The number is %d\n\n", returnValue);
}

/*****************************************************************
 * fib
 * calculates the nth number of the fibonacci sequence
 * 
 * arguments:
 *     int n - the desired number of the fibonacci sequence
 * 
 * return:
 *     int - the calculated nth number of the fibonacci sequence
 *****************************************************************/
int fib(int n) {
    /* alternate solution for fib */
    /*if (n==0) {
        return 0;
    }
    if (n==1) {
        return 1;
    }
    return fib(n-2)+fib(n-1);*/

    int lastTwo[2]={0,1}; /* the last two numbers */
    int nthNumber = 0; /* this is the number that is returned */
    int numIterations = 0;
    while (numIterations < n-1) {
        nthNumber = lastTwo[0]+lastTwo[1]; /* Fn - where the next number is calculated */
        //printf("%d + %d = %d\n", lastTwo[0], lastTwo[1], nthNumber);
        
        /* updating lastTwo for the next iteration */
        lastTwo[0] = lastTwo[1]; /* replaces Fn-2 with Fn-1 */
        lastTwo[1] = nthNumber; /* replaces Fn-1 with Fn */
        numIterations++;
    }
    return nthNumber;
}