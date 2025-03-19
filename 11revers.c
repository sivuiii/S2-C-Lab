#include <stdio.h>

int main() {
    int num, revNum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        revNum = revNum * 10 + digit;
        num /= 10;
    }

    printf("Reversed Number = %d\n", revNum);

    return 0;
}
