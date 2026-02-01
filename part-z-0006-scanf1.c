#include <stdio.h>

int main() {

    double radius;

    printf("Radius value: ");

    scanf( "%lf", &radius);

    double area = 3.14 * radius * radius;

    printf("Area : %.3lf", area);

    return 0;

}

// Radius value: 41
// Area : 5278.340
