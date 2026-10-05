//Write a c program to count the digits of a whole number:
#include<stdio.h>
int main()
{
	int num,count=0,digit=0;
	printf("Enter Any Digit:");
	scanf("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		printf("The Digits Are:%d\n",digit);
     	num=num/10;
		count++;
	}
	printf("The whole number of the digit is=%d",count);
}

