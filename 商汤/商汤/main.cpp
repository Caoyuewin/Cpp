//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//bool IsSameKind(string A, string B) {
//	if (A.size() != B.size()) {
//		return false;
//	}
//
//	vector<char> a(256);
//	vector<char> b(256);
//
//	for (int i = 0; i < A.size(); ++i) {
//		++a[A[i]];
//		++b[B[i]];
//	}
//
//	for (int i = 0; i < 256; ++i) {
//		if (a[i] != b[i]) {
//			return false;
//		}
//
//	}
//	return true;
//}
//
//int main() {
//	int N;
//	while (cin >> N) {
//		vector<string> vstr(N);
//		for (int i = 0; i < N; ++i) {
//			cin >> vstr[i];
//		}
//
//		vector<string> kind(1);
//		kind[0] = vstr[0];
//		for (int i = 1; i < N; ++i) {
//			if (IsSameKind(kind[kind.size() - 1], vstr[i])) {
//				continue;
//			}
//			kind.push_back(vstr[i]);
//		}
//
//		cout << kind.size() << endl;
//	}
//	return 0;
//}

//#include <iostream>
//
//
//  struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode(int x) : val(x), next(NULL) {}
//  };
// 
//class Solution {
//public:
//	ListNode* removeNthFromEnd(ListNode* head, int n) {
//		ListNode* dummyHead = new ListNode(0);
//		dummyHead->next = head;
//		ListNode* first = dummyHead;
//		ListNode* second = dummyHead;
//
//		for (int i = 0; i < n + 1; ++i) {
//			first = first->next;
//		}
//
//		while (first != nullptr) {
//			first = first->next;
//			second = second->next;
//		}
//
//		ListNode* delnode = second->next;
//		second->next = delnode->next;
//		delete delnode;
//		ListNode* rethead = dummyHead->next;
//		delete dummyHead;
//		return rethead;
//	}
//};
//
//int main() {
//	ListNode* A = new ListNode(1);
//
//
//	Solution s;
//	s.removeNthFromEnd(A, 1);
//	return 0;
//}

//#include <iostream>
//#include <stack>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//	bool isValid(string s) {
//		stack<char> st;
//		
//		for (int i = 0; i < s.size(); ++i) {
//			if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
//				st.push(s[i]);
//				continue;
//			}
//			else {
//				if (st.empty())
//					return false;
//				if (s[i] == ')' && st.top() == '(') {
//					st.pop();
//
//				}
//				else if (s[i] == ']' && st.top() == '[') {
//					st.pop();
//				}
//				else if (s[i] == '}' && st.top() == '{') {
//					st.pop();
//				}
//				else {
//					return false;
//				}
//			}
//		}
//		return true;
//	}
//};
//
//int main() {
//
//	string str;
//	cin >> str;
//	Solution s;
//	s.isValid(str);
//	return 0;
//}

#include <iostream>


using namespace std;

int main() {
	
	return 0;
}