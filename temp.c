#include <stdio.h>
int main(){
    float c;
    printf("Enter temperature in Celsius to convert it into Fahrenheit \n");
    scanf("%f",&c);
    printf("Temperature in Fahrenheit = %f \n",(c*9/5)+32);
}
