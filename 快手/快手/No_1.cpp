#include <iostream>
#include <string>

using namespace std;

bool IsIPv4(string s) {
	int pos = 0; 
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] != '.' && (s[i] < '0' || s[i] > '9'))
			return false;
		if (s[i] == '.') {
			string tmp = s.substr(pos, i);
			pos = i + 1;
			if (tmp[0] == '0' && (atoi(tmp.c_str()) < 0) || atoi(tmp.c_str()) >= 256)
				return false;
		}
	}
	return true;
}

bool IsIPv6(string s) {
	int pos = 0;
	for (int i = 0; i < s.size(); ++i) {
		if ((s[i] >= 'A' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9') || (s[i] == ':')) {
			if (s[i] == ':') {
				if (s[i + 1] == ':')
					return false;
				string tmp = s.substr(pos, i);
				pos = i + 1;
				if (tmp.size() > 4)
					return false;
			}
		}
		else {
			return false;
		}
	}
	return true;
}

int main() {
	string str;
	while (cin >> str) {
		if (IsIPv4(str)) {
			cout << "IPv4" << endl;
		}
		else if (IsIPv6(str)) {
			cout << "IPv6" << endl;
		}
		else {
			cout << "Neither" << endl;
		}

	}

	return 0;

}