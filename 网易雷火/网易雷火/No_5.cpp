#include <iostream>
#include <vector>

using namespace std;
//����׳�
int cal(int n) {
	int m = n;
	int sum = 1;
	for (int i = n; i > 0; --i) {
		sum *= n
	}
}

int CountCbt(int n) {
	//count��������м���2
	int count = 0;
	//2��3�м����������
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
		//dp��ǰn-1��ķ�����
		long dp = v[0];
		//dn��ǰn�㷽����
		long dn = 0;
		//v[i]�ǵ�i��ķ�����
		//dn = dp * v[i];
		for (size_t i = 0; i < v.size(); ++i) {
			dn = dp * v[i];
			dp = dn;
		}
		cout << dn << endl;
	}

	
	return 0;
}