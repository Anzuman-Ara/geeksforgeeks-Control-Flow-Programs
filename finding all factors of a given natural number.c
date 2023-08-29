#include<stdio.h>
main(){

    int input;

    printf("Enter the natural number that you want to determine all the factors of:");
    scanf("%d",&input);


    printf(" All the possible factors for %d are..\n",input);
        for(int i=1;i<=input;i++){

            if(input%i==0)
                printf(" %d,",i);
        }



}
