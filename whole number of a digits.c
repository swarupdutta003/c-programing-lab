//Write a c program to count the digits of a whole number:
#include<stdio.h>
int main()
{
	int num,temp,sum=0;
	printf("Enter Any Digit:");
	scanf("%d",&num);
	while(num!=0)
	{
		temp=num%10;
		sum=sum+num;
		num=num/10;
	}
	printf("The whole number of the digit is=%d",temp);
}

