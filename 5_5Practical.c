/*This Program Is Prepared By Jay Khetani - 23CE057*/
#include<stdio.h>
#include<ctype.h>
int main()
{
    char A;
 N: printf("Enter The Input: ");
    A = getchar();
    if(isdigit(A))
    {
        putchar(A);
        printf(" is a Digit.");
    }
    else if(isalpha(A))
    {
        putchar(A);
        printf(" is an Alphabet.\n");

        if(islower(A))
        {
            putchar(A);
            printf(" is in Lower Case.");
            A = toupper(A);
            printf("\nIn Upper Case It will Be: ");
            putchar(A);
        }
        else if(isupper(A))
        {
            putchar(A);
            printf(" is in Upper Case.");
            A = tolower(A);
            printf("\nIn Lower Case It will Be: ");
            putchar(A);
        }
    }
    else if(ispunct(A))
        {
            putchar(A);
            printf(" is a Punctuation Symbol.");
        }
    else if(isspace(A))
    {
        putchar(A);
        printf(" is a white space.");
    }
    else if(isprint(A))
        {
            putchar(A);
            printf(" is Not printable.");
        }
    else
    {
        printf(" It is Non - Printable.");
    }
    printf("\nBy Jay Khetani - 23CE057\n\n");
    return 0;
}
