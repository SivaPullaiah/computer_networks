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
	printf("Enter the no.of Nodes: ");
	scanf("%d", &n);
	printf("\nEnter distance vector matrix(999 for no direct path):\n");

	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		scanf("%d", &dmat[i][j]);
		dmat[i][i]=0;
		rt[i].dist[j]=dmat[i][j]; //router distance is we scanned one
		rt[i].from[j]=j;          //that node is saved
	}
	do
	{
		count=0;
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		for(k=0;k<n;k++)
		if(rt[i].dist[j]>dmat[i][k]+rt[k].dist[j])  //if router dist is > an alternate path dist
		{
			rt[i].dist[j]=rt[i].dist[k]+rt[k].dist[j];   //assign that alternate path to that by the intermediate node k
			rt[i].from[j]=k;      //storing that intermediate node
			count++;
		}
	}while(count!=0);
	for(i=0;i<n;i++)
	{
		printf("\n\nState value node=%d ",i+1);
		for(j=0;j<n;j++)
		printf("\t\nnode to %d via %d distance %d",j+1,rt[i].from[j]+1,rt[i].dist[j]);
		printf("\n\n");
	}
	
}













