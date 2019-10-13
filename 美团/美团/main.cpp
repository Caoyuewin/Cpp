#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	string A;
	string B;
	string result;
	cin >> A;
	cin >> B;

	if (A.size() == 0) {
		cout << B << endl;
		return 0;
	}
	if (B.size() == 0) {
		cout << A << endl;
		return 0;
	}
	//两个都不为0
	if (A.size() < B.size()) {
		swap(A, B);
	}

	B.resize(A.size(), 0);

	//计算
	vector<int> v_A, v_B;
	for (int i = 0; i < A.size(); ++i) {
		if (A[0] == '-') {
			++i;
			continue;
		}
		v_A.push_back(A[i] - '0');
	}
	for (int i = 0; i < B.size(); ++i) {
		if (B[0] == '-') {
			++i;
			continue;
		}
		v_B.push_back(B[i] - '0');
	}

	int carry = 0;
	if (A[0] != '-' && B[0] != '-') {
		//两个都大于0
		int sum = 0;
		for (int i = A.size() - 1; i >= 0; ++i) {
			sum = v_A[i] + v_B[i] + carry;
			carry = 0;
			if (i == 0) {
				v_A[i] = sum;
				break;
			}
			v_A[i] = sum % 10;
			if (sum >= 10) {
				carry = 1;
			}
		}
	}

	for (int i = 0; i < v_A.size(); ++i) {
		cout << v_A[i];
	}
	cout << endl;


	return 0;
}