#include <iostream>
using namespace std;

namespace myvector{
  template<class T>
    class vector{
      public:
        //construct
        vector()
          :_start(NULL)
          ,_finish(NULL)
          ,_endOfstorage(NULL)
      {
        
      }
        vector(size_t n, const T& value){
          _start = new T[n];
          size_t i = 0;
          for(; i < n; ++i) {
            _start[i] = value;

          }
          _finish = _endOfstorage = _start + n;
        }

        vector (T* first, T* last){
          size_t n = last - first;
          _start = new T[n];
          _finish = _start;
          while(first != last) {
            *_finish++ = *first++;
          }
          _endOfstorage = _finish;
        }
        
        vector(const vector<T>& v){
          
        }
        //iterator
        

        //capacity
        size_t size(){
          return _finish - _start;
        }
        void resize(size_t newsize){
          if(newsize > size()){

          }
        }
        size_t capacity(){
          return _endOfstorage - _start;
        }
        bool empty(){
          if(size())
            return false;
          return true;
        }
        //assess
        T& operator[](size_t index){
          assert(index < size());
          return _start[index];
        }
        const T& operator[](size_t index)const{
          assert(index < size());
          return _start[index];
        }
        T& front(){
          return *_start;
        }
        const T& front()const{
          return *_start;
        }
        //modifiers
      protected:
        T* _start;
        T* _finish;
        T* _endOfstorage;
    };




}
