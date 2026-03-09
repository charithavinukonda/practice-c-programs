#include <stdio.h>

// Macro that uses ternary operator to print odd or even
#define ODD_EVEN(num)  ( ( (num) & 1 ) ? printf("%d is odd\n", (num)) : printf("%d is even\n", (num)) )

int main () 
 {
    int num;
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1)
 {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    ODD_EVEN(num);  // Expand macro to evaluate and print

    return 0;
}
