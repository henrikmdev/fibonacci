#include <stdio.h>

int fib(int n);

int main(void) {
    int returnValue = 0;
    printf("Fibonacci coding challenge\n");
    returnValue = fib(9);
    printf("The number is %d", returnValue);
}

int fib(int n) {
    //printf("I am in fib\n");
    if (n==0) {
        return 0;
    }
    if (n==1) {
        return 1;
    }
    // n > 1 case Fn-1, Fn-2??
    // pretend 4, F3 and F2, F4=F3+F2, F3=F2+F1, F2=F1+F0
    // pretend 2, F2=F1+F0
    // n=2, fib(2-2), fib(2-1)
    return fib(n-2)+fib(n-1);

    int lastTwo[2]={0,1};
    int nthNumber = 0;
    int numIterations = 0;
    while (numIterations < n-1) {
        nthNumber = lastTwo[0]+lastTwo[1]; //F2
        printf("%d + %d = %d\n", lastTwo[0], lastTwo[1], nthNumber);
        lastTwo[0] = lastTwo[1]; //replaces F0 with F1
        lastTwo[1] = nthNumber; //replaces F1 with F2
        numIterations++;
    }
    return nthNumber;
}