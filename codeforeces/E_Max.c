// #include <stdio.h>
// #include <limits.h>

// int main()
// {

//     int N, number;
//     int max = INT_MAX, min=INT_MIN;
//     scanf("%d", &N);
//     for (int i = 1; i <= N; i++)
//     {
//         scanf("%d", &number);
//         if (number > max)
//         {
//             max = number;
//         }
//         if (number < min)
//         {
//             min = number;
//         }
        
//     }
//     printf("%d %d", max, min);

//     return 0;
// }

#include <stdio.h>
#include <limits.h>

int main()
{
    int N, number;
    int max = INT_MIN;  // Initialize max to the smallest possible integer
    int min = INT_MAX;  // Initialize min to the largest possible integer
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &number);  
        if (number > max)
        {
            max = number;
        }
        if (number < min)
        {
            min = number;
        }
    }
    printf("%d %d\n", max, min);

    return 0;
}
