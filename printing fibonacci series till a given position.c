#include<stdio.h>
main(){

    int a=1,b=1,temp, input;

    printf("Enter the position till which you want to see the elements of the Fibonacci series:");
    scanf("%d",&input);

    printf("The resulting Fibonacci series is:");
    printf("%d,",a);
    printf("%d,",b);

    for(int i=2; i<input;i++){

        temp=a;
        a=b;
        b=a+temp;
        printf("%d,",b);
    }


}
