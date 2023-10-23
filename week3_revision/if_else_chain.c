#include <stdio.h>
int main() {
    int mark;
    printf("Enter the mark: \n");
    scanf("%d", &mark);
    printf("Mark to be checked is: %d \n", mark);

    if (mark >= 0 && mark <= 100)
    {
        if (mark == 0)
        {
            printf("The mark %d is zero\n", mark);
        }
        else if (mark < 40)
        {
        printf("The mark %d is a fail\n", mark);
        }
        else
        {
            printf("The mark %d is a pass\n", mark);
        }
    }
    else
    {
        printf("Marks must be between 0 and 100\n");
    }
    return 0;

}