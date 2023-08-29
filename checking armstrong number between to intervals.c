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

    int a,b;
    printf("Enter any two intervals you want to see the Armstrong numbers between:");
    scanf("%d%d",&a,&b);

    for(int input=a; input<=b;input++){


    int result=armstrong(input);
    if(result==1){

            printf("The entered integer value %d is an Armstrong number!\n",input);
        }

    }
}
