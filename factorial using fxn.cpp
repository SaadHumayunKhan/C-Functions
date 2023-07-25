//4.Ask user to enter a number and print its factorial using functions. 
#include<stdio.h>
int cal_factorial (int num)
{	
	int fact=1;
	for(int i=num;i>=1;i--)
	{
		fact *= i;
	}
	return fact;
}
int main()
{
    int n,fact=1;
    printf("enter the number:");
	scanf("%d",&n);
	fact=cal_factorial(n);
	printf("%d",fact);
}
