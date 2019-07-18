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
      string(const char* str = ""){
        if(nullptr == str){
          _str = "";
        } 
        _str = new char[strlen(str) + 1];
        strcpy(_str,str);
      }
      string(const string& str) 
        : _str(nullptr)
      {
        string tmp(str._str);
        std::swap(_str, tmp._str);
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
      void resize(size_t size) {
        if(size < size()) {

        }
      }

      //elements access
      char& operator[](size_t index) {
        assert(index < size());
        return _str[index];
      }
      const char& operator[](size_t index)const{
        assert(index < size());
        return _str[index];
      }
      //string operations
      const char* c_str()const{
        return _str;
      }
    private:
      friend ostream& operator<<(ostream& _cout, const mystring::string str);
    private:
      char* _str;
      size_t _capacity;
      size_t _size;
  };
}

#if 0
ostream& mystring::operator<<(ostream& _cout, const mystring::string& str){
  cout << str.c_str();
  return _cout;
}
#endif  



int main() {
  mystring::string s1("abcdefg");
  mystring::string s2(s1);
  int i = 0;
  for(; i < s1.size(); i++){
    cout << s1[i] << " ";
  }
  cout << endl;
  return 0;
}
