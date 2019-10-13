#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	int a[20001];
	while (cin >> n) {
		a[0] = 1;
		int tmp, dig, i, j = 0;
		for (i = 2; i <= n; ++i) {
			int num = 0;
			for (j = 0; j < dig; ++j) {
				tmp = a[j] * i + num;
				a[j] = tmp % 10;
				num = tmp / 10;
			}
			while (num) {
				a[dig] = num % 10;
				num = num / 10;
				++dig;
			}

			int m = 0;
			for (i = 0; i < dig; ++i) {
				m = a[i];
				while (m % 10 == 0) {
					m /= 10;
				}
				m %= 10;
				if (m != 0) {
					break;
				}
			}

			cout << m << endl;
		}
		
		
	}
	return 0;
}