//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main()
{
    int circumference, radius,area;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    circumference = 2 * 3.14 * radius; // Using 3.14
    area = 3.14 *radius *radius;
    printf("Circumference of the circle: %d\n", circumference);
    printf("ARea of circle:%d", area);
    return 0;
}
