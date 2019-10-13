//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	int N;
//	while (cin >> N) {
//		vector< vector<double> > v(N, vector<double>(2, 0));
//		for (int i = 0; i < N; ++i) {
//			cin >> v[i][0] >> v[i][1];
//		}
//
//		for (int i = v.size() - 1; i >= 0; --i) {
//			for (int j = 0; j < i; ++j) {
//				//s1 > s2, 交换v[0] , v[1]
//				if (v[j][0] * v[j][1] > v[j+1][0] * v[j+1][1]) {
//					swap(v[j], v[j + 1]);
//				}
//				//s1 == s2,判断宽高比
//				else if (v[j][0] * v[j][1] == v[j + 1][0] * v[j + 1][1]) {
//					//如果前面的宽高比大于后面的，交换
//					double n1 = min(v[j][0] / v[j][1], v[j][1] / v[j][0]);
//					double n2 = min(v[j + 1][0] / v[j + 1][1], v[j + 1][1] / v[j + 1][0]);
//					if (n1 < n2) {
//						swap(v[j], v[j + 1]);
//					}
//					//宽高比相同
//					else if (n1 == n2) {
//						//前面的宽度比后面的大，交换
//						if (v[j][0] > v[j + 1][0]) {
//							swap(v[j], v[j + 1]);
//						}
//					}
//				}
//			}
//		}
//
//		for (int i = 0; i < v.size(); ++i) {
//			cout << v[i][0] << " " << v[i][1] << " ";
//		}
//		cout << endl;
//
//	}
//	return 0;
//}