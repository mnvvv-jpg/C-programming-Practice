#include<stdio.h>

struct demo
{
    int i;                   //4
    int *ptr;                 //8
};           


int main()
{
    struct demo dobj;

    printf("size of object is :%lu\n",sizeof(dobj));               //8 or 16

    return 0;
}