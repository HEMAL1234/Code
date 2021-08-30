#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
  if (b==0)
  return a;
  else

    gcd(b,a%b);






}
int phi(unsigned int n)
{
  unsigned int result=1;
  for(int i=2;i<=n;i++)

  if(gcd(i,n)==1)

   result++;
   return result;

}
int main()
{
int n;
for(n=1;n<=10;n++)

cout<<"phi("<<n<<")="<<phi(n)<<endl;
return 0;


}
