#include <stdio.h>

int main() {
    int n, originaln, reversed = 0, remainder;
    printf("Enter a number : ");
    scanf("%d",&n);
    originaln = n;  
    while (n != 0) {
        remainder = n % 10;         
        reversed = reversed * 10 + remainder;  
        n /= 10;                  
    }
    
    if (originaln == reversed) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}

