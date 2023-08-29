#include<stdio.h>
main(){

int input;

  printf("Enter the number you want to see the factorial value of:");

  scanf("%d",&input);

  int j=1;

    if(input==0)
        printf("\n The value of its factorial is: %d",j);

    else{
       for(int i=1; i<=input; i++){

       j*=i;
            }

   printf("\n The value of its factorial is: %d",j);

        }



}
