#include<stdio.h>
main(){

    int input,number,rem, div, output;

    printf("Enter an integer value to check if it is an Armstrong number or not:");
    scanf("%d",&input);

        number=input;
        div=input;

        int count=0;
        while(number!=0){

          number=number/10;
          count++;
        }

        output=0;
        while(div!=0){

           rem=div%10;
           output+=pow(rem,count);
           div=div/10;
        }


        if(output==input){

            printf("The entered integer value IS an Armstrong number!");
        }

        else{
            printf("The entered integer value is NOT an Armstrong number...");
        }
}



