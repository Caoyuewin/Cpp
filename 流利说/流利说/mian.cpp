#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n;
	int a, b;
	while (cin >> n) {
		cin >> a >> b;

		vector<vector<int>> cost(n, vector<int>(2, 0));
		for (int i = 0; i < n; ++i) {
			cin >> cost[i][0] >> cost[i][1];
		}

		int sum = 0;
		for (int i = 0; i < cost.size(); ++i) {
			if (a != 0 && b != 0) {
				sum += min(cost[i][0], cost[i][1]);
				if (cost[i][0] > cost[i][1]) {
					--b;
				}
				else {
					--a;
				}
				continue;
			}
			if (a == 0) {
				sum += cost[i][1];
			}
			else {
				sum += cost[i][1];
			}
		}
		cout << sum << endl;
	}
	
	return 0;
}

#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int M, N;
	while(cin >> M >> N)
}
