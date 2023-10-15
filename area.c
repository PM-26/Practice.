#include <stdio.h>

int main()
{
    float a,b,c;
    printf("Enter value of Side a\n");
    scanf("%f",&a);
    printf("Enter value of Side b\n");
    scanf("%f",&b);
    printf("Enter Radius \n");
    scanf("%f",&c);

    printf("Area of Square= %f \n",a*b);
    printf("Area of Rectangle= %f \n",a*b);
    printf("Area of Circle= %f \n",(2*22/7*c));

    return 0;
}
