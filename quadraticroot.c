#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, root1, root2, realpart, imagpart;
    printf("Enter coefficients a, b and c:\n");
    scanf("%f%f%f",&a,&b,&c );
    
    d = b*b - 4*a*c;
    if (d >0)
    {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
    printf("Roots are real and distinct.\n");
    printf("Root1 = %.2f\n", root1);
    printf("Root2 = %.2f\n", root2);
    }
else if (d == 0)
{
    root1 = -b/(2*a);
    printf("Roots are real and equal.\n");
    printf("Root = %.2f\n", root1);
}

    else {
    realpart = -b / (2*a);
    imagpart = sqrt(-d) / (2*a);
    printf("Roots are complex and distinct.\n");
    printf("Root1 = %.2f + %.2fi\n", realpart, imagpart);
    printf("Root1 = %.2f - %.2fi\n", realpart, imagpart);

}
return 0;
}
