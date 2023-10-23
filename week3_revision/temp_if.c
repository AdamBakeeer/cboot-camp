#include <stdio.h>
int main() {
    int temp ;
    printf("Enter the temperature:\n");
    scanf("%d", &temp);
    if (temp < 15){
        printf("ITS COLD , WEAr A JACKET\n");
    }
    else{
        printf("its nice and warm\n");
    }
    return 0;

}