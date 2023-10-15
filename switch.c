#include <stdio.h>
int main(){
  int a;
  printf("Enter 1 for Hello in English, 2 for Hello in French and 3 for Hello in Spanish\n");
  scanf("%d",&a);
  switch(a){
    case 1:
    printf("Hello");
    break;
    case 2:
    printf("Salut");
    break;
    case 3:
    printf("Hola!\n");
    break;
    default:
    printf("Enter valid number\n");
    break;
  }
    return 0;
}