#include <iostream>
#include <vector>

using namespace std;

int main() {
	int x, y, n;
	while (cin >> x >> y >> n) {
		vector< vector<int> > v(1000, vector<int>(1000, 0));
		int xi, yi;
		for (int i = 0; i < n; ++i) {
			cin >> xi >> yi;
			xi += 500;
			yi += 500;
			v[xi][yi] = 1;
		}

		//中心是500，500
		//1. (x,y)在第一象限
		int i = 500, j = 500;
		while (i != xi && j != yi) {
			
		}
		cout << 6 << endl;
	}
}