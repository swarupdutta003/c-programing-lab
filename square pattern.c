//Write a c program to print star pattern in square format:
#include<stdio.h>
int main()
{
	int i,n,j;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("\t*");
		}
		printf("\n\n");
	}
	return 0;
}

