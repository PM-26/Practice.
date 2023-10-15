#include <stdio.h>

int sum(int a,int b){
  return b+a;
}
int sub(int a,int b){
  return a-b;
}

int main() 
{
  
  while(1){
    printf("\t M E N U\t\n");
    printf("Enter 1 to calculate sum and sub\n");
    int option;
    scanf("%d",&option);
    if (option==1){

  int first,second;
  printf("Enter first number\n");
  scanf("%d",&first);
  printf("Enter second number\n");
  scanf("%d",&second);
  
  printf("Sum of above two numbers=%d \n",sum(first,second));
  printf("Sub of above two numbers=%d \n",sub(first,second));
  }
  
  else{
    printf("Enter valid number.\n");
  }
  }

  
    
  return 0;
}