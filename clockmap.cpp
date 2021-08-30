#include<bits/stdc++.h>
using namespace std;
int main()
{
   double n,m ;
   int t;
   double  d;

     cin>>t;
     while (t--)
     {
         cin>>n>>m;
         d  =(11*m)/2-30*n;

       if (d<0)
        d=-d;
        if(d>180)
        d=360-d;
        cout<< d<<endl;






     }





}


