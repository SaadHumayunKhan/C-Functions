//Ask user to enter number of rows and print Pascal’s triangle using functions. 
#include<stdio.h>
int fact(int num1)
{
	int f=1;
	for(int i=num1;i>=1;i--)
	{
		f *= i;
	}
	return f;
}
int main()
{
	int rows=5;
	for(int i=0;i<rows;i++)
	{
		for(int space=rows-i;space>1;space--)
		{
			printf(" ");
		}
		for(int j=0;j<=i;j++)
		{
			int pascal=fact(i)/(fact(j)*fact(i-j));
			printf("%d ",pascal);
		}
		printf("\n");
	}
}
