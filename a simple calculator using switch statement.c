#include<stdio.h>
main(){

    float num1,num2;
    char oper;
    printf("Enter both of the numbers you want to operate on:");
    printf("\nEnter the 1st number:");
    scanf("%f",&num1);
    printf("\nEnter the 2nd number:");
    scanf("%f",&num2);

    printf("\nEnter the operator you want to use on them:");
    scanf(" %c",&oper);

    switch(oper){

        case'+':
            printf("\nThe result addition of these two numbers is %.2f",num1+num2);
          break;

       case'-':
            printf("\nThe result subtraction of these two numbers is %.2f",num1-num2);
          break;

       case'*':
            printf("\nThe result multiplication of these two numbers is %.2f",num1*num2);
          break;

       case'/':
            printf("\nThe result division of these two numbers is %.2f",num1/num2);
          break;

       default:
            printf("\nThis simple cannot perform your given operation..");
          break;
    }


}
