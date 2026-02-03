#include <stdio.h>

int main() {

    int year = 2010;

    int *pointer_year;

    // &varA -> address of varA

    pointer_year = &year;

    //Dereferencing 

    printf("Value: %d\n", *pointer_year); // Value: 2010

    // update the year value

    *pointer_year = 2026;

    printf("New value: %d\n", *pointer_year); // New value: 2026

    printf("Year: %d\n", year); // Year: 2026

    *pointer_year += 5;

    printf("Year: %d\n", year); // Year: 2031

    return 0;
}

