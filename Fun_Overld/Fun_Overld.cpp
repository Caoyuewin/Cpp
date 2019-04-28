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

double Add(double x, double y){
  return x + y;
}

long Add(long x, long y){
  return x + y;
}

int main() {
  int a = Add(10, 20);
  double b = Add(10.0, 20.0);
  long c = Add(10L, 20L);
  cout<<a<<endl;
  cout<<b<<endl;
  cout<<c<<endl;

  return 0;
}
