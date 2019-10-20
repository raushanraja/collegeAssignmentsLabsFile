// Question 3.
// Write a program to claculate multiplicative inverse of a number

#include<stdio.h> 

int multiplicativeInverse(int a, int m) 
{ 
	a = a%m; 
    int i=1;
	for (i=1; i<m; i++) 
	if ((a*i) % m == 1) 
		return i; 
} 

int main() 
{ 
	int a, m; 
    printf("\nEnter a and m: ");
    scanf("%d %d",&a,&m);
	printf("Multiplicative Inverse of %d under modulo %d is: %d\n\n",a,m,multiplicativeInverse(a, m)); 
	return 0; 
} 
