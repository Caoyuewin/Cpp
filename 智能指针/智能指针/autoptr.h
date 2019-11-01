#pragma once

#include <iostream>


template<typename T>
class AutoPtr {
public:
	AutoPtr(T* ptr = nullptr)
		: _ptr(ptr)
	{}

	~AutoPtr() {
		if (_ptr)
			delete _ptr;
	}
	 
	AutoPtr(AutoPtr<T>& ap)
		: _ptr(ap._ptr)
	{
		ap._ptr = nullptr;
	}

	AutoPtr<T>& operator=(AutoPtr<T>& ap) {
		if (this != &ap) {
			if (_ptr)
				delete _ptr;

			_ptr = ap._ptr;
			ap._ptr = nullptr;
		}
		return *this;
	}

	T& operator*() {
		return *this;
	}
	
	T* operator->() {
		return _ptr;
	}

private:
	T* _ptr;
};