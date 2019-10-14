#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

using namespace std;


/*请完成下面这个函数，实现题目要求的功能
当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
******************************开始写代码******************************/
int DynamicPathPlanning(vector < vector < int > > matrixGrid, int row, int col) {
	vector < vector <int> > ways(row, vector<int>(col, 0));
	ways[0][0] = 1;
	for (int i = 1; i < row; ++i) {
		if (matrixGrid[i][0] == 1) {
			ways[i][0] = 0;
			continue;
		}
		if (matrixGrid[0][i] == 1) {
			ways[0][i] = 0;
			continue;
		}
		ways[i][0] += ways[i - 1][0];
		ways[0][i] += ways[0][i - 1];
	}
	for (int i = 1; i < row; ++i) {
		for (int j = 1; j < col; ++j) {
			if (matrixGrid[i][j] == 1) {
				ways[i][j] = 0;
				continue;
			}
			ways[i][j] = ways[i][j] + ways[i - 1][j] + ways[i][j - 1];
		}
	}
	return ways[row - 1][col - 1];
}
/******************************结束写代码******************************/


int main() {
	int res;

	int _matrixGrid_rows = 0;
	int _matrixGrid_cols = 0;
	cin >> _matrixGrid_rows >> _matrixGrid_cols;
	vector< vector < int > > _matrixGrid(_matrixGrid_rows);
	for (int _matrixGrid_i = 0; _matrixGrid_i < _matrixGrid_rows; _matrixGrid_i++) {
		for (int _matrixGrid_j = 0; _matrixGrid_j < _matrixGrid_cols; _matrixGrid_j++) {
			int _matrixGrid_tmp;
			cin >> _matrixGrid_tmp;
			_matrixGrid[_matrixGrid_i].push_back(_matrixGrid_tmp);
		}
	}

	res = DynamicPathPlanning(_matrixGrid,_matrixGrid_rows, _matrixGrid_cols);
	if (_matrixGrid[0][0] == 1) {
		cout << 0 << endl;
		return 0;
	}
	cout << res << endl;

	return 0;

}
