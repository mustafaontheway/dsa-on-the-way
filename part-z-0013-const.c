#include <stdio.h>

int profit_or_loss(int sales, int variable_cost, int fixed_cost) {

    return sales - (variable_cost + fixed_cost);
}

int main() {

    const int fixed_cost = 650000;

    int sales_result1 = profit_or_loss(740000, 25000, fixed_cost);

    printf("Quarter 1 sales result (profit or loss): %d", sales_result1); // Quarter 1 sales result (profit or loss): 65000

    return 0;
}

