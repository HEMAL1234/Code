#include <iostream>
using namespace std;
class Add{
public:

   Add(int num1, int num2) {
     cout<<(num1+num2)<<endl;
   }
};
int main(void){

   Add obj1(10, 20);

   Add obj2 = Add(50, 60);
   return 0;
}
