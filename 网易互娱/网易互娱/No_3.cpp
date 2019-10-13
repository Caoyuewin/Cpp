#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countcup(int front, int back, int gap) {
	int count = 0;
	while ((front + gap) < back) {
		front += gap;
		count++;
	}
	return count;
}

int main() {
	int T;
	cin >> T;
	int K, M;

	while (T) {
		cin >> K >> M;
		
		vector<int> drink(M);
		int day;
		for (int i = 0; i < M; ++i) {
			cin >> drink[i];
		}
		if (K == 0) {
			cout << "30" << endl;
			continue;
			--T;
		}
		int count = 0;
		int front, back;
		//处理第一天到第一个节日
		size_t i = 1;
		while ((i += K) < drink[0]) {
			++count;
		}
		//处理最后一个节日到第30天
		int j = drink[drink.size() - 1];
		while ((j += K) < 30) {
			++count;
		}
		//处理剩余的天数
		for (i = 1; i < drink.size(); ++i) {
			front = drink[i - 1];
			back = drink[i];
			count += countcup(front, back, K);
		}
		cout << count + drink.size() << endl;
		--T;
	}
}