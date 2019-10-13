//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	vector<int> bn;
//	long long num;
//	while (cin >> num) {
//		bn.resize(0);
//		int n = 0;
//		int m = 0;
//		while (num) {
//			n = num % 2;
//			bn.push_back(n);
//			num /= 2;
//		}
//		size_t i = 0, j = bn.size() - 1;
//		int flag = 0;
//		for (; i <= j; ++i, --j) {
//			if (bn[i] != bn[j]) {
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//	}
//	
//	return 0;
//}