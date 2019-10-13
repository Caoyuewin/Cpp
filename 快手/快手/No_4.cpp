//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//
//int main() {
//	int N;
//	while (cin >> N) {
//		if (N <= 0) {
//			cout << 0 << endl;
//			continue;
//		}
//		if (N == 1) {
//			cout << 1 << endl;
//			continue;
//		}
//		if (N <= 3) {
//			cout << N << endl;
//			continue;
//		}
//
//		vector<int> v(N, 0);
//		for (int i = 0; i < N; ++i)
//			cin >> v[i];
//
//		sort(v.begin(), v.end());
//		vector<int> v2;//¥Ê∑≈≤Ó÷µ
//		for (int i = 0; i < N - 1; ++i) {
//			v2.push_back(v[i + 1] - v[i]);
//		}
//		int count = 1; 
//		int Max = 0;
//		for (int i = 0; i < v2.size() - 1; ++i) {
//			if (v2[i + 1] == v2[i]) {
//				++count;
//				Max = max(count, Max);
//			}
//			else {
//				count = 1;
//			}
//		}
//
//		cout << Max + 1 << endl;
//
//	}
//	return 0;
//
//}