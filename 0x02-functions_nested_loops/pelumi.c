#include <stdio.h>

/* Example implementation of _putchar */
void _putchar(char c) {
    putchar(c);
}

/* Function to print a two-digit number with leading zero using _putchar */
void print_two_digit(int number) {
    if (number < 10) {
        _putchar('0');
    }
    printf("%d", number);
}

/* Function to print the specified format using _putchar */
void print_sequence() {
    for (int i = 0; i <= 10; i++) {
        print_two_digit(i);

        if (i < 10) {
            _putchar(',');
            _putchar(' ');
        }
    }
    _putchar('\n');
}

int main(void) {
    // Example: print the specified format
    print_sequence();

    return 0;
}

