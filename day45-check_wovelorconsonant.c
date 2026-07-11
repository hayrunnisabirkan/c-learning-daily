#include <stdio.h>
int main() {
    char c;
    int lovercase_vowel, uppercase_vowel;

    printf("Enter an alphabet: ");
    scanf("%c", &c);

    lovercase_vowel = (c == 'a' || c == 'e'|| c == 'i'|| c == 'o');
    uppercase_vowel = (c== 'A' || c == 'E'|| c == 'O' || c == 'I');

    if(lovercase_vowel || uppercase_vowel)
    printf("%c is a vowel", c);
    else
    printf("%c is a consonant", c);
    return 0;
}