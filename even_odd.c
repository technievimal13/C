#include <stdio.h>
int main()
{
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);
    if (number %2=0)
        printf("You entered a even number.");
    else 
        printf("You entered odd number.");
    return 0;
}
