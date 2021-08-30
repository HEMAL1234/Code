#include <iostream>
#include <cstdio>
using namespace std;

int main()
{

int n,K;
cin>>n>>K;
int** arr=new int* [n];
for(int i=0;i<n;i++)
    {
      int a;
      cin>>a;
      int* b=new int [a];
      for(int j=0;j<a;j++)
        {
          int e;
          cin>>e;
          b[j]=e;
        }
    *(arr+i)=b;
   }

  for(int i=0;i<K;i++)
  {
  int x,y;
  cin>>x>>y;
  cout<<arr[x][y]<<endl;
  }
}
