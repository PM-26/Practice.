#include <stdio.h>
int main(){
    int a,sum=0;
    printf("Enter last number till which you want to find sum even numbers:\t");
    scanf("%d",&a);
    for (int i=0;i<=a;i=i+1){
        if (i%2==0){
        sum=sum+i;
        }
    }
    printf("%d\n",sum);

    return 0;

}