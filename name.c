#include <stdio.h>

// int main(){
//     char name[] = "Hello";
//     char name2[] = {'H','e','l','l','o','\0'};

//     //printing
//     for (int i=0; i<6; i=i+1){
//         printf("%c",name[i]);
//     }
//     return 0;
// }

int main(){
    char str[20];
    fgets(str,20, stdin);
    puts(str);
    return 0;
}