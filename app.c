// #include <stdio.h>

// int main() {

//     int firstNumber;
//     int secondNumber;

//     printf("What is the first number? :-");
//     scanf("%d ", &firstNumber);
//     printf("What is the second number? :-");
//     scanf("%d ", &secondNumber);
    
//     float Answer = firstNumber + secondNumber;
//     float Answer1 = firstNumber - secondNumber;
//     float Answer2 = firstNumber * secondNumber;
    
//     float Answer3 = (float) firstNumber / secondNumber;

//     printf("%d", Answer, Answer1, Answer2, Answer3);

//     return 0;
// }

// #include <stdio.h>

// int main() {

//     int firstNumber;
//     int secondNumber;

//     printf("What is the first number? :- ");
//     scanf("%d", &firstNumber);

//     printf("What is the second number? :- ");
//     scanf("%d", &secondNumber);

//     printf("Hello, Noman!\n");

//     // Perform calculations
//     float sum = firstNumber + secondNumber;
//     float difference = firstNumber - secondNumber;
//     float product = firstNumber * secondNumber;
//     float quotient = (float)firstNumber / secondNumber; // Type casting for float division

//     // Print the results
//     printf("Sum: %.2f\n", sum);
//     printf("Difference: %.2f\n", difference);
//     printf("Product: %.2f\n", product);
//     printf("Quotient: %.2f\n", quotient);

//     return 0;
// }


#include <stdio.h>

int main() {
    int firstNumber, secondNumber;

    // Taking input from the user
    printf("Enter the first number: ");
    scanf("%d", &firstNumber);

    printf("Enter the second number: ");
    scanf("%d", &secondNumber);

    // Performing operations and printing the results
    printf("%d + %d = %d\n", firstNumber, secondNumber, firstNumber + secondNumber);
    printf("%d - %d = %d\n", firstNumber, secondNumber, firstNumber - secondNumber);
    printf("%d * %d = %d\n", firstNumber, secondNumber, firstNumber * secondNumber);

    // Casting to float to ensure accurate division result
    printf("%d / %d = %.2f\n", firstNumber, secondNumber, (float)firstNumber / secondNumber);

    return 0;
}
