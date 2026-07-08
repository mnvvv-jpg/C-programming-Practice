#include<stdio.h>

int main()
{
    char str[] = "Ganesh";
    char *ptr = NULL;

    ptr = str;     //100

    while(*ptr != '\0')
    {
    printf("%c\n",*ptr);     //G         (first letter)
    ptr++;                  //101
    }

    return 0;
}