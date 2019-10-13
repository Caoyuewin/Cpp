//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	int n;
//	vector<int> robot, timesarr;
//	int tmp;
//
//	while (cin >> n) {
//		robot.resize(n);
//		timesarr.resize(n, 0);
//		for (int i = 0; i < n; ++i) {
//			cin >> robot[i];
//		}
//
//		int times = 0;
//		int pos = 0;
//		int flag = 0;
//		for (size_t i = 0; i < robot.size() - 1; ++i) {
//			times = 0;
//			flag = 0;
//			for (int j = i + 1; j < robot.size(); ++j) {
//				if (robot[j] > robot[i])
//					break;
//				if (robot[j] <= robot[i] && robot[j] > flag) {
//					++times;
//					if (robot[j] > flag)
//						flag = robot[j];
//				}
//			}
//			timesarr[i] = times;
//		}
//		int maxtimes = timesarr[0];
//		for (int i = 1; i < timesarr.size(); ++i) {
//			if (timesarr[i] > maxtimes) {
//				maxtimes = timesarr[i];
//				pos = i;
//			}
//
//		}
//		cout << robot[pos] << endl;
//	}
//	return 0;
//}

#include <string>
#include <iostream>

using namespace std;

string decode(string& str) {
	str = '1' + 
}

int main() {
	string str;
	string tmp;
	string out;
	while (cin >> str) {
		out = decode(str)
		cout << str << endl;
		for (int i = 0; i < str.size(); ++i) {
			tmp = str;
			for (int j = 0; j < i; ++j) {
				if(str)
			}
			out = decode(tmp);
			cout << out << endl;
		}
	}
}