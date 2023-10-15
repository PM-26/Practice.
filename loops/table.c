#include <stdio.h>
int main()
{
    int num;
    printf("Enter for which no. you want to print the table:");
    scanf("%d",&num);
    for (int i=1;i<=10;i=i+1)
    {
        printf("%d*%d=*%d \n",num,i,(num*i));
    }
    return 0;
}