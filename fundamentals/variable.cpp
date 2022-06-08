#include <iostream>
#include <cstdio>

int main () {
    // type identifier = value
    double price = 99.80;
    double tax = 0.08;

    // type identifier = exp;
    double finalPrice = price * (1 + tax);

    printf("The final price is %.2f.\n", finalPrice); // 2 decimals
    printf("Age = %d", finalPrice);

    return 0;
}