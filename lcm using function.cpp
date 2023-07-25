//8.Ask user to enter two numbers and find their LCM.
#include<stdio.h>
int lcm(int n1, int n2)
{
	
	int max;
	max=n1>n2?n1:n2;
	while(1)
	{
	{
		if(max%n1==0&&max%n2==0)
		return max;
		break;
	}
	max++;
	}
	
}
int main()
{
	printf("enter two number:\n");
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	int result=lcm(n1,n2);
	printf("lcm=%d",result);
}
