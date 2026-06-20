#include<stdio.h>

int main()
{
    int i,j,k;

    printf("Enter First Number : \n");
    scanf("%d",&i);

    printf("Enter Second Number : \n");
    scanf("%d",&j);

    //businesslogic

    k = i + j;      //= is assignment operator

    printf("Addition is : %d\n",k);
    
    return 0;
}