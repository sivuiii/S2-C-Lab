#include <stdio.h>

int main() {
    int num, originalNum, revNum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        digit = num % 10;
        revNum = revNum * 10 + digit;
        num /= 10;
    }

    if (originalNum == revNum)
        printf("%d is a Palindrome\n", originalNum);
    else
        printf("%d is Not a Palindrome\n", originalNum);

    return 0;
}
