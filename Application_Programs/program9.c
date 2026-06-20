#include<stdio.h>

float AddTwoNumbers(
                        float fNo1,                             //first input 
                        float fNo2                              //secondinput
                    )
{
    float fAns = 0.0f;                                          //variable  to store result
    fAns = fNo1 + fNo2;                                         //perform addition
    return fAns;

}

int main()
{
    
    float fValue1 = 0.0f;                                       //to store first input 
    float fValue2 = 0.0f;                                       //to store second input
    float fResult = 0.0f;                                       //to store result

    printf("Enter First Number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second Number : \n");
    scanf("%f",&fValue2);

    fResult = AddTwoNumbers(fValue2, fValue1);                 

    printf("Addition is : %f\n",fResult);       

    return 0;
}