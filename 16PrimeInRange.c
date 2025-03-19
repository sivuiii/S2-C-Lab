#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are: ", start, end);

    for (i = start; i <= end; i++) {
        if (i <= 1)
            continue;

        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
