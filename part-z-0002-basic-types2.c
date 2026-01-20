#include <stdio.h>

int main() {

    // float 4 byte, double 8 byte

    float pi1 = 22.0f / 7.0f;

    double pi2 = 22.0 / 7.0;

    //long double pi3 = 22.0L / 7.0L;

    printf("Float pi: %.20f\n", pi1);

    printf("Float pi: %.2f\n", pi1);

    printf("Double pi: %.20lf\n", pi2);

    printf("Double pi: %.5lf\n", pi2);

    return 0;
}

// Float pi: 3.14285707473754882812
// Float pi: 3.14
// Double pi: 3.14285714285714279370
// Double pi: 3.14286
