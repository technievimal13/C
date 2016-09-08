#include <stdio.h>
int main()
{
    char c
    int low, up;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    low = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    up = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (low || up)
        printf("%c is a vowel.",c);
    else
        printf("%c is a consonant.",c);
    return 0;
}
