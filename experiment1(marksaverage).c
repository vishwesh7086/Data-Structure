#include <stdio.h>



int main() {
    int arr[5], sum = 0;
    float avg;

    for (int i = 0; i < 5; i++) {
        printf("Enter the marks : ");
        scanf("%d", &arr[i]);

        while (arr[i] < 0 || arr[i] > 100) {
            printf("Invalid! Re-enter marks: ");
            scanf("%d", &arr[i]);
        }

        sum += arr[i];
    }

    avg = sum / 5.0;
    printf("Average = %.2f\n", avg);

    for (int i = 0; i < 5; i++) {
        if (arr[i] < 40) {
            printf("Fail\n");
            return 0;
        }
    }

    printf("Pass\n");
    return 0;
}
