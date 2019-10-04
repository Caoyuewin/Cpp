#include <iostream>


using namespace std;

//int partition(int arr[], int low, int high) {
//	int key = arr[low];
//	while (low < high) {
//		while (low < high && arr[high] > key) {
//			--high;
//		}
//
//		if (low >= high) {
//			break;
//		}
//		else {
//			arr[low] = arr[high];
//		}
//		
//		while (low < high && arr[low] < key) {
//			++low;
//		}
//
//		if (low >= high) {
//			break;
//		}
//		else {
//			arr[high] = arr[low];
//		}
//	}
//	arr[low] = key;
//	return low;
//}
//
//void QuickSort(int arr[], int low, int high) {
//	int mid;
//	if (low < high) {
//		mid = partition(arr, low, high);
//
//		QuickSort(arr, low, mid - 1);
//		QuickSort(arr, mid + 1, high);
//	}
//}

//void NoRecursionQuickSort(int arr[], int low, int high){
//	int mid = partition(arr, low, high);
//	while()
//}

void MergeSort(int arr[], int low, int high, ) {
	int mid = 0;
	if()
}

int main() {
	int arr[10] = { 5,2,7,8,3,9,1,0,4,6 };
	int size = sizeof(arr) / sizeof(arr[0] - 1);
	/*for (int i = 0; i < size; ++i) {
		cin >> arr[i];
	}*/
	//QuickSort(arr, 0, size - 1);

	return 0;
}