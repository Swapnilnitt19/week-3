#include <stdio.h>

int main() {
    int decimal, remainder;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    while (decimal > 0) {
        remainder = decimal % 2; 
        printf("%d", remainder);  
        decimal = decimal / 2;    
    }

    printf("\n");

    return 0;
    
}

