#include <stdio.h>
// Start of main function
int main() {
	// variable Declaration
    int n, i;
    // Output Statement (prompt)
    printf("Enter an integer: ");
    //Input Statement
    scanf("%d", &n);
    // Logic of program
    //Implementation of for loop
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d \n", n, i, n * i);
    }
    return 0;
}
