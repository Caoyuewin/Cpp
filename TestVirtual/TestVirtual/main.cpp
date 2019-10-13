#include <iostream>
#include <string>

using namespace std;

//class Base {
//public:
//	virtual void fun() {
//		cout << "Base::fun()" << endl;
//	}
//private:
//	int _b;
//};
//
//class Derived : public Base {
//public:
//	virtual void fun(){
//		cout << "Derived::fun" << endl;
//	}
//private:
//	int _d;
//};
//
//void Testfun(Base &b) {
//	b.fun();
//}

int main() {
	std::string str = "abc" + 'd';
	cout << str << endl;
	return 0;
}