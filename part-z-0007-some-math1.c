#include <stdio.h>
#include <math.h>

int main() {

    double x = -12;

    x = fabs(x); // absolute val

    printf("x: %.0lf\n", x);

    x = pow(x, 3);

    printf("x: %.0lf\n", x);

    double y = 12.45;

    printf("new val 1: %.0lf\n", floor(y));

    printf("new val 2: %.0lf\n", ceil(y));

    printf("y: %.2lf\n", y);

}

// x: 12
// x: 1728
// new val 1: 12
// new val 2: 13
// y: 12.45
