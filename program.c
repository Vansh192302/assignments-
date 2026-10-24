#include <stdio.h>

int main() {
    float length, perimeter breadth area;
    printf("Enter length:");
    scanf("%f"&length):
    printf("Enter perimeter:");
    scanf("%f",&perimeter);
    breadth=(perimeter/2)-length;
    area=length*breadth;
    printf("Breadth+%2f\n",breadth);
    printf("Area=%.2f\n",area);
    return 0; 
}