////#include <iostream>
////#include <vector>
////#include <numeric>
////#include <limits>
////#include <string>
////
////using namespace std;
////
////
/////*请完成下面这个函数，实现题目要求的功能
////当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
////******************************开始写代码******************************/
////bool CheckBlackList(string userIP, string blackIP) {
////	if (!blackIP.find('/')) {
////		if (userIP == blackIP)
////			return true;
////		return false;
////	}
////	
////	//黑名单以子网形式给出
////	int pos = blackIP.find('/');
////	string subnetlen = blackIP.substr(pos + 1, blackIP.size() - 1);
////	int subnet = atoi(subnetlen.c_str());
////	int count = 4;
////	string buserIP, bblackIP;
////	
////	for (int i = 0; i < subnet; ++i) {
////
////	}
////	return true;
////}
/////******************************结束写代码******************************/
////
////
////int main() {
////	bool res;
////
////	string _userIP;
////	getline(cin, _userIP);
////	string _blackIP;
////	getline(cin, _blackIP);
////
////	res = CheckBlackList(_userIP, _blackIP);
////	cout << res << endl;
////
////	return 0;
////
////}
//
//
//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <limits>
//
//using namespace std;
//
//
///*请完成下面这个函数，实现题目要求的功能
//当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
//******************************开始写代码******************************/
//bool BestMatch(vector < int > LimitArray, vector < vector < int > > DegMatrix) {
//	
//
//}
///******************************结束写代码******************************/
//
//
//int main() {
//	int res;
//
//	int _LimitArray_size = 0;
//	int _DegMatrix_rows = 0;
//	int _DegMatrix_cols = 0;
//	cin >> _DegMatrix_rows >> _DegMatrix_cols;
//
//	_LimitArray_size = _DegMatrix_cols;
//
//	vector<int> _LimitArray;
//	int _LimitArray_item;
//	for (int _LimitArray_i = 0; _LimitArray_i < _LimitArray_size; _LimitArray_i++) {
//		cin >> _LimitArray_item;
//		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//		_LimitArray.push_back(_LimitArray_item);
//	}
//
//	vector< vector < int > > _DegMatrix(_DegMatrix_rows);
//	for (int _DegMatrix_i = 0; _DegMatrix_i < _DegMatrix_rows; _DegMatrix_i++) {
//		for (int _DegMatrix_j = 0; _DegMatrix_j < _DegMatrix_cols; _DegMatrix_j++) {
//			int _DegMatrix_tmp;
//			cin >> _DegMatrix_tmp;
//			_DegMatrix[_DegMatrix_i].push_back(_DegMatrix_tmp);
//		}
//	}
//
//	res = BestMatch(_LimitArray, _DegMatrix);
//	cout << res << endl;
//
//	return 0;
//
//}
