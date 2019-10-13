//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	int t, n;
//
//	string s;
//	while (cin >> t) {
//		while (t) {
//			cin >> n;
//			cin >> s;
//			if (s[0] != '8' || n < 11) {
//				cout << "NO" << endl;
//				--t;
//				continue;
//			}
//			int count = 0;
//			for (int i = 0; i < n; ++i) {
//				if (s[i] == '8') {
//					++count;
//				}
//			}
//			if (count < 11) {
//				cout << "NO" << endl;
//				--t;
//				continue;
//			}
//
//			cout << "YES" << endl;
//		}
//		
//	}
//
//
//	return 0;
//}

#include <iostream>

using namespace std;

int BinarySearch(int arr[], int size, int key) {
	if (arr == nullptr) {
		return -1;
	}
	int left = 0;
	int right = size - 1;
	int mid = left + (right - left) / 2;
	while (left < right) {
		if (arr[mid] == key) {
			return mid;
		}
		if (arr[mid] > key) {
			right = mid - 1;
			mid = left + (right - left) / 2;
		}
		if (arr[mid] < key) {
			left = mid + 1;
			mid = left + (right - left) / 2;
		}
	}
	return -1;
}

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int key = 0;
	//cin >> key;
	int key = 4;
	int pos = BinarySearch(arr, sizeof(arr) / sizeof(arr[0]), key);
	if (pos = -1) {
		cout << "error" << endl;
	}
	else {
		cout << arr[pos] << endl;
	}

	return 0;
}