#include<stdio.h>

struct hello
{
    float f;               //4
    int Arr[3];             //12
}hobj;

int main()
{
    printf("size of object is : %lu\n",sizeof(hobj));

    return 0;
}