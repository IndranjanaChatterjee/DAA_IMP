#include<stdio.h>
int graph[10][10],visited[10],n;
main()
{
	
	printf("Enter the number of Vertices:");
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		visited[i]=0;
	}
	BFS(0);
	
}
void BFS(int vertex)
{
	printf("%d",vertex);
	visited[vertex]=1;
	int i;
	for(i=0;i<n;i++)
	{
		if(!visited[i] && graph[vertex][i]==1)
		{
			BFS(i);
		}
	}
}