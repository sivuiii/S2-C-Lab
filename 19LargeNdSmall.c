#include <stdio.h>

int main() {
    int n, i, largest, smallest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[20];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = smallest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];

        if (arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}
