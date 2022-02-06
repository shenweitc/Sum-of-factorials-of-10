#define _CRT_SECURE_NO_WARNINGS 1
//º∆À„1£°+2£°+3£°...+10!
#include<stdio.h>
int main()
{
	int n = 0;
	int ret = 1;
	int sum = 0;
	for(n=1;n<=10;n++)
	{
	ret = ret * n;
	sum = ret + sum; 
	}
	printf("sum=%d\n",sum);
return 0;
}