#pragma once

#include <iostream>

template <typename T>
struct BSTNode
{
	BSTNode(const T& data = T())
		: _data(data)
		, _pLeft(nullptr)
		, _pRight(nullptr)
	{}
	T _data;
	BSTNode* _pLeft;
	BSTNode* _pRight;
};


template <typename T>
class BinarySearchTree
{
public:
	typedef BSTNode<T> Node;
	BinarySearchTree()
		: _pRoot(nullptr)
	{}
	~BinarySearchTree() {}

	static void Clear(Node* root) {
		if (root == nullptr)
			return;
		Clear(root->_pLeft);
		Clear(root->_pRight);
		delete root;
		root = nullptr;
	}

	//����Ԫ��
	Node* Find(const T& data) {
		Node* pCur = _pRoot;
		while (_pRoot->_data != data) {
			if (pCur == nullptr)
				return nullptr;
			else if (pCur->_data < data)
				pCur = pCur->_pRight;
			else
				pCur = pCur->_pLeft;
		}
		return pCur;
	}

	bool Insert(const T& data) {
		//����
		if (_pRoot == nullptr) {
			_pRoot = new Node(data);
			return true;
		}

		//�ҵ������λ��
		Node *pCur = _pRoot;
		Node *pParent = nullptr;

		while (pCur){
			pParent = pCur;
			if (pCur->_data < data) {
				pCur = pCur->_pRight;
			}
			else if (pCur->_data > data) {
				pCur = pCur->_pLeft;
			}
			else
				return false;
		}
		//�����µĽڵ�
		pCur = new Node(data);
		if (pParent->_data > data)
			pParent->_pLeft = pCur;
		else
			pParent->_pRight = pCur;
		return true;

	}

	bool Erase(const T& data) {
		//Ϊ������ֱ�ӷ���
		if (_pRoot == nullptr)
			return false;
		//�ҵ���ɾ���ڵ�
		Node* pCur = _pRoot;
		Node* pParent = pCur;
		while (pCur->_data != data) {
			if (pCur->_data > data) {
				pParent = pCur;
				pCur = pCur->_pLeft;
			}
			else if (pCur->_data < data) {
				pParent = pCur;
				pCur = pCur->_pRight;
			}
			else //Ϊ�գ������ڸ�Ԫ��
				return false;
		}
		//��������������Ϊ��ʱ��ֱ��ɾ��
		if (pCur->_pRight == nullptr) {
			pParent->_data > pCur->_data ? pParent->_pLeft = pCur->_pLeft : pParent->_pRight = pCur->_pLeft;
			delete  pCur;
		}
		if (pCur->_pLeft == nullptr) {
			pParent->_data > pCur->_data ? pParent->_pLeft = pCur->_pRight : pParent->_pRight = pCur->_pRight;
			delete pCur;
		}
		//������������Ϊ��,�ҵ���ɾ���ڵ�����ɾ���ڵ�,�����������������ڵ㣬�����������Ҳ�Ľڵ�
		Node *pSave = pCur;
		pCur = pCur->_pLeft;
		while (pCur->_pRight) {
			pCur = pCur->_pRight;
		}
		pSave->_data = pCur->_data;
		delete pCur;
		pCur = nullptr;
		return true;
	}
private:
	Node* _pRoot;
};

