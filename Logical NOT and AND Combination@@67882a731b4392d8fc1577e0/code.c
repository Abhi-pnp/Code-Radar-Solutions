// Your code here...
// Write a c program to check if neither of the two number is greater than zero using '!' and '&&' operator.
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(!(a>0) && !(b>0)) printf("True");
    else printf("False");
    return 0;
}