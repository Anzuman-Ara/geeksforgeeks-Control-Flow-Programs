#include<stdio.h>
main(){

    int input,i,j,count;


     //asking the user to provide any integer as input
     printf("Enter any integer so that you can see the all existing prime numbers within the range of 1 till your input number :");

    //taking the integer as input from the user
      scanf("%d",&input);

     printf("\nThe existing prime numbers within the range of 1 till your input number are ...:");


     for(i=2;i<=input;i++){

        count=0;
    for(j=2;j<=i;j++){

        if(i%j==0){count++;}

            }
        if(count==1){

            printf("\n%d",i);

        }

     }


    }


