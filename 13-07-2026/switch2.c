#include <stdio.h>

int main() {
    int n;
    float x, r, l, b, h; // Changed to float for accurate decimal math

    printf("Enter the numbers:\n1.Square\n2.Circle\n3.Triangle\n4.Rectangle\n5.Exit\n");
    printf("Your choice: ");
    scanf("%d", &n);

    switch(n) {
        case 1:
            printf("Enter the side of square: ");
            scanf("%f", &x);
            printf("Area of square: %.2f\n ", x * x);
            break;

        case 2:
            printf("Enter the radius: ");
            scanf("%f", &r);
            printf("Area of circle: %.2f\n", 3.14159 * r * r);
            break;

        case 3:
            printf("Enter the height: ");
            scanf("%f", &h);
            printf("Enter the base: ");
            scanf("%f", &b);
            printf("Area of triangle: %.2f\n", 0.5 * h * b);
            break;

        case 4:
            printf("Enter the length: ");
            scanf("%f", &l);
            printf("Enter the breadth: ");
            scanf("%f", &b);
            printf("Area of rectangle: %.2f\n", l * b);
            break;

        case 5:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice!\n");
            break;
    }
    return 0;
}
