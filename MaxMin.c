#include<stdio.h>
int max,min;
int arr[5];
void MaxMin(int low,int high)
{
	int mid,max1,max2,min1,min2;
	if(low==high)
	{
		max=arr[0];
		min=arr[0];
	}
	else if(low==(high-1))
	{
		if(arr[low]>arr[high])
		{
			max=arr[low];
			min=arr[high];
		}
		else
		{
			min=arr[low];
			max=arr[high];
		}
	}
	else
	{
		mid=(low+high)/2;
		MaxMin(low,mid);
		max1=max;
		min1=min;
		MaxMin(mid+1,high);
		max2=max;
		min2=min;
		if(max1>max2)
		{
			max=max1;
		}
		else if(max2>max1)
		{
			max=max2;
		}
		if(min1<min2)
		{
			min=min1;
		}
		else if(min1>min2)
		{
			min=min2;
		}
		
		
		
	}
}
int main()
{
	int n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int i;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	MaxMin(0,n-1);
	printf("%d  %d",max,min);
}