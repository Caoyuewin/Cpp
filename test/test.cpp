#include<iostream>
#include<unistd.h>
using namespace std;



#if 0
int main(){
  int a = 0;
  while(1){

    cin>>a;

    cout<<a<<endl;
    if(a == 10)
      break;
  }
  return 0;
}
#endif
#if 0
int swap(int& x, int& y){
  int tmp = x;
  x = y;
  y = tmp;
}

int main() {
  int a = 10;
  int b = 100;
  swap(a,b);
  cout<<a<<" "<<b<<endl;
  return 0;
}
#endif

#if 0
int main() {
  double d = 12.34;
  const int& rd = d;
  cout<<d<<" "<<rd<<endl;
  cout<<&d<<" "<<&rd<<endl;
  return 0;
}
#endif

#if 0
int main() {
  const int a = 10;
  int* pa = (int*)&a;
  *pa = 100;
  cout<<a<<endl;
  cout<<*pa<<endl;
  cout<<&a<<endl;
  cout<<pa<<endl;
  return 0;
}
#endif
#if 0
inline int Add(int x, int y){
  return x +y;
}
int main() {
  int x = 10;
  int y = 20;
  Add(x,y);
  return 0;
}
#endif

#if 0
void TestFun(int a =10){
  cout<<"缺省"<<endl;
}

void TestFun(int a){
  cout<<"非缺省"<<endl;
}
//重载失败
int main() {
  int a = 10;
  TestFun(a);
  return 0;
}



int main(){
  int a, b;
  while(cin>>a>>b){
    cout<<a+b<<endl;
  }
  return 0;
}
#endif

#if 0

int main(){
  int n;
  int a_1,a_2, a_3;
  cin >> n;
  cout << n << endl;
  while(n){
    cin >> a_1 >> a_2 >> a_3;
    cout<< a_1 << " " << a_2 <<" "<< a_3 << endl;
    n--;
  }
  return 0;
}
#endif

#include <vector>

class Solution {
  public:
    bool Find(int target, vector<vector<int> > array) {
      int i = 0 ,j = array[i].size() - 1;
      for(; target >= array[i][j]; i++){
        if(target == array[i][j])
          return true;
      }
      for(; j >= 0; j--){
        if(array[i][j] == target)
          return true;
      }
      return false;

    }

};
