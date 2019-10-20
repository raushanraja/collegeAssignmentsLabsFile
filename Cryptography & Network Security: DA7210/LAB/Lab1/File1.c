// Question 1.
// Write a Program to implement various Bitwise logical operation on given numbers

#include<stdio.h>

int main(){
    int a=25;  // binary: 11001
    int b=10;  // binary: 01010

    printf("\na: %d, b: %d\n",a,b);
    
    // & – Bitwise AND
    printf("Bitwise AND a&b: %d\n",a&b);

    // | – Bitwise OR
    printf("Bitwise OR a|b: %d\n",a|b);

    // ~ – Bitwise NOT
    printf("Bitwise NOT ~a: %d\n",~a);

    // ^ – XOR
    printf("Bitwise XOR a^b: %d\n",a^b);

    // << – Left Shift
    printf("Left Shift a<<1: %d\n",a<<1);

    // >> – Right Shift
    printf("Right Shift 1>>b: %d\n\n\n",b>>1);

    return 0;    
}