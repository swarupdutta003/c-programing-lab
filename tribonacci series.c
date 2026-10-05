//Write A C Program To Print Tribonacci Series:
#include<stdio.h>
int main()
{
	int a=0,b=1,c=1,n,i=1,d;
	printf("Enter The Number Of Terms:");
	scanf("%d",&n);
	printf("Tribonacci Series:");
	while(i<=n)
	{
		printf("%d",a);
		d=a+b+c;
		a=b;
		b=c;
		c=d;
		i++;
	}
}

