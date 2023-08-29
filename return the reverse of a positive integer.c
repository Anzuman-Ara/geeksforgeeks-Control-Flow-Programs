#include<stdio.h>
main(){

    int number, rem, value=0;

    printf("Enter any positive integer:");
    scanf("%d",&number);

    while(number>0){

        rem=number%10;
        number=number/10;

        value=value*10;
        value=value+rem;

            }
     printf("The reverse of the input positive integer is: %d",value);

}
