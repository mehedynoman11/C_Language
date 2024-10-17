#include <stdio.h>

int main() {
    
    char a;
    scanf("%c", &a);
    if (a>= 97 && a<= 122) {
        int answer = a - 32;
        printf("%c", answer);
    } else {
        int answer = a + 32;
        printf("%c", answer);
    }
    

    return 0;
}