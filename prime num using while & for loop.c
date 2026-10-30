////Write a c program to check weather a number is prime or not using while loop and then using for loop:
//#include<stdio.h>
//int main()
//{
//	int n,c=0,i=1;
//	printf("Enter A Number:");
//	scanf("%d",&n);
//	while(i<=n)
//	{
//	if(n%i==0)
//	c++;
//	i++;
//	}
//	if(c==2)
//	printf("%d=its a prime number",n);
//	else
//	printf("%d=its not a prime number",n);
//	return 0;
//}

#include <stdio.h>

int main()
{
    int n, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
    {
        printf("%d is a Prime Number", n);
    }
    else
    {
        printf("%d is not a Prime Number", n);
    }

    return 0;
}

