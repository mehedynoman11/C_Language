// Problem:
// c
// Copy code
// void swap(int *x, int *y);
// This function receives two integer pointers, int* x and int* y. Your task is to swap the values of the two integers using pointers. After calling the function, the values of x and y should be exchanged.
#include <stdio.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    printf("Enter a number: \n");
    scanf("%d %d", &a, &b);
    
    printf("Before swap, a=%d b=%d\n", a, b);
    swap(&a, &b);
    printf("After swap, a=%d b=%d\n", a, b);
}