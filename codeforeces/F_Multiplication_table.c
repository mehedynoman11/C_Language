#include <stdio.h>

int main() {

    int N, number;
    scanf("%d", &N);
    for (int i = 1; i <= 12; i++)
    {
        number = N * i;
        printf("%d * %d = %d\n", N,i, number );
    }
    return 0;
}