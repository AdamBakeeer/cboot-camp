#include <stdio.h>
int main() {
    int a;
    printf("Choose between option 0 or 1\n");
    scanf("%d", &a);

    switch (a)
    {
        case 0: printf("Option 0 has been seleected\n");
        break;
        
        case 1: printf("Option 1 has been selected\n");
        break;

        default:  printf("A different option has been selected\n");

    }

}