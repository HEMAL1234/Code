#include <bits/stdc++.h>
using namespace std;
int V,E;
int parent[100];
int cost [1000][10000];
int find(int i)///Find the parent of i
{

    while (parent[i] != i)
        i = parent[i];
    return i;
}

/// Does union of i and j. It returns
///false if i and j are already in same
/// set.
void union1(int i, int j)   /// make the parent of i to the parent of j
{
    int a = find(i);
    int b = find(j);
    parent[a] = b;
}

// Finds MST using Kruskal's algorithm
void kruskalMST()
{
    int mincost = 0; // Cost of min MST.
    int edge_count = 0;
    while (edge_count < V - 1)
    {
        int min = INT_MAX, a = -1, b = -1;
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++)
            {
                if (find(i) != find(j) && cost[i][j] < min)
                {
                    min = cost[i][j];
                    a = i;
                    b = j;
                }
            }
        }

        union1(a, b);
        cout<<"Edge "<<edge_count++<<":("<<a<<" "<<b<<") cost:"<<min<<endl;
        mincost += min;
    }
    cout<<endl<<"Minimum cost= "<<mincost;
}

// driver program to test above function
int main()
{



    //freopen("input.txt","r",stdin);

    cin>>V>>E;
    for(int i=0;i<V;i++)
    {
        for(int j=0; j<V; j++)
        {
            cost[i][j]= INT_MAX;
        }
    }

    for(int j = 0;j<E;j++)
    {
        int m,n;
        cin>>m>>n;
        cin>>cost[m][n];
        //cost[n][m];
    }
    for (int i = 0; i < V; i++)
        parent[i] = i;

    /// Print the solution
    kruskalMST();
    return 0;
}
