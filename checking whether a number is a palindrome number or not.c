#include<stdio.h>
main(){

    int input, rem, value=0;

    printf("Enter any positive integer to check if it is a Palindrome or not:");
    scanf("%d",&input);

    int number=input;

    while(number>0){

        rem=number%10;
        number=number/10;

        value=value*10;
        value=value+rem;

            }

     if(value==input)
     printf(" Yes! The number %d is a Palindrome.",value);

     else
        printf(" No. The number %d is not a Palindrome.",input);


}
