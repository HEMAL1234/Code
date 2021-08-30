
#include<bits/stdc++.h>
using namespace std;
 main(){
    int n,a,k;
    cin>>n>>a>>k;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    for(int i=a;i<n-k;i++){
        bool k1=false;
        for(int j=i-a;j<i;j++){
            if(vec[i]<vec[j]){
                k1=true;
            }
            else{
                k1=false;
                break;
            }
        }
        if(k1){
           for(int j=i+k;j>i;j--){
            if(vec[i]<vec[j]){
                k1=true;
            }
            else{
                k1=false;
                break;
            }
        }
        }
        if(k1){
            cout<<i+1<<" ";
            return 0;
        }
    }
    cout<<"-1";
    return 0;

}
