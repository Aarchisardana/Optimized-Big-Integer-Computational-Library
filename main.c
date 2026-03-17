#include <stdio.h>
#include "BigInteger.h"

int main() {
    char num1[1000], num2[1000];

    printf("Enter first number: ");
    scanf("%s", num1);

    printf("Enter second number: ");
    scanf("%s", num2);

    BI a = initialize(num1);
    BI b = initialize(num2);

    // Addition
    BI sum = add(a, b);
    printf("Sum: ");
    display(sum);
    printf("\n");

    // Multiplication
    BI product = mul(a, b);
    printf("Product: ");
    display(product);
    printf("\n");

    return 0;
}
