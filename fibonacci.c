#include <stdio.h>

int main() {
    int n, i;
    unsigned long long a = 0, b = 1, next;

    printf("Enter the n : ");
    scanf("%d", &n);

    if (n == 1) {
        printf("The %dth Fibonacci number is: %llu\n", n, a);
    } else if (n == 2) {
        printf("The %dth Fibonacci number is: %llu\n", n, b);
    } else {

        for (i = 3; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        printf("The %dth Fibonacci number is: %llu\n", n, b);
    }

    return 0;
}

