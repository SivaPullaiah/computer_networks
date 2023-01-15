#include<stdio.h>

struct node
{
	unsigned dist[20];
	unsigned from[20];
}rt[10];

int main()
{
	int dmat[20][20];
	int i,j,k,n,count=0;
	printf("Enter the no.of nodes: ");
	scanf("%d",&n);
	printf("Enter the distance matrix (999 for no link):");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		scanf("%d",&dmat[i][j]);
		dmat[i][i]=0;
		rt[i].dist[j]=dmat[i][j];
		rt[i].from[j]=j;
	}

	do
	{
		count=0;
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		for(k=0;k<n;k++)
		if(rt[i].dist[j]>dmat[i][k]+rt[k].dist[j])
		{
			rt[i].dist[j]=rt[i].dist[k]+rt[k].dist[j];
			rt[i].from[k]=k;
		}
	}while(count!=0);
	
	for(i=0;i<n; i++)
	{
		printf("\n\nstate select node=%d",i+1);
		for(j=0;j<n;j++)
		printf("\t\nnode to %d via %d distance: %d",j+1, rt[i].from[j]+1, rt[i].dist[j]);
		printf("\n\n");
		
	}
	
}