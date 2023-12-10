#include <stdio.h>

int main() {
    int A, B, C;

    printf("Enter the Number 1: ");
    scanf("%d", &A);

    printf("Enter the Number 2: ");
    scanf("%d", &B);

    printf("Enter the Number 3: ");
    scanf("%d", &C);

    if (A >= B) {
        if (A >= C) {
            printf("The Largest Number is %d", A);
        } else {
            printf("The Largest Number is %d", C);
        }
    } else {
        if (B >= C) {
            printf("The Largest Number is %d", B);
        } else {
            printf("The Largest Number is %d", C);
        }
    }

    return 0;
}

