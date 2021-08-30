#include <iostream>
using namespace std;

class Student {
  private:
    // Private attribute
    int marks;

  public:
    // Setter
    void setmarks(int a) {
      marks =a ;
    }
    // Getter
    int getmarks() {
      return marks;
    }
};

int main() {
  Student myObj;
  myObj.setmarks(50000);
  cout << myObj.getmarks();
  return 0;
}
