#include <stdio.h>

int main() {

    char name[20];

    printf("Insert your name: \n");

    scanf("%s", name);

    printf("Your name: %s\n", name); // In C, array names act as addresses, so & is unnecessary.

    printf("Memory address of your fav. proverb (Int): %d\n", name);

    return 0;
}

// Insert your name: 
// mustafa
// Your name: mustafa
// Memory address of your fav. proverb (Int): 910163072
