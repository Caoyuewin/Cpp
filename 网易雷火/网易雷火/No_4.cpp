//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//bool judge(int x, int y) {
//	for (int j = 2; j <= x; ++j) {
//		if (x % j == 0 && y % j == 0)
//			return false;
//	}
//	return true;
//}
//
//double F(int num) {
//	int count = 1;
//	for (int i = 2; i <= num; ++i) {
//		if (judge(i,num))
//			++count;
//	}
//	return count;
//}
//
//int main() {
//	int N;
//	while (cin >> N) {
//		double Min = 1;
//		for (int i = 1; i <= N; ++i) {
//			double count = F(i);
//			double cur = count / i;
//			Min = min(cur, Min);
//		}
//		printf("%.6f\n", Min);
//	}
//	/*while (cin >> N) {
//		vector<double> v;
//		double Min = 1;
//		for (int i = 2; i < N; ++i) {
//			double count = 1;
//			for (int j = 2; j < i; ++j) {
//				if (judge(j, i)) {
//					++count;
//				}
//			}
//			double cur = count / i;
//			Min = min(cur, Min);
//		}
//		printf("%.6f\n", Min);
//	}*/
//	return 0;
//}