#include<stdio.h>
main(){

int input, i, s=0;

printf("Enter any natural number to see the summation of all the natural numbers until that point:");
scanf("%d",&input);

for(i=1;i<=input;i++){
  s += i;
    }

printf("The sum of natural number till your input number is : %d",s);

}
