#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>


using namespace std;
int main() {
	int n = 0;
	cin >> n;
	int arr[n+1] = {0};
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	vector<int> v(arr, arr + n);;

	return 0;
}