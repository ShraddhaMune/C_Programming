#include<stdio.h>

void Pattern(int iNo)
{
    for(int i = 1; i <= iNo; i++)
    {
        printf("%d * ", i);
    }
}

int main()
{
    int iValue;

    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}