#include<stdio.h>
main(){

    int input;

    printf("Enter the number you want to see the multiplication table of:");
    scanf("%d",&input);

    printf("The multiplication table of '%d' from the range of 1 to 10 is:",input);
    for(int i=1;i<=10;i++){

        printf("\n%d * %d = %d",input,i,i*input);

    }
}
