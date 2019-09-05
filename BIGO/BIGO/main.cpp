#include <iostream>

using namespace std;

//int MaxSubArray(int *A, int n) {
//	//存储最大子数组的和
//	int maxsum = A[0];
//	//前一项状态
//	int F1 = A[0];
//	//后一项状态
//	int Fn;
//	for (int i = 1; i < n; ++i) {
//		Fn = (F1 > 0 ? F1 + A[i] : A[i]);
//		F1 = Fn;
//		if (Fn > maxsum) {
//			maxsum = Fn;
//		}
//	}
//	return maxsum;
//}

//int NumberAppearMoreThanHalf(int *array,int n){
//	int flag;
//	for (int i = 0; i <n; ++i) {
//		flag = 0;
//		for (int j = 0; j < n; ++j) {
//			
//			if (array[i] == array[j]) {
//				flag++;
//			}
//			else {
//				flag--;
//			}
//		}
//		if (flag > 0)
//			return array[i];
//	}
//}
void GetMinMaxTime(int length, int ant_cnt, int *max, int *min) {
	*max = (int)0x80000000;
	*min = (int)0x7fffffff;
	for (int i = 0; i < ant_cnt; ++i) {
		if()
	}
}

int main() {
	int A[] = { 5,2,1,3,1,4,1,5,1,6,1,1,1,1,1,1 };
	int ret = GetMinMaxTime(A,sizeof(A)/sizeof(A[0]));
	cout << ret << endl;
	return 0;
}