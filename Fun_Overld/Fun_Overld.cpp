/*
 *  函数重载：C++允许在同一作用域中声明几个功能类似的同名函数，这些函数的形参列表必须不同,常用来处理功能实现类似数据不同的问题
 *      形参不同：参数个数、参数类型、参数顺序
 * */


#include <stdio.h>
#include <iostream>
using namespace std;


int Add(int x, int y){
  return x + y;
}

//参数类型不同
double Add(double x, long y){
  return x + y;
}
//参数顺序不同
long Add(long x, double y){
  return x + y;
}
//参数个数不同
int Add(int x, int y, int z){
  return x + y + z;
}

int main() {
  int a = Add(10, 20);
  double b = Add(10.0, 20L);
  long c = Add(10L, 20.0);
  int d = Add(10, 20, 30);
  cout<<a<<endl;
  cout<<b<<endl;
  cout<<c<<endl;
  cout<<d<<endl;

  return 0;
}
