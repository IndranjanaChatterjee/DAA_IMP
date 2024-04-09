#include<stdio.h>
int main()
{
	int size;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	int i,j;
	int a[size][size];
	int b[size][size];
	int c[size][size];
	int p1,p2,p3,p4,p5,p6,p7;
	printf("a");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("b");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	p1=a[0][0]*(b[0][1]-b[1][1]);
	p2=b[1][1]*(a[0][0]+a[0][1]);
	p3=b[0][0]*(a[1][0]+a[1][1]);
	p4=a[1][1]*(b[1][0]-b[0][0]);
	p5=(a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
	p6=(a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
	p7=(a[0][0]-a[1][0])*(b[0][0]+b[0][1]);
	c[0][0]=p6+p4+p5-p2;
	c[0][1]=p2+p1;
	c[1][0]=p3+p4;
	c[1][1]=p1+p5-p3-p7;
	printf("c");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
}