#include <stdio.h>

int main() {

    int firstNumber;
    int secondNumber;
    scanf("%d What is the first number? :-", firstNumber);
    scanf("%d What is the second number? :-", secondNumber);
    printf("Hello , Noman!");
    float Answer = firstNumber + secondNumber;
    float Answer1 = firstNumber - secondNumber;
    float Answer2 = firstNumber * secondNumber;
    
    float Answer3 = firstNumber / secondNumber;

    printf("%d", Answer, Answer1, Answer2, Answer3);

    return 0;
}

