#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j;
	printf("enter a values in array");
	for(i=0;i<5;i++)
	{
		
		scanf("%d",&a[i]);
	}
	printf("before removing duplicate");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	printf("after removing");
	for(i=0;i<5;i++)
	{
		int count=0;
		for(j=i+1;j<5;j++)
		{
			if(a[j]==a[i])
			{
				count++;
			}
			
		}
	
		if(count==1)
		{
				
			printf("%d",a[i]);
		}
	}
	
}
