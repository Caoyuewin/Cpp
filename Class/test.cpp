#include <iostream>
using namespace std;

class A{
  public:
    void PrintA(){
      cout<<_a<<endl;
    }

    void Show(){
      cout<<"show()"<<endl;
    }


  private:
    int _a = 10;
};

int main() {
  A* p = NULL;
  p->PrintA;
  p->Show;
  return 0;
}
