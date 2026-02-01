#include <stdio.h>

int main() {

    int count_even_nums = 0;

    for (int i = 1; i <= 10; i++) {

        if (i % 2 == 0) {

            count_even_nums += 1;
        } 

    }

    printf("Number of even numbers: %d", count_even_nums);

    return 0;
}

// Number of even numbers: 5
