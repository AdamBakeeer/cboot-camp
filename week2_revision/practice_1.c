#include <stdio.h>
int main() {
    float height;
    float width;
    float area;

    printf("Enter the height:\n");
    scanf("%f", &height);
    printf("Enter the width:\n");
    scanf("%f", &width);
    area = height * width;
    printf("The area of the rectangle is: %.2f\n", area);
    return 0;
    
}