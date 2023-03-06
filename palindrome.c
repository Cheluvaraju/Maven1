#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *palindrome(char *input);
char *reverse(char *str);

int main() 
{
    printf("Enter a word: ");
    char *user_input;
    user_input = (char *) malloc(sizeof(user_input) + 1);
    scanf("%s", user_input);

    palindrome(user_input);
    return 0;
}

char *palindrome(char *input)
{
    printf("%s\n", input);
    if (strcmp(input, reverse(input)) == 0)
    {
        printf("%s is a palindrome\n", input);
    } else {
        printf("%s isn't a palindrome\n", input);
    }
    return input;
}

// Total Copy and Paste from a forgotten source
char *reverse(char *str)
{
    int end = strlen(str) - 1;
    int start = 0;

    while (start < end)
    {
        str[start] ^= str[end];
        str[end] ^= str[start];
        str[start] ^= str[end];

        ++start;
        --end;
    }
    return str;
}