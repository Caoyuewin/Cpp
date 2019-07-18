#define _CRT_SECURE_NO_WARNINGS 1
#if 0

int ADD(int x, int y) {
	return x + y;
}

double ADD(double x, double y) {
	return x + y;
}

int main() {
	ADD(1, 2);
	return 0;
}


class Date {
public:
	void SetDate(int year, int month, int day) {
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main() {
	Date d
}
using namespace std;


void TestFun1(int a) {}

void TestFun2(int& a) {}

int main() {
	int a = 0;
	int begin1 = clock();
	for (size_t i = 0; i < 10000; ++i)
		TestFun1(a);
	int end1 = clock();

	int begin2 = clock();
	for (size_t i = 0; i < 10000; ++i)
		TestFun2(a);
	int end2 = clock();

	cout << end1 - begin1 << endl;
	cout << end2 - begin2 << endl;
	return 0;

}
#endif
#if 0
#include <iostream>
#include <string>

using namespace std;

int main() {
	string password;
	cin >> password;
	int low_letter = 0;
	int up_letter = 0;
	int number = 0;
	int symbol = 0;
	int score = 0;
	if (password.size() <= 4)
		score += 5;
	if (password.size() >= 5 && password.size() <= 7)
		score += 10;
	if (password.size() >= 8)
		score += 25;

	string::iterator it = password.begin();
	for (; it < password.end(); it++) {
		
		if (*it >= '0' && *it <= '9')
			number++;
		else if (*it >= 'A' && *it <= 'Z')
			up_letter++;
		else if (*it >= 'a' && *it <= 'z')
			low_letter++;
		else
			symbol++;
	}
	//字母
	if (low_letter > 0 && up_letter > 0)
		score += 20;
	else if (low_letter > 0 || up_letter > 0)
		score += 10;
	//数字
	if (number > 1)
		score += 20;
	else if (number == 1)
		score += 10;
	//符号
	if (symbol > 1)
		score += 25;
	else if (symbol == 1)
		score += 10;
	//奖励
	if (up_letter > 0 && low_letter > 0 && number > 0 && symbol > 0)
		score += 5;
	else if ((up_letter > 0 || low_letter > 0) && number > 0 && symbol > 0)
		score += 3;
	else if ((up_letter > 0 || low_letter > 0) && number > 0)
		score += 2;
	
	
	if (score >= 90)
		cout << "VERY_SECURE" << endl;
	else if (score >= 80)
		cout << "SECURE" << endl;
	else if (score >= 70)
		cout << "VERY_STRONG" << endl;
	else if (score >= 60)
		cout << "STRONG" << endl;
	else if (score >= 50)
		cout << "AVERAGE" << endl;
	else if (score >= 25)
		cout << "WEAK" << endl;
	else
		cout << "VERY_WEAK" << endl;
	return 0;
}
#endif

#include <iostream>

using namespace std;

#if 0
class LCA {
public:
	int getLCA(int& a, int& b) {
		
		cin >> a >> b;
		int i = a, j = b;
		int a_times = 0, b_times = 0;
		while (i != 1 || j != 1) {
			if(i != 1){
				i >>= 1;
				a_times++;
			}
			if (j != 1) {
				j >>= 1;
				b_times++;
			}

		}
		if (a_times = b_times) {
			while (a != b) {
				a >>= 1;
				b >>= 1;
			}
			return a;
		}
		
		if (a < b) {
			int tmp = a;
			a = b;
			b = tmp;
		}
		//下面a一定大于b
		while (a > b) {
			a >>= 1;
		}
		if (a == b)
			return a;
		//下面a一定小于b，并且位于同一层
		while (a != b) {
			a >>= 1;
			b >>= 1;
		}
		return a;
	}
};

int main() {
	LCA l;
	int a, b;
	int m = l.getLCA(a, b);
	return 0;
}
#endif

#if 0
#include <vector>


bool Find(int target, vector<vector<int> > array) {
	int i = 0, j = array[i].size() - 1;
	for (; i < array.size() - 1; i++) {
		if (target <= array[i][j]) {
			for (; j >= 0; j--) {
				if (array[i][j] == target)
					return true;
			}
			return false;
		}
	}
	return false;
}

int main() {
	vector<vector<int> > v;
	int target, i = 0, j = 0;
	cin >> target;
	for (; i < v.size() - 1; i++) {
		for (; j < v[i].size() - 1; j++) {
			cin >> v[i][j];
		}
	}
	cout << Find(target, v) << endl;
	return 0;
}
#endif

#if 0
#include <iostream>

using namespace std;

int find_max(int x, int y) {
	int num = x - 1;
	while (num > 1) {
		if (y % num == 0 && x % num == 0)
			return num;
		--num;
	}

	return -1;
}

int main() {
	int n, m, steps = 0;
	cin >> n >> m;
	while (n < m) {
		int maxnum = find_max(n, m);
		if (maxnum != -1) {
			n += maxnum;
			++steps;
		}
		else {
			steps = -1;
			break;
		}
	}
	cout << steps << endl;
	return 0;

}
#endif

#if 0
#include <iostream>
#include <vector>

using namespace std;

class countday {
public:
	countday(int year, int month, int day, int* calendar, int size)
		: _year(year)
		, _month(month)
		, _day(day)
		, _calendar(calendar, calendar + size)
	{}



	int count_day() {
		int day = 0;
		for (int i = 0; i < _month - 1; i++) {
			if (i == 2 && is_leapyear())
				day += _calendar[i] + 1;
			else
				day += _calendar[i];
		}
		day += _day;
		if (day < 367)
			return day;
		return -1;
	}
private:
	bool is_leapyear() {
		if (_year % 4 == 0) {
			if (_year % 400 == 0)
				return true;
			if (_year % 100 == 0)
				return false;
			return true;
		}
		else
			return false;
	}
private:
	int _year;
	int _month;
	int _day;
	vector<int> _calendar;
};

int main() {
	int year, month, day;
	while (cin >> year >> month >> day) {
		int calendar[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		int size = sizeof(calendar) / sizeof(int);
		countday c(year, month, day, calendar, size);
		cout << c.count_day() << endl;
	}
	return 0;
}
#endif


#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> bag;
	int n, x, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		bag.push_back(x);
	}
	sort(bag.begin(), bag.end());
	for (int i = 0; i < n; i++) {
		int addsum = 0;
		int mulsum = 1;
		for (int j = 0; j <= i; j++) {
			addsum += bag[j];
			mulsum *= bag[j];
		}
		if (addsum >= mulsum) {
			if (addsum == mulsum)
				continue;
			else
				count++;
		}
		else
			break;
	}
	cout << count << endl;
}
#endif

#if 0
#include <iostream>
 

class myclass {
public:
	void foo() {
		delete this;
	}
};

void fun() {
	myclass *a = new myclass();
	a->foo();
}
int main() {
	fun();
	return 0;
}
#endif


#if 0
#include <iostream>

using namespace std;

bool is_PerfectNum(int n) {
	int sum = 0;
	int m = n - 1;
	while (m >= 1) {
		if (n % m == 0)
			sum += m;
		if (sum > n)
			return false;
		m--;
	}
	if (sum == n)
		return true;
	return false;
}

int count(int n) {
	int _count = 0;
	while (n > 1) {
		if (is_PerfectNum(n))
			_count++;
		--n;
	}
	return _count;
}

int main() {
	int n;
	cin >> n;
	cout << count(n) << endl;
	return 0;
}



#include <iostream>

using namespace std;

template<class T>
bool IsEqual(T& left, T& right) {
	return left == right;
}

void testfun() {
	const char* p1 = "hello";
	const char* p2 = "world";
	if (IsEqual(p1, p2))
		cout << p1 << endl;
	else
		cout << p2 << endl;
}

int main() {
	testfun();	
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	while (cin >> s) {
		int sum = 0;
		do {
			sum = 0;
			for (int i = 0; i < s.size(); i++) {
				sum += (s[i] - '0');
			}
			int i = 0;
			int tmp = sum;
			for (i = 0; tmp; i++) {
				s[i] = tmp % 10 + '0';
				tmp /= 10;
			}
			s.resize(i);
		} while (sum > 9);
		cout << s << endl;
	}
	
	
	return 0;

}
#endif


#if 0
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


string Big_Add(string& s1, string& s2) {
	//将字符变成数字
	//str_to_num(s1);
	//str_to_num(s2);
	//反转字符串
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
		s2.resize(s1.size(),'0');
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

	return sum;
}

int main() {
	string a, b;
	cin >> a >> b;
	string sum = Big_Add(a, b);
	reverse(sum.begin(), sum.end());
	cout << sum << endl;
	return 0;
}

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void Compare(string& s1, string& s2) {
	if (s2.size() >= s1.size()) {
		if (s2.size() == s1.size()) {
			if (s2 > s1) {
				swap(s2, s1);
			}
		}
		else {
			swap(s2, s1);
		}
	}
}

void Rank(string& s1, string& s2, string& s3) {
	Compare(s2, s3);
	Compare(s1, s2);
}

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

	return sum;
}

int main() {
	string a, b, c;
	while (cin >> a >> b >> c) {
		Rank(a, b, c);
		string sum = add(b, c);
		reverse(sum.begin(), sum.end());
		if (sum > a)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;

	}
	return 0;
}
#endif

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
/*
void Compare(string& s1, string& s2){
	if(s2.size() >= s1.size()){
		if(s2.size() == s1.size()){
			if(s2 > s1){
				swap(s2,s1);
			}
		}
		else{
			swap(s2,s1);
		}
	}
}

void Rank(string& s1, string& s2, string& s3){
	Compare(s2,s3);
	Compare(s1,s2);
}
*/
//string add(string& s1, string& s2) {
//	reverse(s1.begin(), s1.end());
//	reverse(s2.begin(), s2.end());
//	//进位位
//	int carry = 0;
//	//暂存每两位的和
//	int tmp = 0;
//	size_t i = 0;
//	string sum;
//	if (s2.size() > s1.size()) {
//		swap(s1, s2);
//		s2.resize(s1.size(), '0');
//	}
//	else {
//		s2.resize(s1.size(), '0');
//	}
//	sum.resize(s1.size());
//	for (; i < s1.size(); i++) {
//		tmp = (s1[i] - '0') + (s2[i] - '0') + carry;
//		if (tmp >= 10) {
//			carry = tmp / 10;
//		}
//		else
//			carry = 0;
//		sum[i] = tmp % 10 + '0';
//	}
//	//处理最高位
//	if (sum[i] - '0' >= 10) {
//		sum[i + 1] = (sum[i] - '0') / 10 + '0';
//		sum[i] = (sum[i] - '0') % 10 + '0';
//	}
//	reverse(sum.begin(), sum.end());
//	return sum;
//}
//
//int main() {
//	string a, b, c;
//	while (cin >> a >> b >> c) {
//		//        Rank(a,b,c);
//		if ((add(a, b) > c) && (add(b, c) > a) && (add(a, c) > b))
//			cout << "Yes" << endl;
//		else
//			cout << "No" << endl;
//	}
//	return 0;
//}
