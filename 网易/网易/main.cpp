//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//int main() {
//	int n, m;
//	int num;
//	while (cin >> n >> m) {
//		vector<int> v(n);
//
//		for (int i = 0; i < n; ++i) {
//			cin >> v[i];
//		}
//		while (m) {
//			cin >> num;
//			int count = 0;
//			for (int i = 0; i < n; ++i) {
//				if (v[i] == num) {
//					++count;
//				}
//			}
//			cout << count << endl;
//
//			--m;
//		}
//
//	}
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	int T;
//	cin >> T;
//	while (T) {
//		int n;
//		cin >> n;
//		vector<int> v(n);
//		for (int i = 0; i < n; ++i) {
//			cin >> v[i];
//		}
//		int maxlen = 1;
//		int count = 0;
//		int sum = v[0];
//		for (int i = 1; i < n; ++i) {
//			/*if (sum <= v[i]) {
//				dn = dp + 1;
//				dp = dn;
//				maxlen = max(maxlen, dn);
//				sum += v[i];
//			}
//			else {
//				dp = 1;
//				dn = 1;
//				sum = 0;
//			}*/
//			sum = v[i], count = 1;
//			for (int j = i + 1; i < n; ++j) {
//				if (v[j] >= sum) {
//					count++;
//					sum += v[j];
//				}
//				else {
//					break;
//				}
//			}
//			maxlen = max(maxlen, count);
//
//		}
//		cout << maxlen << endl;
//		--T;
//	}
//	return 0;
//}


//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int T;
//	while (T) {
//		int n, m;
//		cin >> n >> m;
//		vector<int> v(n);
//		for (int i = 0; i < n; ++i) {
//			cin >> v[i];
//		}
//
//		for (int i = 0; i < n - 1; ++i) {
//			if(v[i] < v[i + 1])
//			
//		}
//
//		--T;
//	}
//	return 0;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int n, B;
//	while (cin >> n >> B) {
//		vector<int> v(n);
//		for (int i = 0; i < n; ++I) {
//			cin >> v[i];
//		}
//
//		int sum = 0;
//		int cost;
//		for (int i = 0; i < n; ++i) {
//			if (sum == B) {
//				
//			}
//		}
//
//	}
//	return 0;
//}