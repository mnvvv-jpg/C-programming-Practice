#include<stdio.h>
#include<string.h>
{
    int i = 0;
    while(*ptr != '\0')
    {
    i++;
    ptr++;
    }   
}

int main()
{
    char str[] = "Ganesh";
    int ret = 0;
    
    ret = strlenX(str);

    printf("String Length is : %d\n",ret);

    return 0;
}