#include <bits/stdc++.h>
using namespace std;
                          //NAHIDUL HASAN HIMEL
                          // DEPT.OF C_S_E,COMILLA UNIVERSITY
int main() {
            int t;
             cin>>t;
        while(t--){
      int m;
    cin>>m;
   int arr[m];
   for (int i = 0 ; i < m; i++){
    cin>>arr[i];
}
    for (int i = 0; i < m; i++){
   int cnt = 1;
      int c = arr[i];
     while (c != i+1){
     c = arr[c-1];
         cnt++;
}
        cout<<cnt<<" ";
}
       cout<<endl;
}



}
