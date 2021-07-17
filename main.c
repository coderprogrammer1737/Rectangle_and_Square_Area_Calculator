/*To find area of rectangle and square, where input is the length*/
#include <stdio.h>

int main()
{
    int length, breadth;
    float area;
    printf("Enter the length & breadth of the rectangle, if you want the area of a rectangle.");
    printf("Enter the side of the square two times, if you want the area of a square.\n");
    scanf("%d %d", &length, &breadth);
    area = length * breadth;
    printf("Area of rectangle or square: %f", area);
    return 0;
}