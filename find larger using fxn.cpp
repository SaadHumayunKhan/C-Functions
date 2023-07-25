#include<stdio.h>
int find_larger(int n1, int n2, int n3)
{
	int max;
	max=n1;
	if(n2>max)
	{
		max=n2;
	}
	else if(n3>max)
	{
		max=n3;
	}
	return max;
}
int main()
{
	printf("enter two numbers:\n");
	int n1,n2,n3;
	scanf("%d%d%d",&n1,&n2,&n3);
	int larger=find_larger(n1,n2,n3);
	printf("larger=%d",larger);
}
