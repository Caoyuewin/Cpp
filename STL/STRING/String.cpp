#include <iostream>
#include <string.h>
#include <algorithm>
#include <assert.h>

using namespace std;

namespace mystring{
  class string{
    typedef char* iterator;
    public:
      //construct
      //构造函数
      string(const char* str = "")
        :_capacity(strlen(str))
        ,_size(strlen(str))
      {
        if(NULL == str){
          _str = "";
        } 
        _str = new char[strlen(str) + 1];
        strcpy(_str,str);
      }
      //拷贝构造函数
      string(const string& str) 
        : _str(NULL)//一些编译器会将_str初始化为随机值，释放资源时会导致程序崩溃,所以手动初始化为空
      {
        string tmp(str._str);
        swap(_str, tmp._str);
      }
      //operator=
      string& operator=(const string& str){
        if(this != &str){
          //先释放，后申请，如果申请失败会导致资源丢失
          /*delete _str;
          _str = new char[strlen(str._str) + 1];
          strcpy(_str, str._str);
          */
          //先申请，后释放，申请失败捕获一个异常，不会造成资源的丢失
          char* pStr = new char[strlen(str._str) + 1];
          strcpy(pStr, str._str);
          delete _str;
          _str = pStr;
        }
        return *this;
      }
      //析构函数
      ~string(){
        if(_str){
          delete[] _str;
        }
      }
      //iterators
      iterator begin() {
        return _str;
      }
      iterator end() {
        return _str + size();
      }
      iterator rbegin() {
        return end();
      }
      iterator rend() {
        return begin();
      }
      //capacity
      size_t size()const {
        return strlen(_str);
      }
      //resize
      void resize(size_t size) {
        if(size > _capacity) {
          char* tmp = new char[size];
          strcpy(tmp, _str);
          _str = tmp;
          delete[] tmp;
          _capacity = size;
        }
      }

      //elements access
      //operator[]
      char& operator[](size_t index) {
        assert(index < size());
        return _str[index];
      }
      const char& operator[](size_t index)const{
        assert(index < size());
        return _str[index];
      }
      //modifiers
      //+=
      //string operations
      const char* c_str()const{
        return _str;
      }
      friend ostream& operator<<(ostream& _cout, const string str){
        _cout << str;
        return _cout;
      }
      friend istream& operator>>(istream& _cin, string str){
        _cin >> str;
        return _cin;
      }
    private:
      char* _str;
      size_t _capacity;
      size_t _size;
  };
}



int main() {
  string s1("abcdef");
  string s2(s1);
  cout << s1 << endl;
  cout << s2 << endl;
  return 0;
}
