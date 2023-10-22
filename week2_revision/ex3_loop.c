#include <stdio.h>

int main() {
    int a = 1;

    while(a <= 10)
    {
        int square = a * a;
        printf("%d\n", square);
        a++;
    }
    printf("\n");
    return 0;

}