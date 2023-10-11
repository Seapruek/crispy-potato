#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    // Input coefficients a, b, and c
    printf("Enter the coefficient a: ");
    scanf("%lf", &a);
    printf("Enter the coefficient b: ");
    scanf("%lf", &b);
    printf("Enter the coefficient c: ");
    scanf("%lf", &c);

    // Write the polynomial in the desired format
    printf("The polynomial is: %gx^2 ", a);
    if (b >= 0) {
        printf("+ %gx ", b);
    } else {
        printf("- %gx ", -b);
    }
    if (c >= 0) {
        printf("+ %g\n", c);
    } else {
        printf("- %g\n", -c);
    }

    // Calculate the discriminant (b^2 - 4ac)
    discriminant = b * b - 4 * a * c;

    // Check if the discriminant is positive, zero, or negative
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct: x1 = %lf, x2 = %lf\n", root1, root2);
    } else if (discriminant == 0) {
        // One real root (repeated)
        root1 = -b / (2 * a);
        printf("The root is real and repeated: x = %lf\n", root1);
    } else {
        // Complex roots
        double real_part = -b / (2 * a);
        double imaginary_part = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex: x1 = %lf + %lfi, x2 = %lf - %lfi\n", real_part, imaginary_part, real_part, imaginary_part);
    }

    return 0;
}