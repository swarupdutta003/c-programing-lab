/*W.A.P to printf
12345
1234
123
12
1
*/
#include<stdio.h>
int main()
{
	int i,n,j;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("\t%d",j);
		}
		printf("\n\n");
	}
	return 0;
}

