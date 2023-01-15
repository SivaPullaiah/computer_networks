#include<stdio.h>

void main()
{
	int path[5][5],mat[5][5],i,j,index,p;
	int t[5],stp,edp,st=1,ed=5,min;
	printf("Enter the cost matrix: \n");
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	scanf("%d",&mat[i][j]);
	printf("\nEnter the paths: ");
	scanf("%d",&p);
	printf("Enter possible paths: ");
	for(i=1;i<=p;i++)
	for(j=0;j<=5;j++)
	scanf("%d",&path[i][j]);



	for(i=1;i<=p;i++)
	{
		t[i]=0;
		stp=st;
		for(j=1;j<=5; j++)
		{
			edp=path[i][j+1];
			t[i]=t[i]+mat[stp][edp];
			if(edp==ed) break;
			else stp=edp;
		}
	}
	
	min=t[st];
	index=st;
	for(i=1;i<=p; i++)
	{
		if(min>t[i]){
			min=t[i];
			index=i;
		}
	}
	printf("Minimum cost %d",min);
	printf("\nMinimum cost path");
	for(i=1;i<=5;i++)
	{
		printf("----%d", path[index][i]);
		if(path[index][i]=ed) break;
	}
	
}
