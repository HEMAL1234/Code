#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
// Data structure for Max Heap
 
class node{
public:
        int v,cost;
        node(){}
        node(int vv,int cc){v=vv; cost=cc;}
};
 
bool operator<(node a, node b)
{
        return a.cost>b.cost;
}
//bool operator>(node a, node b)
//{
//        return a.cost<b.cost;
//}
 
 
 
//int sz=100005;
//template<class X>
//class PriorityQueue
//{
//private:
//        int cnt;
//        X *A;
//
//        void heapify_down(int i)
//	{
//		int left = i*2;
//		int right = i*2 + 1;
//		int largest = i;
//		if (left <= cnt && A[left] > A[i])
//			largest = left;
//		if (right <= cnt && A[right] > A[largest])
//			largest = right;
//		if (largest != i) {
//			swap(A[i], A[largest]);
//			heapify_down(largest);
//		}
//	}
//
//	void heapify_up(int i)
//	{
//		if (i>1 && A[i/2] < A[i])
//		{
//			swap(A[i], A[i/2]);
//			heapify_up(i/2);
//		}
//	}
//
//public:
//        PriorityQueue(int SZ=sz )
//        {
//                A=new X[SZ];
//                cnt=0;
//        }
//
//        int size(){return cnt;}
//	bool empty(){return cnt == 0;}
//
//	void push(X key)
//	{
//		cnt++;
//		A[cnt]=(key);
//		heapify_up(cnt);
//	}
//
//	void pop()
//	{
//                A[1] = A[cnt];
//                cnt--;
//                heapify_down(1);
//	}
//
//	X top(){return A[1];}
//};
 
 
int adj_matrix[100][100];
class prims_algo{
        int vertex,edge,u,v,weight,i,j,ans=0;
        bool visited[100]={false};
 
public:
        void input()
        {
                cin>>vertex>>edge;
                for(i=1;i<=edge;i++)
                {
                        cin>>u>>v>>weight;
                        adj_matrix[u][v]=weight;
                        adj_matrix[v][u]=weight;
                }
        }
 
        void calculate()
        {
                priority_queue<node>pq;
                pq.push(node(0,0));
                while(!pq.empty())
                {
                        node tmp=pq.top();
                        pq.pop();
                        if(visited[tmp.v]==1) continue;
                        //cout<<tmp.v<< ' '<<tmp.cost<<endl;
                        ans+=tmp.cost;
                        visited[tmp.v]=1;
 
                        for(i=0;i<vertex;i++)
                        {
                                if(visited[i]==1) continue;
                                if(adj_matrix[tmp.v][i]!=0)
                                        pq.push(node(i,adj_matrix[tmp.v][i]));
                        }
                }
                cout<<"minimum cost is "<<ans<<endl;
        }
 
 
};
 
int main()
{
        freopen("input.txt","r",stdin);
 
        prims_algo object;
        object.input();
        object.calculate();
        return 0;
}
