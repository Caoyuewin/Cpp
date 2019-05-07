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
