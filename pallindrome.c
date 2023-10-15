#include <stdio.h>

int main(){
    int num;
    printf("Enter a number to check for pallindrome. \n");
    scanf("%d",&num);
    int saved=num;
    int reverse;
    while (num != 0){
    reverse=reverse*10+(num%10);
    num=num/10;
    }

    if (saved=reverse){
        printf("Its a pallindrom number.\n");
    }
    else{
        printf("Its not a pallindrom.\n");
    }

    return 0;
}