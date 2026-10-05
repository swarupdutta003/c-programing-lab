//Write a c program to calculate sum of digit:
#include<stdio.h>
int main()
{
	int num,temp,sum=0;
	printf("Enter Any [3] Digit:");
	scanf("%d",&num);
	while(num!=0)
	{
		temp=num%10;
		sum=sum+temp;
		num=num/10;
	}
	printf("The sum of the digit is=%d",sum);
}

