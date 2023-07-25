//Ask user to enter a number and find its square root usinf fxn
#include<stdio.h>
int cal_power(int n1, int n2)
{
	int result=1;
	if(n2>=0)
	{
		for(int i=1;i<=n2;i++)
		{
			result *= n1;
		}
	}
	return result;
}
int main()
{
	printf("enter number:");
	int num,power;
	scanf("%d",&num);
	printf("enter power:");
	scanf("%d",&power);
	int result=cal_power(num,power);
	printf("%d",result);
}
