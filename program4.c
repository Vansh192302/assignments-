#include <stdio.h>

int main(){
    char grade;
    printf("Enter your grade (A+,A, B+,B, C, D): ");
    scanf(" %c", &grade);
    switch(grade){
        case 'A':
        case 'A+':
            printf("Category: Excellent");
            break;
        case 'B':
        case 'B+':
            printf("Category: Good");
            break;
        case 'C':
        case 'D':
            printf("Category: Needs Improvement");
            break;
        default:
            printf("Invalid grade");
    }
    return 0;
}