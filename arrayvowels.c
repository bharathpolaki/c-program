#include <stdio.h>
int main()
{
    char ch;
    printf("enter a charcter=");
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("yes,its a vowel");
        break;
        
        printf("no,its not a vowel");
        break;
    }
    return 0;
}

