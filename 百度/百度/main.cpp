#include <vector>
#include <iostream>

using namespace std;

int main() {
	int n, k;
	while (cin >> n >> k) {
		vector<int> fav(n);

		for (int i = 0; i < n; ++i) {
			cin >> fav[i];
		}

		int summary[1024] = { 0 };
		int sum = 0;
		for (int i = 0; i < fav.size(); ++i) {
			++summary[fav[i]];
		}

		for (int i = 0; i <= k; ++i) {
			if (summary[i] % 2 == 0) {
				if (summary[i] == 0) {
					continue;
				}
				sum += (summary[i] / 2);

			}
			else {
				sum += (1 + (summary[i] / 2));
			}
		}
		cout << sum << endl;
	}
	
	return 0;
}