#include <stdio.h>

int main() {

    int ages[] = {17, 99, 85, 76, 20};

    printf("%d\n", ages[2]); // 85

    // An integer value occupies 4 bytes of memory

    int length_ages = sizeof(ages) / sizeof(ages[2]); // (20 / 4 = 5)

    printf("Len of the array: %d\n", length_ages); // Len of the array: 5

    for (int i = 0; i < length_ages; i++) {

        printf("Age: %d\n", ages[i]);
    }

    return 0;
}

// Age: 17
// Age: 99
// Age: 85
// Age: 76
// Age: 20
