#include<stdio.h>
main(){

char input;

printf("Input any character:");
scanf("%C",&input);

if(65<=input && 90>=input || 97<=input && 122>=input){

   switch(input){

   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
        printf("The character you input is a vowel");
   break;

   default:
        printf("The character you input is a consonant");
   break;
       }


}
else printf("Please enter an alphabetical character");


}
