#include<stdio.h>
#include<conio.h>
int main()
{
	void fact(int);
	int no;
	printf("enter a no");
	scanf("%d",&no);
	fact(no);
}
void fact(int x)
{
	int fact,rem,n;
	
   for(n=1;n<=x;n++)
   {
  int sum=0,temp=n;
	while(n!=0)
	{
		fact=1;
		rem=n%10;
		n=n/10;
		int i=1;
		while(i<=rem)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		
	}
	n=temp;
	if(sum==n)
	{
		printf("%d\n",n);
		
	}
}
}
