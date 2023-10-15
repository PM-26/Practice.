#include <stdio.h>

void sum(){
  int a,b;
  printf("Enter value of first number\n");
  scanf("%d",&a);
  printf("Enter value of second number\n");
  scanf("%d",&b);
  printf("Sum=%d",a+b);


}

int main() {
  sum();
  return 0;
}