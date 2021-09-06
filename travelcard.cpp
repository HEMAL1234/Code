  //Bishmillahir Rahmanir Rahim
   // Praise to Allah who has to give a chance to alive 
//Md.Nahidul Hasan Himel 
//Dept.of Computer Science and Engineering
//Comilla University,Cumilla 
//E-mail:nahidulhemal123@gmail.com
 
 
 
#include<bits/stdc++.h>
using namespace std;
 
int arr[10000001],dp[10000001];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        long temp1=max(0,arr[i]-89),temp2=max(0,arr[i]-1439);
        int p=lower_bound(arr+1,arr+1+n,temp1)-arr;
        int  d=lower_bound(arr+1,arr+1+n,temp2)-arr;
        p--,d--;
        dp[i]=min(dp[i-1]+20,min(dp[p]+50,dp[d]+120));
        cout<<dp[i]-dp[i-1]<<endl;
    }
}