#include<stdio.h>
main(){

    int input;

    printf("Enter a number to check if it is Neon or not:");
    scanf("%d",&input);

    int square=(input*input), i=0, digit, sum=0;

    while(square>0){

        digit=square%10;
        sum=sum+digit;
        square=square/10;
    }

    if(input==sum)
        printf(" Yes, %d is a neon number.",input);
    else
        printf(" No, %d is not a neon number.",input);
}
