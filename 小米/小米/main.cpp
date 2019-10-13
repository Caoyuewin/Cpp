//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <limits>
//#include <algorithm>
//
//using namespace std;
//
//
///*请完成下面这个函数，实现题目要求的功能
//当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
//******************************开始写代码******************************/
//
//int cal(int x, int y) {
//	int big = max(x, y);
//	int small = min(x, y);
//	return big - small;
//}
//
//int solution(vector < int > arr) {
//	int Dn = 0;//
//	int D1 = 0;//
//
//	for (int i = 3; i < arr.size(); ++i) {
//		int pre = i - 1;
//		int back = i + 1;
//		if((arr[i] - arr[pre]))
//	}
//	
//
//}
///******************************结束写代码******************************/
//
//
//int main() {
//	int res;
//
//	int _arr_size = 0;
//	cin >> _arr_size;
//	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//	vector<int> _arr;
//	int _arr_item;
//	for (int _arr_i = 0; _arr_i < _arr_size; _arr_i++) {
//		cin >> _arr_item;
//		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//		_arr.push_back(_arr_item);
//	}
//
//
//
//	res = solution(_arr);
//	cout << res << endl;
//
//	return 0;
//
//}


/*********************************************************************/

#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
#include <string>

using namespace std;


/*请完成下面这个函数，实现题目要求的功能
当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
******************************开始写代码******************************/
vector< vector <int>> solution(vector< vector<int> > input) {
	for (int i = 0; i < input.size(); ++i) {
		for (int j = 0; j < input[i].size(); ++j) {
			if (input[i][j] == 0) {
				input[i].erase[j];
				input[i].push_back[0];
				continue;
			}
			if (input[i][j] == input[i][j + 1]) {
				input[i][j] += input[i][j + 1];
				input[i].erase[j + 1];
				input[i].push_back[0];

			}
		}
	}

}
/******************************结束写代码******************************/


int main() {
	vector< vector<int> >  res;

	int _input_size = 0;
	cin >> _input_size;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	vector<string> _input;
	string _input_item;
	for (int _input_i = 0; _input_i < _input_size; _input_i++) {
		getline(cin, _input_item);
		_input.push_back(_input_item);
	}

	vector< vector<int> > v;
	for (int i = 0; i < _input.size(); ++i) {
		for (int j = 0; i < _input[i].size(); ++j) {
			if (_input[i][j] == ' ')
				continue;
			v[i].push_back[_input[i][j] - '0'];
		}
	}

	res = solution(v);
	for (int i = 0; i < res.size(); ++i) {
		for (int j = 0; j < res[i].size(); ++i) {
			cout << res[i][j] << " ";
		}
		cout << endl;
	}

	return 0;

}
