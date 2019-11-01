#pragma once

#include <iostream>

template<typename T>
class UniquePtr {
public:
	UniquePtr(T* ptr = nullptr)
		: _ptr(ptr)
	{}

	~UniquePtr() {
		if (_ptr) {
			delete _ptr;
		}
	}

	T& operator*() {
		return *this;
	}

	T* operator->() {
		return _ptr;
	}

	UniquePtr(UniquePtr<T> const&) = delete;
	UniquePtr<T>& operator=(UniquePtr<T> const&) = delete;

private:
	T *_ptr;
};