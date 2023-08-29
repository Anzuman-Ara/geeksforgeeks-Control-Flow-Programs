#include<stdio.h>
int main(){

    int i,input, flag=0;
     //asking the user to provide an integer number
     printf("Enter any integer number :");

    //taking the integer as input from the user
      scanf("%d",&input);

    //showing whether the integer is a 'prime number' or 'non-prime number' as output
 for(i=2;i<=input;i++){

   if(input%i==0){
    flag++;
    }
      }
    if(flag==1){
    printf("Yes! The entered integer %d is a prime number",input);}

    else{
    printf("No, The entered integer %d is not a prime number",input);}

    }


