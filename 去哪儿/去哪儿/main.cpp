#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int fun(vector<int>& arr, int size) {
	int max = arr[0];
	int x = 0;
	for (int i = 0; i < size; ++i) {
		if (x >= 0) {
			x += arr[i];
		}
		else {
			x = arr[i];
		}
		max = max >= x ? max : x;
	}
	return max;
}

int getmax(vector< vector<int> > arr, int n) {
	int sum = 0;
	int maxsum;
	for (int i = 0; i < n; ++i) {
		vector<int> col(n, 0);
		int j = 0;
		for (; j < n; ++j) {
			col[j] += arr[i][j];
		}
		maxsum = fun(col, j);
		sum = max(maxsum, sum);
	}
	return sum;
}

int main() {
	int n;
	cin >> n;
	vector< vector<int> > arr(n, vector<int>(n,0));
	for (int i = 0; i < arr.size(); ++i) {
		for (int j = 0; j < arr[i].size(); ++j) {
			cin >> arr[i][j];
		}
	}
	
	cout << getmax(arr, n) << endl;
	return 0;
}

#include<iostream>
#include<vector>

using namespace std;

int maxarr(vector<int>&line, int size) {
	int max = line[0], b = 0;
	for (int i = 0; i < size; ++i) {
		if (b >= 0)
			b += line[i];
		else
			b = line[i];
		max = max >= b ? max : b;
	}
	return max;
}

int Max(vector<vector<int>> board, int num) {
	int sum = (int)0x80000000, max;
	for (int m = 0; m < num; ++m) {
		vector<int>line(num, 0);
		for (int i = m; i < num; ++i) {
			int j = 0;
			for (; j < num; j++) {
				line[j] += board[i][j];
			}
			max = maxarr(line, j);
			sum = max > sum ? max : sum;
		}
	}
	return sum;
}

int main() {
	int num, in;
	cin >> num;
	vector<vector<int>> board(num, vector<int>(num, 0));
	for (int i = 0; i < num; ++i) {
		for (int j = 0; j < num; ++j) {
			cin >> in;
			board[i][j] = in;
		}
	}
	cout << Max(board, num) << endl;
	return 0;
}


#include<iostream>
#include<string>

using namespace std;

void InOrdersearch(string MidSearch, string BackSearch, int size) {
	if (size) {
		char root = BackSearch[size - 1];
		int i = 0;
		for (; i < size; ++i)
			if (MidSearch[i] == root)
				break;
		cout << root;
		InOrdersearch(MidSearch, BackSearch, i);
		InOrdersearch(MidSearch.substr(i + 1), BackSearch.substr(i), size - i - 1);
	}
}

int main() {
	string mid, last;
	cin >> mid;
	cin >> last;
	InOrdersearch(mid, last, mid.size());
	cout << endl;
	return 0;
}