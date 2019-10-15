#include <stdio.h>

double power(double x, int n) {
    double r = 1.0;
    // Store the value of n to print
    int n1 = n;
    while(n > 0) {
        if (n%2 != 0)
            r = r*x;
        x = x*x;
        n = n/2;
    }
    printf("%.2lf to the power of %d is %.2lf",x,n1,r);
}


int main () {
    power(2.0,3);
}
