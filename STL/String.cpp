#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

namespace mystring{
  class string{
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
      //string operations
      const char* c_str()const{
        return _str;
      }
    private:
      friend ostream& operator<<(ostream& _cout, const mystring::string str);
    private:
      char* _str;
  };
}

ostream& mystring::operator<<(ostream& _cout, const mystring::string& str){
  cout << str.c_str();
  return _cout;
}


int main() {
  mystring::string s1("abcdefg");
  mystring::string s2(s1);
  cout << s1 << s2 << endl;
  return 0;
}
