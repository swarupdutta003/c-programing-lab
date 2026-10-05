//Write a c program to count the digits of a whole number:
#include<stdio.h>
int main()
{
	int num,count=0,s;
	printf("Enter Any Digit:");
	scanf("%d",&num);
	while(num!=0)
	{
     	num=num/10;
		count++;
	}
	printf("The whole number of the digit is=%d",count);
}

