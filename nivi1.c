#include <stdio.h>
int main()
{
    char s;
    int isLowercaseVowel, isUppercaseVowel;
    printf("Enter an alphabet: ");
    scanf("%c",&s);
    isLowercaseVowel = (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u');
    isUppercaseVowel = (s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U');
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c is a vowel.", s);
    else
        printf("%c is a consonant.", s);
    return 0;
}
