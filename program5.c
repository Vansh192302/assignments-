#include <stdio.h>

int main() {
    long number;

    printf("Enter a number upto 9 digits: ");
    scanf("%ld", &number);

    if (number > 999999999) {
        printf("Number has more than 9 digits.\n");
    }
    else if (number >= 100000000) {
        printf("Odd number of digits.\n");  
    }
    else if (number >= 10000000) {
        printf("Even number of digits.\n");  
    }
    else if (number >= 1000000) {
        printf("Odd number of digits.\n");  
    }
    else if (number >= 100000) {
        printf("Even number of digits.\n");  
    }
    else if (number >= 10000) {
        printf("Odd number of digits.\n");   
    }
    else if (number >= 1000) {
        printf("Even number of digits.\n");  
    }
    else if (number >= 100) {
        printf("Odd number of digits.\n");  
    }
    else if (number >= 10) {
        printf("Even number of digits.\n"); 
    }
    else {
        printf("Odd number of digits.\n");  
    }

    return 0;
}