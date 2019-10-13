#include <iostream>
#include <string>

using namespace std;


void fun(string& str) {
	for (int i = 0; i < str.size(); ++i) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 32;
		}
	}
}

int main() {
	string s;
	s += "abc$";
	fun(s);
	cout << s << endl;
	return 0;
}