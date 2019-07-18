#include<iostream>

namespace mylist{
  template<class T>
    struct ListNode{
      private:
        T* _pre;
        T* _next;
        T* _val;
      public:
        ListNode(const T& val = T())
          :_pre(NULL)
           ,_next(NULL)
           ,_val(val)
      {}
    };
  template<class T>
    class list{
      typedef ListNode<T> Node;
      public:
      //构造
      list(){
        CreateHead();
      }
      list(size_t n, const T& val){
        size_t i = 0;
        for(; i < n; i++){
          Pushback();
        }
      }
      list(T* first, T* last){
        CreateHead();
        while(first != last) {
          Pushback(*first++);
        }
      }
      list(const list<T>& l){
        CreateHead();
        Node* pCur = l._pHead->_next;
        while(pCur != _pHead){
          Pushback(*pCur->_val);
        }
      }
      list<T>& operator=(const list<T>& L){
        CreateHead();
        Node* pCur = L._pHead->_next;
        while(pCur != _pHead){
          Pushback(*pCur->_val);
        }

      }
      ~list(){
        Node* pCur = _pHead->_next;
        while(pCur != _pHead){
          _pHead = pCur->_next;
          delete pCur;
          pCur = _pHead;
        }
      }
      //迭代器
      //容量
      size_t size()const{
        int count = 0;
        Node* pCur = _pHead->_next;
        while(pCur != _pHead){
          count++;
          pCur = pCur->_next;
        }
        return count;
      }
      bool empty()const {
        return _pHead = _pHead->_next;
      }
      void resize(size_t newsize) {
        size_t oldsize = size();
        if(oldsize > newsize) {
          size_t i = newsize;
          for(; i < oldsize; i++) {
            Popback();
          }
        }
        if(oldsize < newsize) {
          size_t i = oldsize;
          for(; i < newsize; i++) {
            Pushback();
          }
        }
      }
      //元素访问
      T& front() {
        return _pHead->_next->_val;
      }
      T& front()const {
        return _pHead->_next->_val;
      }
      T& back() {
        return _pHead->_pre->_val;
      }
      T& back()const {
        return _pHead->_pre->_val;
      }
      private:
      void CreateHead(){
        _pHead = new Node;
        _pHead->_next = _pHead;
        _pHead->_pre = _pHead;
      }
      private:
      Node* _pHead;
    };


}
