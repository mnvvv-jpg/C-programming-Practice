#include<stdio.h>

int addition(int no1, int no2)
{
    int ans=0;
    ans= no1+no2;
    return ans;
}

int main()
{
    int ret=0, A = 0, B = 0;

    printf("Enter first number:\n");
    scanf("%d",&A);

    printf("Enter second number:\n");
    scanf("%d",&B);

    ret = addition(A,B);
    printf("addition is : %d\n",ret);
    return 0;
}