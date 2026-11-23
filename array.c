#include<stdio.h>
int main()
{
	int ar[100],i,n;
	printf("Enter The Range:");
	scanf("%d",&n);
	printf("Enter The Value One By One:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&ar[i]);
    }
    printf("The array is:\n");
    for(i=0;i<n;i++)
    {
    	printf("%d\t",ar[i]);
	}
	return 0;
}

