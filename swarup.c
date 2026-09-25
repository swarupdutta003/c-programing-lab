/*
Calculate The Area & Perimeter Of A Rectangle:
#include<stdio.h>
int main()
{
	int breadth,length,mul;
	printf("Enter The Area Of Rectangle:\n");
	printf("Enter The Breadth & Length:");
	scanf("%d%d",&breadth,&length);
	mul=breadth*length;
	printf("The Area Of Rectangle Is=%d\n",mul);
	printf("Enter The Perimeter Of Rectangle:");
	scanf("%d%d",&breadth,&length);
	mul=2*(breadth*length);
	printf("The Perimeter Of Rectangle Is=%d",mul);
}
*/
//Calculate Celcius To Farenhite:
//#include<stdio.h>
//int main()
//{
//	int c,f;
//	printf("Enter The Celcius:");
//	scanf("%d",&c);
//	f=(c*9/5)+32;
//	printf("The Farenhite Is=%d",f);
//#include<stdio.h>
//int main()
//{
//	int c,f;
//	printf("Enter The Farenhite:");
//	scanf("%d",&f);
//	c=(f-32)/1.8;
//	printf("The Celcius Is=%d",c);
//Write A Program To Calculate Simple Interest:
#include<stdio.h>
int main()
{
	int p,t,r;
	printf("Enter Principle:");
	scanf("%d",&p);
	printf("Enter Rate Of Interst:");
	scanf("%d",&r);
	printf("Enter Time:");
	scanf("%d",&t);
	int s=(p*r*t)/100;
	printf("Simple Interest Is=%d",s);
}
	













