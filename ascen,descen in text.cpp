#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Ascending order: ");
    if (num1 <= num2 && num1 <= num3) {
        printf("%d ", num1);
        if (num2 <= num3) {
            printf("%d %d", num2, num3);
        } else {
            printf("%d %d", num3, num2);
        }
    } else if (num2 <= num1 && num2 <= num3) {
        printf("%d ", num2);
        if (num1 <= num3) {
            printf("%d %d", num1, num3);
        } else {
            printf("%d %d", num3, num1);
        }
    } else {
        printf("%d ", num3);
        if (num1 <= num2) {
            printf("%d %d", num1, num2);
        } else {
            printf("%d %d", num2, num1);
        }
    }
    printf("\n");
    printf("Descending order: ");
    if (num1 >= num2 && num1 >= num3) {
        printf("%d ", num1);
        if (num2 >= num3) {
            printf("%d %d", num2, num3);
        } else {
            printf("%d %d", num3, num2);
        }
    } else if (num2 >= num1 && num2 >= num3) {
        printf("%d ", num2);
        if (num1 >= num3) {
            printf("%d %d", num1, num3);
        } else {
            printf("%d %d", num3, num1);
        }
    } else {
        printf("%d ", num3);
        if (num1 >= num2) {
            printf("%d %d", num1, num2);
        } else {
            printf("%d %d", num2, num1);
        }
    }
    printf("\n");
    return 0;
}

