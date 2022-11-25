/*
Author: Tyler Scotti
Function: A simple calculator where the end-user determines the number of values used.
Date: 11.22.22
*/

//return 1 - User logic error
//return 0 - Process completed w/out issue

#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(void){
    //Variable initilization
    int i,Value[i], n, result = 1,sum_result;
    float sub_result,nume, denom, div_result;

    char operator;

    //Operand selection
    printf("What operator would you like to do?\nFor addition press: +\nFor subtraction press: -\nFor multiplication press: *\nFor division press: /\n");
        scanf(" %c",&operator);
        //Logic check... BING BONG
            if((operator!='+')&&(operator!='-')&&(operator!='*')&&(operator!='/'))
            {
                printf("Aborting.");
                return 1;
            }
        //Checks if user wants division as it requires a different process.
    if(operator=='/')
           {
            switch(operator)
            {
            case '/': //Division
                printf("What is the numerator?");
                    scanf(" %f",&nume);
                printf("What is the denominator?");
                    scanf(" %f",&denom);
                    while(denom==0){
                        printf("Error: Can't divide by 0.");
                        return 1;
                    }
                while(denom!=0){
                    div_result = nume/denom;
                    printf("%.1f divided by %.1f = %.1f",nume,denom,div_result);
                    return 0;
                }
            }
           }
    else if ((operator=='+') || (operator=='-') || (operator=='*')){
            //Sets array size
            printf("Enter in the amount of integers you will be using:");
                scanf(" %d",&n);
            //Logic check...
            if(n<=0)
            {
                printf("Aborting.");
                return 1;
            }
            else
            {
            //Getting all elements for the array
                for (i=0; i<n; i++)
                {
                    printf("Enter integer:");
                    scanf(" %d",&Value[i]);
                }
                //Switch math
            switch (operator)
                {
                    case '+': //Addition
                        //Issues - None
                        for(i=0; i<n;i++)
                        {
                            sum_result += Value[i];
                        }
                        printf("The summation of these values = %d", sum_result);
                        break;
                        return 0;

                    case '-': //Subtraction
                        //Issues - None
                        Value[0] = Value[0]+Value[0]*-2;
                        for(i=0; i<n;i++)
                        {
                            sub_result -= Value[i];
                        }
                        printf("The difference of these values = %.0f", sub_result);
                        break;
                        return 0;

                    case '*': //Multiplication
                        //Issues: None
                        for(i=0; i<n;i++)
                        {
                            result = result*Value[i];
                        }
                        printf("The product of these values = %d",result);
                        return 0;
                }
            }
        }
    return 0;
}
