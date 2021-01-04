#include <stdio.h>
#include <stdlib.h>



int main()
{
    double num1;
    double num2;
    char ope;
    double result;
    printf("Enter Number 1 : ");
    scanf("%lf",&num1);

    printf("operator ");
    scanf(" %c",&ope);


    printf("Enter Number 2 :");
    scanf("%lf",&num2);

    if(ope == '+')
        {
            ("%f",result=num1 + num2);

        }
    else if(ope == '-')
        {
            ("%f",result=num1 - num2);

        }
    else if (ope == '*')
        {
            ("%f",result=num1 * num2);
        }
    else if(ope == '/')
        {
            ("%f",result=num1 / num2);
        }
    else
        {
        printf("Invalide Calculation");
        }
    printf("result = %f",result);
}
