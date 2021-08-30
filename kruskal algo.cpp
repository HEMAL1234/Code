#include <bits/stdc++.h>
using namespace std;


    int i,j,k,a,b,u,v,n,ne=1;
    int d,mincost=0,cost[9][9],parent[9];
    int find(int);
    int uni(int,int);
     main()
    {

    	printf("\n\tImplementation of Kruskal's Algorithm\n");
    	printf("\nEnter the no. of vertices:");
    	scanf("%d",&n);
    	printf("\nEnter the cost adjacency matrix:\n");
    	for(i=1;i<=n;i++)
    	{
    		for(j=1;j<=n;j++)
    		{
    			scanf("%d",&cost[i][j]);
    			if(cost[i][j]==0)
    				cost[i][j]=1000;
    		}
    	}
    	printf("The edges of Minimum Cost Spanning Tree are\n");
    	while(ne < n)
                        //while(ne<n)
    	{
    		for(i=1,d=1000;i<=n;i++)// for(i=1;d=999;i<=n;i++)
    		{
    			for(j=1;j <= n;j++)
    			{
    				if(cost[i][j] < d)
    				{
    					d=cost[i][j];
    					a=u=i;
    					b=v=j;
    				}
    			}
    		}
    		u=find(u);
    		v=find(v);
    		if(uni(u,v))
    		{
    			printf("%d edge (%d,%d) =%d\n",ne++,a,b,d);
    			mincost +=d;
    		}
    		cost[a][b]=cost[b][a]=1000;
    	}
    	printf("\n\tMinimum cost = %d\n",mincost);

    }
    int find(int i)      // int find(int i)

    {
    	while(parent[i])  // while(parent[i])
    	i=parent[i];       // i=parent[i];
    	                     // return i;
    	return i;
    }
    int uni(int i,int j)  // int uni(int i,int j)
    {
    	if(i!=j)          // if(i!=j)

    	{
    		parent[j]=i;    // parent [j]=i;
                               // return 1;
    		return 1;
    	}
    	return 0;
    }
