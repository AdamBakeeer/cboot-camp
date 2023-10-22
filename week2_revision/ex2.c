#include <stdio.h> 
int main() {
    char name[15];
   // Variable is defined ast name which contains up to 15 characters 
    printf("Enter your name:\n");
    scanf("%s",name);
    printf("Your name is %s\n", name);
    return 0;
}