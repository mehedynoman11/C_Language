#include <stdio.h>

int main()  {
    int Number;
    printf("Write a non-negetive integer:");
    scanf("%d", &Number);

    if (Number < 0)
    {
        printf("please enter a non-negetive integer.\n");
        return 1;
    }
    if (Number % 2 == 0) {
       printf("even number\n");
    } else {
        printf("Odd Number\n3");
    }  
    return 0;  
}