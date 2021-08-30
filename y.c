#include<stdio.h>
 int N,A[20];
 int s[20];

 int main(){

    read();
    solve(0);

 }
  int  read(){

 int i;
 scanf("%d",&N);
 for(i=0;i<N;i++)
  scanf("%d",&s[i]);



 }
 void print()
 {
   int i;
   //int is_First =1;
   //print("{")  ;
    for(i=0;i<N;i++) if(A[i]==1){


       // if(is_First)
           // is_First=0;
        //else
           // print(",");
        printf("%d",s[i]);


    printf("\n") ;


 }

void solve(int i)
{


    if(i==N)
    {


        print();
        return;

    }
    A[i]=0;
    solve(i+1);
    A[i]=1;
    solve(i+1);
}
   }





