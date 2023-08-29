#include<stdio.h>
main(){

double a, b ,c;

printf("Enter the first number:");
scanf("%lf",&a);

printf("Enter the second number:");
scanf("%lf",&b);

printf("Enter the third number:");
scanf("%lf",&c);


if(a==b || b==c || a==c){

    if(b<=a && c<=a){

   printf("%lf Is the largest number amongst the three input numbers and at-least two of them are equals ",a);
}
else if(a<=b && c<=b){

   printf("%lf Is the largest number amongst the three input numbers and at-least two of them are equals",b);
}
else printf("%lf Is the largest number amongst the three input numbers and at-least two of them are equals",c);
}
else if(b<a && c<a){

   printf("%lf Is the largest number amongst the three input numbers",a);
}
else if(a<b && c<b){

   printf("%lf Is the largest number amongst the three input numbers",b);
}
else printf("%lf Is the largest number amongst the three input numbers",c);


}
