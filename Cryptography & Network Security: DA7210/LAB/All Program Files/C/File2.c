// Question 2.
// Write a program to find GCD of two numbers using Euclidean Algorithm

#include<stdio.h>

int gcd(int a, int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}

int main(){
    int a,b;
    printf("\nEnter A and B:");
    scanf("%d %d",&a,&b);
    printf("GDC of %d and %d is: %d\n\n",a,b,gcd(a,b));
    return 0;    
}