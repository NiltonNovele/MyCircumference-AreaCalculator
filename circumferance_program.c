#include <stdio.h>

int main(){

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area; 
    char operation;

    printf("Would you like to calculate the area or the circumference of a circle?\n Type 'A' for area or type 'C' for circumference.\n");
    scanf("\n%c", &operation);

    printf("Please enter the radius of the circle.\n");
    scanf("\n%lf", &radius);


    if(operation == 'A'){
        area = PI * radius * radius;
        printf("\nThe area of the circle is: %.1lf",area);
    }
    else if(operation == 'C'){
        circumference = 2 * PI * radius;
        printf("\nThe circumference of the circle is: %.1lf",circumference);
    }
    else{
        printf("\n%c is not a valid operation.");
    }
   

}