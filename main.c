#include <stdio.h>
#include "NumClass.h"

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num1 < 0 || num2 < 0) {
        printf("stop playin and give me the right digs. \n");
        return 0;
    }

    printf("Armstrong numbers:");
    for (int i = num1; i <= num2; i++) {
        if (isArmstrong(i) == 1) {
            printf(" %d", i);
        }
    }

    printf("\nPalindromes:");
    for (int i = num1; i <= num2; i++) {
        if (isPalindrome(i) == 1) {
            printf(" %d", i);
        }
    }

    printf("\nPrime numbers:");
    for (int i = num1; i <= num2; i++) {
        if (isPrime(i) == 1) {
            printf(" %d", i);
        }
    }

    printf("\nStrong numbers:");

    for (int i = num1; i <= num2; i++) {
        if (isStrong(i) == 1) {
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}
