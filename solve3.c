#include <stdio.h>

int main() {
    int money;

    printf("Enter the amount of money: ");
    scanf("%d", &money);

    if (money >= 10000) {
        printf("Gucci Bag\n");
        if (money > 20000) {
            printf("Gucci Belt");
        }
    } else if (money >= 5000) {
        printf("Buy something from new market.");
    } else {
        printf("Levis Bag");
    }
    return 0;
}