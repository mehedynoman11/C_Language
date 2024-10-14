#include <stdio.h>

int main() {
    int sum = 0;
    int i;
    int n;

    printf("Please Write a Number for getting result of n th Number?\n");
    scanf("%d", &n);

    for (i=1;i<=n;i++) {
        sum+=i;
    }
    printf("%d", sum);

    return 0;
}