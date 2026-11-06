//Write a program to print the following pattern:
//12345
// 1234
//  123
//   12
//    1
#include<stdio.h>
int main()
{
	int i,n,j;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=n;j>1;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
		 printf("%d",j);
	    }
		printf("\n");
	}
	return 0;
}
