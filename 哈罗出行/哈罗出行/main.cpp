#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	char src[10] = { 0 };
	char dest[20] = { 0 };
	int size = sizeof(dest);
	cin >> src;
	for (int i = 0; i < size; ++i) {
		if (src[i] == '\0') {
			dest[i] = '0';
			continue;
		}
		dest[i] = src[i];
	}
	cout << dest << endl;
	return 0;
}