//perform operation on two or more Number
//first time perform only two opertion after that multiple number

#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    //operator
    char ch;
    scanf("%c",&ch);

    int b;
    scanf("%d",&b);

    switch(ch){
        case '+':
         printf("sum of %d and %d = %d",a,b,a+b);
         break;

         case '-':
         printf("Subtraction of % and %d = %d",a,b,a-b);
         break;

         case '*':
         printf("Multiplication of %d and %d = %d",a,b,a*b);
         break;
         
         case '/':
         printf("Division of %d and %d = %d",a,b,a/b);
         break;
         
         default:
        printf("\nInvalid operator");
        }
    return 0;
}


//perform operation on only two number
// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);

//     //operator
//     char ch;
//     scanf("%c",&ch);

//     int b;
//     scanf("%d",&b);

//     if(ch=='+') printf("sum of %d and %d = %d",a,b,a+b);
//     if(ch=='-') printf("Subtraction of % and %d = %d",a,b,a-b);
//     if(ch=='*') printf("Multiplication of %d and %d = %d",a,b,a*b);
//     if(ch=='/') printf("Division of %d and %d = %d",a,b,(float)a/b);
//     return 0;
// }

