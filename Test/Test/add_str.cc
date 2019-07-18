#if 0
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>

using namespace std;
string add(string& s1, string& s2) {
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	//进位位
	int carry = 0;
	//暂存每两位的和
	int tmp = 0;
	size_t i = 0;
	string sum;
	if (s2.size() > s1.size()) {
		swap(s1, s2);
		s2.resize(s1.size(), '0');
	}
	else {
		s2.resize(s1.size(), '0');
	}
	sum.resize(s1.size());
	for (; i < s1.size(); i++) {
		tmp = (s1[i] - '0') + (s2[i] - '0') + carry;
		if (tmp >= 10) {
			carry = tmp / 10;
		}
		else
			carry = 0;
		sum[i] = tmp % 10 + '0';
	}
	//处理最高位
	if (sum[i] - '0' >= 10) {
		sum[i + 1] = (sum[i] - '0') / 10 + '0';
		sum[i] = (sum[i] - '0') % 10 + '0';
	}
	reverse(sum.begin(), sum.end());
	return sum;
}

bool compare(string s1, string s2) {
	if (s1 > s2)
		return 1;
	else
		return 0;
}

int main() {
	string a, b, c;
	while (cin >> a >> b >> c) {
		//        Rank(a,b,c);
		//if (add(a, b) > c && add(b, c) > a && add(a, c) > b)
		string sum1 = add(a, b);
		string sum2 = add(a, c);
		string sum3 = add(b, c);

		int ret1 = compare(sum1, c);
		int ret2 = compare(sum2, b);
		int ret3 = compare(sum3, a);
		if(ret1 && ret2 && ret3)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

bool Is_In_List(string& cslist, string& name) {
	size_t i = 0;
	int pos;
	string tmp;
	for (; i < cslist.size(); i++) {
		if (cslist.find_first_of(',', i) != string::npos) {
			pos = cslist.find_first_of(',', i);
		}
		else
			pos = cslist.size() - 1;
		tmp = cslist.substr(i, pos - i);
		if (tmp.find(name) != string::npos) {
			return true;
		}
		i = pos;

	}
	return false;
}


int main() {
	string cslist, name;
	while (getline(cin, cslist) && getline(cin, name)) {
		if (name.size() == 0) {
			cout << "Important" << endl;
			continue;
		}
			cout << "Important!" << endl;
		int ret = Is_In_List(cslist, name);
		if (ret == 0)
			cout << "Important!" << endl;
		else
			cout << "Ignore" << endl;
	}

	return 0;
}
#endif
#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

string Reverse_Sen(string& sen) {
	reverse(sen.begin(), sen.end());
	string tmp, reverse_sen;
	size_t i = 0, pos = 0;
	for (; i < sen.size(); i++) {
		if ((sen[i] < 'a' || (sen[i] > 'z' && sen[i] < 'A') || sen[i] > 'Z') || i == sen.size() - 1) {
			tmp = sen.substr(pos, i - pos);
			reverse(tmp.begin(), tmp.end());
			reverse_sen += tmp;
			pos = i + 1;
			if (i != sen.size() - 1) {
				reverse_sen += " ";
			}
		}
	}
	return reverse_sen;
}

int main() {
	string sen;
	while (getline(cin, sen)) {
		string reverse_sen = Reverse_Sen(sen);
		cout << reverse_sen << endl;
	}
	return 0;
}