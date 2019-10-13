/*
 * 给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。
 *
 * 如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
 *
 * 您可以假设除了数字 0 之外，这两个数都不会以 0 开头。
 *
 * 示例：
 *
 * 输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
 * 输出：7 -> 0 -> 8
 * 原因：342 + 465 = 807
 *
 * 来源：力扣（LeetCode）
 * 链接：https://leetcode-cn.com/problems/add-two-numbers
 * 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处.
 */
#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}

};

/*! \class
 *  \brief Brief class description
 *
 *  Detailed description
 */
class solution
{
public:
	ListNode* AddTwoNumbers(ListNode* l1, ListNode* l2) {
		int carry = 0;//进位位 
		int sum = 0;
		ListNode *newhead = new ListNode(-1);
		ListNode *cur = newhead;
		while (l1 || l2) {
			/*int sum = l1->val + l2->val + carry;
			carry = sum / 10;
			if (sum >= 10)
				sum %= 10;*/
			sum = 0;
			if (l1) {
				sum += l1->val;
				l1 = l1->next;
			}
			if (l2) {
				sum += l2->val;
				l2 = l2->next;
			}
			if (carry) {
				++sum;
			}
			carry = sum / 10;
			ListNode *node = new ListNode(sum % 10);
			cur->next = node;

		}
		if (carry) {
			cur->next = new ListNode(1);
		}
		cur = newhead;
		newhead = newhead->next;
		delete cur;
		return newhead;


	}
};

ListNode* CreateList1() {
	ListNode *A = new ListNode(2);
	ListNode *B = new ListNode(4);
	ListNode *C = new ListNode(3);
	ListNode *D = new ListNode(9);
	ListNode *E = new ListNode(6);


	
	A->next = B;
	B->next = C;
	C->next = D;
	D->next = E;


	return A;
}

ListNode* CreateList2() {
	ListNode *A = new ListNode(5);
	ListNode *B = new ListNode(6);
	ListNode *C = new ListNode(4);


	A->next = B;
	B->next = C;

	return A;
}


int main() {
	ListNode *l1 = CreateList1();
	ListNode *l2 = CreateList2();
	solution s;
	ListNode *list = s.AddTwoNumbers(l1, l2);
	while (list) {
		cout << list->val;
		list = list->next;
	}
	cout << endl;
	return 0;
}
