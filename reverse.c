#include<stdio.h>
int main(){
    int a,reverse=0;

    printf("Enter any number\n");
    scanf("%d",&a);

    while (a!=0)
    {
    reverse= reverse*10+(a%10);
    a=a/10;
    }
    printf("Reverse of what you entered = %d \n",reverse);
}