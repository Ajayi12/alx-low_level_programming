#include <stdio.h>

int main() {
    // Initialize the sum
    int sum = 0;

    // Iterate through numbers from 1 to 9
    for (int number = 1; number < 10; number++) {
        // Check if the number is a multiple of both 3 and 5
        if (number % 3 == 0 || number % 5 == 0) {
            // Add the number to the sum
            sum += number;
        }
    }

    // Print the sum
    printf("Sum: %d\n", sum);

    return 0;
}
