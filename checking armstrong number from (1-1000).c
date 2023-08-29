#include<stdio.h>


int armstrong(int input){

    int number,rem, div, output;


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

            return 1;
        }

        else{
            return 0;
        }
}

main(){
    for(int input=1; input<=1000;input++){


    int result=armstrong(input);
    if(result==1){

            printf("The entered integer value %d is an Armstrong number!\n",input);
        }



    }
}
