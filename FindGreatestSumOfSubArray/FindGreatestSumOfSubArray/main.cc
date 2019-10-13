#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	int FindGreatestSumOfSubArray(vector<int> array) {
		int maxsum = array[0], F1 = array[0], Fn;
		for (int i = 1; i < array.size(); i++) {
			if (array[i] > 0) {
				Fn = F1 + array[i];
				F1 = Fn;
			}
			else {
				if (F1 < 0) {
					Fn = array[i];
					F1 = Fn;
				}
				else {
					Fn = F1;
				}
			}
			if (Fn > maxsum) {
				maxsum = Fn;
			}
		}
		return maxsum;
	}
};

int main() {
	vector<int> array;
	Solution s;
	int n,m;
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			cin >> m;
			array.push_back(m);
		}
		int ret = s.FindGreatestSumOfSubArray(array);
		cout << ret << endl;
	}
}