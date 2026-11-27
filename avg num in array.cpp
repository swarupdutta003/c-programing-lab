//write a c program to find a largest number in array:
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	float avg;
	printf("Enter The Array Range:");
	scanf("%d",&n);
	int ar[n];
	printf("Enter The Value One By One:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
		sum=sum+ar[i];
	}
	
	printf("The Array Elements Are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",ar[i]);

	}
	avg=sum/n;
	printf("\nThe Avarage Number Is:%.2f",avg);
	return 0;
}

