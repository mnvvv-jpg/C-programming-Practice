#include<stdio.h>

int addition(int no1, int no2)
{
    int ans=0;
    ans= no1+no2;
    return ans;
}

int main()
{
    int ret=0, A = 11, B = 10;
    ret = addition(A,B);
    printf("addition is : %d\n",ret);
    return 0;
}
