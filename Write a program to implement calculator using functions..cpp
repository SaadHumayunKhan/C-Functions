//11.Write a program to implement calculator using functions.
#include<stdio.h>
int add(int n1, int n2)
{
	return n1+n2;
}
int sub(int n1, int n2)
{
	return n1-n2;
}
int mul(int n1, int n2)
{
	return n1*n2;
}
float div(int n1, int n2)
{
	return n1/n2;
}
int main()
{
	printf("enter two numbers:\n");
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	
	int sum=add(n1,n2);
	int subtract=sub(n1,n2);
	int multiply=mul(n1,n2);
	float divison=div(n1,n2);
	
	printf("SUM=%d\n",sum);
	printf("SUBTRACT=%d\n",subtract);
	printf("MULTIPLY=%d\n",multiply);
	printf("DIVISON=%.2f\n",divison);
	
	return 0;
}
