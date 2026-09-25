//#include<stdio.h>
//int main()
//{
// printf("NAME: RUPANKAR KUMAR NATH\n");
// printf("ROLL:41\n");
// printf("COURCE:BCA\n");
// printf("SEMESTER:FIRST\n");
//}
//#include <stdio.h>
//int main()
//{
//int num1,num2,sub;
//printf("ENTER FIRST NUMBER :");
//scanf("%d",&num1);
//printf("ENTER SECOND NUMBER :");
//scanf("%d",&num2);
//sub=num1+num2;
//printf("SUM OF TWO NUMBERS :%d",sub);
//}

//#include <stdio.h>
//int main()
//{
//	int age=20;
//	float marks=85.5;
//	char grade='A';
//	printf("age=%d\n",age);
//	printf("marks=%.2f\n",marks);
//	printf("grade=%c",grade);
//	printf("%zu\n",sizeof(marks));
//}

//#include <stdio.h>
//int main()
//{
//int num1=5,num2=7,swap;
//printf("ENTER FIRST NUMBER");
//scanf("%d",&num1);
//printf("ENTER SECOND NUMBER");
//scanf("%d",&num2);
//    swap=num1;
//	num1=num2;
//	num2=swap;
//	printf("number1=%d\n",num1);
//	printf("number2=%d",num2);
//	
//}
//Write a c program which read an intiger value and check whether is possitive or not after satisfing the value of intiger >0 
//if it is possitive then check itd possitive or negetive: 
//#include <stdio.h>
// int main()
//{
//    int n;
//
//    printf("Enter an integer: ");
//    scanf("%d", &n);
//
//    if (n > 0)
//    {
//        printf("The number is positive.\n");
//        if(n%2==0)
//        printf("This Is A Even Number:");
//        else
//        printf("It Is Odd Number:");
//    }
//    else
//    {
//        printf("The number is not positive.\n");
//    }
//
//    return 0;
//}
//Write a c program to find the greatest among 3 inputet numbers:
//#include<stdio.h>
//int main()
//{
//	int a,b,c,n;
//	printf("Enter 3 Numbers One by One:");
//	scanf("%d%d%d",&a,&b,&c);
//	if(a>b&&a>c)
//	printf("%d Is The Greatest Number:",a);
//	if(b>a&&b>c)
//	printf("%d Is The Greatest Number:",b);
//	else
//	printf("%d Is The Greatest Number:",c);
//}
//Write a c program to calculate the electriciti bill best on the number of unique consume ,The charges are:- 
//0 to 100 consume 2 rupee per unit,
//101 to 200 consume 3 rupee per unit,
//201 to 300 consume 5 rupee per unit,
//avobe 300 consume 7 rupee per unit,
//#include <stdio.h>
//int main()
//{
//    int units;
//    float bill;
//    printf("Enter the number of units consumed:");
//    scanf("%d",&units);
//    if(units<=100)
//    {
//        bill=units*2;
//    }
//    else if(units<=200)
//    {
//        bill=(100*2)+((units-100)*3);
//    }
//    else if(units<=300)
//    {
//        bill=(100*2)+(100*3)+((units-200)*5);
//    }
//    else
//    {
//        bill=(100*2)+(100*3)+(100*5)+((units-300)*7);
//    }
//    printf("Electricity Bill=Rs.%.2f\n",bill);
//    return 0;
//}
// Write 
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[100];
//	printf("Enter Your Name:\n");
//	gets(a);
//	printf("UpperCase:- %s\n",strupr(a));
//	printf("LowerCase:-%s",strlwr(a));
//}

////Write c a program to print 1 to 5 using while loop:
//#include<stdio.h>
//int main()
//{
//	int i=1; 
//	while(i<=5)
//	{
//	printf("%d\n",i);
//	i++;
//    }
//}
//Write c a program to print 5 to 1 using while loop:
//#include<stdio.h>
//int main()
//{
//	int i=5; 
//	while(i>=1)
//	{
//	printf("%d\n",i);
//	i--;
//    }
//}
////Write a C program to print even numbers 1 to 10:
//#include<stdio.h>
//int main()
//{
//	int i=1; 
//	while(i<=10)
//	{
//	if(i%2==0)
//	printf("The Even Numbers=%d\n",i);
//	i++;
//    }
//}

////Write a C program to print odd numbers 1 to 10:
//#include<stdio.h>
//int main()
//{
//	int i=0,n;
//	printf("Enter any number:");
//	scanf("%d",&n);
//	while(i<n)
//	{
//	i++;
//	printf("%d\n",i);
//    }
//}

//Write a c program to calculate the sum of numbers from 1 to 5:
//Write a c program to calculate the sum of numbers from 1 to n:
//Write a c program to calculate the sum of numbers from 1 to 10:
//Write a c program to display odd numbers to 1 to n:
#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Enter Any Number:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2!=0)
		printf("This Is Odd Numbers:%d\n",i);
		else
		printf("This Is Even Numbers:%d\n",i);
		i++;
	}
}










