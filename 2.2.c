#include<stdio.h>

int main(void)
{
	int num1=0;
	int num2=0;
	int num3=0;
	int num4=0;
	int max=0;
	
	
	printf("正数値を入力してください.");
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);
	scanf("%d",&num4);
	
	if(num1>max)
	{
		max=num1;
	}
	if(num2>max)
	{
		max=num2;
	}
	if(num3>max)
	{
		max=num3;
	}
	if(num4>max)
	{
		max=num4;
	}
	
	printf("最大値=[%d]",max);
	
	
	return 0;
}