#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, originalNum, sum, digit, n, temp;

    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d are: ", start, end);

    for (num = start; num <= end; num++) {
        originalNum = num;
        n = 0;
        temp = num;

        // Count number of digits
        while (temp > 0) {
            temp /= 10;
            n++;
        }

        sum = 0;
        temp = num;

        // Calculate sum of nth power of digits
        while (temp > 0) {
            digit = temp % 10;
            sum += pow(digit, n);
            temp /= 10;
        }

        // Check if Armstrong number
        if (sum == originalNum)
            printf("%d ", originalNum);
    }

    printf("\n");
    return 0;
}
