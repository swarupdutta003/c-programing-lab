//write a c program to find a largest number in array:
#include<stdio.h>
int main()
{
	int n,i,temp;
	printf("Enter The Array Range:");
	scanf("%d",&n);
	int ar[n];
	printf("Enter The Value One By One:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	temp=ar[0];
	printf("The Array Elements Are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",ar[i]);
		if(ar[i]>temp)
		{
			temp=ar[i];
		}
	}
	printf("\nThe Largest Number Is:%d",temp);
	return 0;
}

