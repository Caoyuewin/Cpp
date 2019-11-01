#pragma once

#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

template<typename T>
class SharePtr
{
public:
	SharePtr(T* ptr = nullptr)
		: _pRefCount(new int(1))
		, _ptr(ptr)
		, _pMutex(new mutex)
	{}

	~SharePtr() {
		Realease();
	}

	T& operator*() {
		return *this;
	}

	T* operator->() {
		return _ptr;
	}

	SharePtr(SharePtr<T> const& sp)
		: _ptr(sp._ptr)
		, _pRefCount(sp._pRefCount)
		, _pMutex(sp._pMutex)
	{
		AddRefCount();
	}

	SharePtr<T>& operator=(SharePtr<T> const& sp) {
		if (_ptr != sp._ptr) {
			Realease();

			_ptr = sp._ptr;
			_pRefCount = sp._pRefCount;
			_pMutex = sp._pMutex;

			AddRefCount();
		}
		return *this;
	}

	void AddRefCount() {
		_pMutex->lock();
		++(*_pRefCount);
		_pMutex->unlock();
	}

private:
	void Realease() {
		bool deleteflag = false;

		_pMutex->lock();
		if (--(*_pRefCount) == 0) {
			delete _ptr;
			delete _pRefCount;
			deleteflag = true;
		}
		_pMutex->unlock();

		if (deleteflag == true) {
			delete _pMutex;
		}
	}
private:
	int *_pRefCount;
	T* _ptr;
	mutex *_pMutex;
};