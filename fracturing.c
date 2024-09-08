#include <stdio.h>
#include <math.h>

#define PI 3.14159

double askForUserInput() {
    double value;
    printf("Enter a value: ");
    scanf("%lf", &value);
    return value;

}

double calculateDistance() {
    double x1, y1, x2, y2, distance;

    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);

    return distance;
}


double calculatePerimeter() {
    double distance = calculateDistance();
    double radius = distance / 2;
    double perimeter = 2 * PI * radius;

    printf("The perimeter of the circle is %.2lf\n", perimeter);
    return 1.0; 
}

double calculateArea() {
    double distance = calculateDistance();
    double radius = distance / 2;
    double area = PI * pow(radius, 2);

    printf("The area of the circle is %.2lf\n", area);
    return 2.0; 
}

double calculateWidth() {
    double distance = calculateDistance();
    printf("The width of the circle is %.2lf\n", distance);
    return 1.0; 
}

double calculateHeight() {
    double distance = calculateDistance();
    printf("The height of the circle is %.2lf\n", distance);
    return 1.0; 
}

int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}
