#include<stdio.h>
int dis(int num)
{
	int s,len=0,n,r,d,sum=0;
	n=num;
	while(num)
	{
		r=num%10;
		num=num/10;
		s=s*10+r;
	}
	while(s)
	{
		d=s%10;
		s=s/10;
		len++;
		sum=sum+d^len;
		
	} return (n==sum);
}
int main()
{
	int num;
	scanf("%d",&num);
	if(dis(num))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}
