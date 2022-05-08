#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("enter (a-z):-");
    scanf("%c",&ch);
    ch= tolower(ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': printf("VOWEL");
                    break;
        default : printf("CONSONANT");
    }
    return 0;
}
