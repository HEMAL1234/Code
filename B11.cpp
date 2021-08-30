#include<bits/stdc++.h>
  
using namespace std;


main(){
	long long int m=1000000007,a,b,c,d,test;  
      int c1,c2,c3,c4,d1,d2,d3,d4;
	cin>>test;
	while(test--){
		 cin>>a>>b>>c>>d;
           c1=a%m;
          c2=b%m;
          c3=c%m;
          c4=d%m;
          d1=(c1*c2)%m;
           d2=(c3*c4)%m;
		   d3=d1-d2;
		cout<<d3<<endl;
	}
} 