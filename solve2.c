#include <stdio.h>

int main() {
    int number;
    printf("Tell me , if the number is positive, negetive or zero?");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("Positive Number");
    }
    else if (number < 0)
    {
        printf("Negetive Number");
    }
    else
    {
        printf("Zero");
    }
    return 0;
}