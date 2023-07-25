//5.Ask user to enter two numbers and find their power using functions.
#include<stdio.h>
int cal_power(int n1, int n2)
{
	int result=1;
	if(n2>0)
	{
		for(int i=1;i<=n2;i++)
		{
			result *= n1;
		}
	}
	else if(n2<0)
	{
		for(int i=n2;i>=1;i--)
		{
			result /= n1;
		}
	}
	return result;
}
int main()
{
	printf("enter the number:");
	int number;
	scanf("%d",&number);
	printf("enter the power:");
	int power;
	scanf("%d",&power);
	int res=cal_power(number,power);
	printf("%d",res);
}
