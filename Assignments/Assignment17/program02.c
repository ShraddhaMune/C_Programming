#include<stdio.h>

void Pattern(int iNo)
{
    for(int i = iNo; i >= 1; i--)
    {
        printf("%d # ", i);
    }
}

int main()
{
    int iValue;

    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}