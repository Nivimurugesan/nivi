#include <stdio.h>
void main()
{
    double x1, x2, nx3;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &x1, &x2, &x3);

    if( x1>=x2 && x1>=x3 )
        printf("%.2f is the largest number.", x1);

    if( x2>=x1 && x2>=x3 )
        printf("%.2f is the largest number.", x2);

    if( x3>=x1 && x3>=x2 )
        printf("%.2f is the largest number.", x3);

    
}
