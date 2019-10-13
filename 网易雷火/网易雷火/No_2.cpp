//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	int N, M;
//	while (cin >> N >> M) {
//		vector< vector<int> > v(M, vector<int>(3, 0));
//		for (int i = 0; i < M; ++i) {
//			cin >> v[i][0] >> v[i][1] >> v[i][2];
//		}
//
//		if (v[0][0] < v[0][2]) {
//			for (int i = 0; i < M; ++i) {
//				sort(v[i].begin(), v[i].end());
//				cout << v[i][0] << " " << v[i][1] << " " << v[i][2] << " " << endl;
//			}
//		}
//		
//	}
//
//	return 0;
//}