#include <iostream>
#include <vector>

using namespace std;
//计算阶乘
int cal(int n) {
	int m = n;
	int sum = 1;
	for (int i = n; i > 0; --i) {
		sum *= n
	}
}

int CountCbt(int n) {
	//count代表最多有几个2
	int count = 0;
	//2，3有几种数量组合
	for (int i = 0; i <= n; i += 2) {
		if ((n - i) % 3 == 0) {
			
		}
	}
	return count;
}

int main() {
	int W, H;
	while (cin >> W >> H) {
		if (W == 2 || W == 3) {
			cout << 1 << endl;
			continue;
		}
		vector<int> v;
		long c = CountCbt(W);
		long solutions = 0;
		//dp是前n-1层的方法数
		long dp = v[0];
		//dn是前n层方法数
		long dn = 0;
		//v[i]是第i层的方法数
		//dn = dp * v[i];
		for (size_t i = 0; i < v.size(); ++i) {
			dn = dp * v[i];
			dp = dn;
		}
		cout << dn << endl;
	}

	
	return 0;
}