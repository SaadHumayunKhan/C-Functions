//3.Write a program in C to check whether a number is a prime number or not using the func
#include<stdio.h>
int check_prime(int num1)
{
	int div;
	for(int i=2;i<num1/2;i++)
	{
		if(num1%i==0)
		div++;
	}
	if(div==0)
	return 1;
	else
	return 0;
}
int main()
{
	printf("enter the number:");
	int n;
	scanf("%d",&n);
	if(check_prime(n))
	printf("prime",n);
	else
	printf("not prime",n);
}
