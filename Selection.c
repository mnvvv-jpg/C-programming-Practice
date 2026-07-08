#include<stdio.h>


int main()
{
    int no = 0;

    printf("enter any number: \n");
    scanf("%d",&no);
    if(no % 2 == 0)
    {
        printf("its even number\n");
    }
    else
    {
        printf("its odd number\n");
    }

    return 0;
}