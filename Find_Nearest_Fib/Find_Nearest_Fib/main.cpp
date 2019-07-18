#define _CRT_SECURE_NO_WARNINGS 1
/*
	输入一个整数，输出离整数最近的菲波那切数
	1  1  2  3  5  8  13
*/
#include <iostream>

using namespace std;

int Fib(int n) {
	//产生fibnacci
	int i = 1, j = 1, fib = 0;
	for (;;) {
		fib = i +j;
		i = j;
		j = fib;
		if (fib - n > 0) {
			if (n - i > fib - n)
				return fib - n;
			return n - i;
		}
	}
}


int main() {
	int n;
	cin >> n;
	int m = Fib(n);
	cout << m << endl;
	return 0;
}