#include<stdio.h>
main(){

    int a=1,b=1,temp, input;

    printf("Enter the position till which you want to see the sum of Fibonacci numbers present at even indexes in the series:");
    scanf("%d",&input);

    int array[input];

    printf("The resulting Fibonacci series is:\n");
    printf("%d,",a);
    array[0]=a;
    printf("%d,",b);
    array[1]=b;

    for(int i=2; i<input;i++){

        temp=a;
        a=b;
        b=a+temp;
        array[i]=b;
        printf("%d,",b);
    }

    int j=1, sum=0;
    while(j<input){

        sum= sum+array[j];
        j=j+2;
    }

    printf("\n And the sum of all the Fibonacci numbers present at even indexes is : %d",sum);


}
