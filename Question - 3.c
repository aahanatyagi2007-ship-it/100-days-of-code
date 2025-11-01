//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main()
{ 
    int area, length, width, perimeter;
    printf("Enter the length and width of the rectangle: ");
    scanf("%d %d", &length, &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("Perimeter of the rectangle: %d\n", perimeter);  
    printf("Area of the rectangle: %d\n", area);
    
    return 0;
}
