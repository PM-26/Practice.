#include <stdio.h>
int main()
{
    int a,f=1;
    printf("Enter a number to find factorial:");
    scanf("%d",&a);
    if (a<0)
    {
        printf("Enter a positive number.:)");
    }
    else
    {
        for (int i=a; i>0; i=i-1){
            f=f*i;
            }
            printf("Factorial of %d=%d",a,f);
    }
    return 0;
}