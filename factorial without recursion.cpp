#include <stdio.h>
int factorial(int x) {
    if (x < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return -1; 
    } else if (x == 0 || x == 1) {
        return 1;
    } else {
        return x * factorial(x - 1);
    }
}
int main() {
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    printf("Factorial of %d = %d\n", x, factorial(x));
    return 0;
}

