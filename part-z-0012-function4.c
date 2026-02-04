#include <stdio.h>

int sum_elements(int arr[], int len) {

    int sum = 0;

    for (int i = 0; i < len; i++) {

        sum += arr[i];
    }

    return sum;
} 

int main() {

    int nums[] = {2010, 2, -500};

    int length = sizeof(nums) / sizeof(nums[0]);

    int sum_result1 = sum_elements(nums, length);

    printf("Sum of array elements: %d", sum_result1); // Sum of array elements: 1512

    return 0;
}

