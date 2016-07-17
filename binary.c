#include<stdio.h>
#include<conio.h>
#define MAX 100
int binsearch(int,int);
int a;
char num[MAX];

int main()
{
	int count,i,j;
	
	printf("Enter the number of elements you want to enter :\n");
	scanf("%d",&count);
	printf("Enter the sorted elements : \n");
	for(i=0;i<count;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("Enter the element you want to search :\n");
	scanf("%d",&a);
	j=binsearch(0,count);
	if(j==-1)
	{
		printf("The element you searched for is not in the array of elements\n");
	}
	else
	{
		printf("%d is avialable in the array.\n",num[j]);
	}
}

int binsearch(int low,int high)
{
	int mid;
	mid=(low+high)/2;
		
	if(low>high)
	{
		return (-1);
	}
	else if(a==num[mid])
	{
		return (mid); 
	}
	else if(a<num[mid])
	{
		binsearch(low,mid-1);
	}
	else if(a>num[mid])
	{
		binsearch(mid+1,high);
	}
}
