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

	//查找元素
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
		//空树
		if (_pRoot == nullptr) {
			_pRoot = new Node(data);
			return true;
		}

		//找到插入的位置
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
		//构建新的节点
		pCur = new Node(data);
		if (pParent->_data > data)
			pParent->_pLeft = pCur;
		else
			pParent->_pRight = pCur;
		return true;

	}

	bool Erase(const T& data) {
		//为空树，直接返回
		if (_pRoot == nullptr)
			return false;
		//找到待删除节点
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
			else //为空，不存在该元素
				return false;
		}
		//左子树或右子树为空时，直接删除
		if (pCur->_pRight == nullptr) {
			pParent->_data > pCur->_data ? pParent->_pLeft = pCur->_pLeft : pParent->_pRight = pCur->_pLeft;
			delete  pCur;
		}
		if (pCur->_pLeft == nullptr) {
			pParent->_data > pCur->_data ? pParent->_pLeft = pCur->_pRight : pParent->_pRight = pCur->_pRight;
			delete pCur;
		}
		//左右子树都不为空,找到待删除节点的替代删除节点,这里找左子树的最大节点，即左子树最右侧的节点
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

