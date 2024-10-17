#include <stdio.h>

int main() {
    int n, number;
    int even = 0, odd = 0, positive = 0, negative = 0;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &number);  

        if (number % 2 == 0) {
            even++;
        } else {
            odd++;
        }

        if (number > 0) {
            positive++;
        } else if (number < 0) {
            negative++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);

    return 0;
}
