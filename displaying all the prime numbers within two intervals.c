#include<stdio.h>
main(){

    int input1,input2,count;


     //asking the user to provide two integers as input
     printf("Enter two integer values so that you can see the all existing prime numbers within the interval of those two numbers :");

    //taking the integers as input from the user
      scanf("%d%d",&input1,&input2);

     printf("\nThe existing prime numbers within this interval are ...:");


     for(int i=input1;i<=input2;i++){

        count=0;
       for(int j=2;j<=i;j++){

          if(i%j==0){count++;}

            }
        if(count==1){

            printf("\n%d",i);

        }

     }


    }


