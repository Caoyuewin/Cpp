/*
 * 缺省参数：在声明或者定义函数时为函数参数指定的一个默认值,当参数缺省时，编译器使用这个默认参数
 *    缺省参数不能同在声明或者定义中给出
 *    全缺省参数：所有形参都有缺省参数
 *    半缺省参数：部分形参有缺省参数
 *        半缺省参数必须从右往左一次给出，不可以从左到右或者间隔给出
 * */
#include <stdio.h>

/*全缺省*/
int ADD(int a = 10, int b = 20 , int c = 30) {
  return a + b + c;
}
//半缺省
int ADD2(int a, int b = 20 , int c = 30) {
  return a + b + c;
}

int ADD3(int a, int b, int c = 30) {
  return a + b + c;
}

int main() {
  int ret1 = ADD();
  int ret2 = ADD2(10);
  int ret3 = ADD3(10, 20);
  printf("%d, %d, %d\n",ret1, ret2, ret3);

 return 0; 
}
