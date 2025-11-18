Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;  
    if (d > 0) {
        
        root1 = (-b + sqrt(d)) 
        root2 = (-b - sqrt(d)) 
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2f\nRoot 2 = %.2f\n", root1, root2);
    }
    else if (d == 0) {
     
        root1 = root2 = -b 
        printf("Roots are real and equal.\n");
        printf("Root = %.2f\n", root1);
    }
    else {
       
        realPart = -b 
        imagPart = sqrt(-d) 
        printf("Roots are imaginary (complex).\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
