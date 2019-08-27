#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	string sn;
	int n;
	string s;
	vector<int> v;
	getline(cin, sn);
	n = sn[0] - '0';
	getline(cin, s);
	for (size_t i = 0; i < s.size(); ++i) {
		if (s[i] > '0' && s[i] < '9') {
			if (s[i - 1] == '-') {
				v.push_back((s[i] - '0') | 0x80000000);
				continue;
			}
			v.push_back(s[i] - '0');
			s.erase(i);
		}
	}
	for (int i = 0; i < v.size(); ++i) {
		for (int j = 0; j < v.size(); ++j) {
			int k = j + 1;
			if (v[j] < v[k])
				continue;
			if ((s[j] == '+' || s[j] == '-') && (s[j + 1] == '+' || s[j + 1] == '-')) {
				int tmp = v[j];
				v[j] = v[k];
				v[k] = tmp;
			}
		}
	}
	return 0;
}