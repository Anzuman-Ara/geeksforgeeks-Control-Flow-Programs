#include<stdio.h>
main(){

    int input;

    printf("Enter the year in numbers:");
    scanf("%d",&input);


    if( input%400==0 || ( input%4==0 && input%100!=0)){

        printf("The year you entered is a leap year!");
    }
    else {

        printf("The year you entered is not a leap year...:-(");
    }



}
