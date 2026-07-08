#include<stdio.h>
//declaration
struct Demo
{
    int i;                //4
    char ch;              //1   generates padding
    float f;              //4
};                        //8

int main()
{
    struct Demo dobj;
    printf("%lu\n",sizeof(dobj));          //12
    return 0;
}