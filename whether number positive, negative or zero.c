#include<stdio.h>
main(){

float input;

printf("Enter a number:");
scanf("%f",&input);

if(input>0){

    printf("The number %.2f that you entered is a positive number",input);
}
else if(input<0){

    printf("The number %.2f that you entered is a negative number",input);
}
else{

    printf("The number %.2f that you entered is known as Zero",input);
}

}
