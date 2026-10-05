//Write a c program to reverse the digits of a whole number:
#include<stdio.h>
int main()
{
	int num,digit,reverse=0;
	printf("Enter Any Digit:");
	scanf("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		printf("The Digits Are:%d\n",digit);
		reverse=reverse*10+digit;
		num=num/10;
	}
	printf("The sum of the digit is=%d",reverse);
}

