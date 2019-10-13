#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//template <class T>
//class SeqList{
//public:
//	SeqList(size_t size)
//		: _size(0), _capacity(size)
//	{
//		_array = new T[size];
//	}
//	~SeqList() {
//		delete[] _array;
//	}
//	//ͷ��
//	void HeadInsert(T data) {
//		CheckCapacity();
//		for (int i = _size; i > 0; --i) {
//			_array[i] = _array[i-1];
//		}
//		_array[0] = data;
//		++_size;
//	}
//	//ͷɾ
//	void HeadErase() {
//		for (int i = 0; i < _size; ++i) {
//			_array[i] = _array[i + 1];
//		}
//		--_size;
//	}
//	//�м����
//	void Insert(T data, int pos) {
//		CheckCapacity();
//		for (int i = _size; i > pos; --i) {
//			_array[i] = _array[i-1];
//		}
//		_array[pos] = data;
//		++_size;
//	}
//	//�м�ɾ��
//	void Erase(int pos) {
//		for (int i = pos; i < _size; ++i) {
//			_array[i] = _array[i + 1];
//		}
//		--_size;
//	}
//	//β��
//	void TailInsert(T data) {
//		CheckCapacity();
//		_array[_size + 1] = data;
//		++_size;
//	}
//	//βɾ
//	void TailErase() {
//		--_size;
//	}
//	//���ݺ���
//	void CheckCapacity(){
//		if (_capacity == _size) {
//			//����Ϊ����
//			_capacity *= 2;
//			//���ٿռ�
//			T* tmp = new T[_capacity];
//			//����Ԫ��
//			for (int i = 0; i < _size; ++i) {
//				tmp[i] = _array[i];
//			}
//			swap(tmp, _array);
//			//�ͷ���Դ
//			delete[] tmp;
//		}
//	}
//	//��ӡ����
//	void Print() {
//		for (int i = 0; i < _size; ++i) {
//			cout << _array[i] << " ";
//		}
//		cout << endl;
//	}
//private:
//	int _size;
//	int _capacity;
//	T* _array;
//};
//
//
//void TestFunc() {
//	SeqList<int> list(3);
//	list.HeadInsert(5);
//	list.HeadInsert(4);
//	list.HeadInsert(3);
//	list.Insert(10, 2);
//	list.TailInsert(6);
//	list.Print();
//}
//
//
//int main() {
//	TestFunc();
//
//	return 0;
//}

class Sort{
public:
	Sort(std::vector<int>& num) : _num(num) {}
	//ֱ�Ӳ�������
	void StraightInsert() {
		if (_num.size() <= 1)
			return;
		for (size_t i = 1; i < _num.size(); ++i) {
			for (size_t j = 0; j < i; ++j) {
				if (_num[i] < _num[j]) {
					int tmp = _num[i];
					_num.erase(_num.begin() + i);
					_num.insert(_num.begin() + j, tmp);
					break;
				}
			}
		}
	}
	//ϣ������
	void ShellSort() {
		if (!_num.size())
			return;
		int gap = _num.size();
		while (gap > 1) {
			gap = gap / 3 + 1;
			for (size_t i = gap; i < _num.size(); i += gap) {
				for (int j = i - gap; j >= 0; j -= gap) {
					if (_num[i] < _num[j]) {
						Swap(_num[i], _num[j]);
					}
				}
			}
			//gap = 1, ����ֱ�Ӳ�������
			//StraightInsert();
		}
	}
	//ѡ������
	void SelectSort() {
		//int Minimal = 0;
		for (size_t i = 0; i < _num.size(); ++i) {
			for (size_t j = i + 1; j < _num.size(); ++j) {
				if (_num[j] < _num[i])  {
					Swap(_num[i], _num[j]);
				}
			}
		}
	}
	//��������
	//ð������
	void BubbleSort() {
		for (size_t i = _num.size(); i > 0; --i) {
			for (size_t j = 0; j < i; ++j) {
				if (_num[j] < _num[j - 1]) {
					Swap(_num[j], _num[j - 1]);
				}
			}
		}
	}
	//��ӡ����
	void Print() {
		for (size_t i = 0; i < _num.size(); ++i) {
			std::cout << _num[i] << std::endl;
		}
	}
private:
	void Swap(int& ra, int& rb) {
		int tmp = ra;
		ra = rb;
		rb = tmp;
	}
private:
	std::vector<int> _num;
};


int main() {
	vector<int> num{ 9, 5, 6, 4, 6, 3, 2, 1,45,6,45,64,6,4,3,5254,88,67 };
	Sort sort(num);
	//sort.StraightInsert();
	sort.ShellSort();
	sort.Print();
	return 0;
}




  