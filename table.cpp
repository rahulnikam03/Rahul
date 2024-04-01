#include<stdio.h>
#include<conio.h>
int main()
{
	void table(int);
	int no;

	printf("enter a number");
	scanf("%d",&no);
	table(no);
}
void table(int x)
{
	for(int i=1;i<=10;i++)
	{
		printf("%d",i*x);
	}
}
