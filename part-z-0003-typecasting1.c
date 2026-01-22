#include <stdio.h>

int main() {

    int x = 22;

    int y = 7;

    int div1 = x / y;

    printf("Div 1: %d\n", div1);

    float div2 = (float) x / y;

    printf("Div 2: %f\n", div2);

    double div3 = (double) x / y;

    printf("Div 3: %lf\n", div3);

    return 0;
}

// Div 1: 3
// Div 2: 3.142857
// Div 3: 3.142857
