#include<stdio.h>
main(){

    int num1, num2, count=0, result1, result2;

    printf(" Enter two integer numbers you want to determine the LCM of :");
    scanf("%d%d",&num1,&num2);

    int max=(num1>num2)?num1:num2;


    while(1){

        if(max%num1==0 && max%num2==0){


            printf(" The LCM of these two numbers is: %d",max);
                break;
            }
        max++;
    }
}
