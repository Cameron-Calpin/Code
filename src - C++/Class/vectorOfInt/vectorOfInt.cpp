#include "vectorOfInt.h"
#include <iostream>

vectorOfInt::vectorOfInt() {
	_array = new int[32];
	for (int i = 0; i < 32; i++) {
		_array[i] = 0;
	}
	_length = 32;
	_next_index = 0;
}

vectorOfInt::vectorOfInt(int sz) {
	_array = new int[sz];
	for (int i = 0; i < sz; i++) {
		_array[i] = 0;
	}
	_length = sz;
	_next_index = 0;
}

vectorOfInt::~vectorOfInt() {
	delete[] _array;
}

int vectorOfInt::getValue(int index) {
	return _array[index];
}

int vectorOfInt::getSize() {
	return _length;
}

void vectorOfInt::setValue(int index, int val) {
	_array[index] = val;
}

void vectorOfInt::pushBack(int val) {
	if (_next_index + 1 == _length) {
		_length += 10;
		int *p_new_values = new int[_length];
		for (int i = 0; i < _next_index; i++) {
			p_new_values[i] = _array[i];
		}
		for (int j = _next_index; j < _length; j++) {
			p_new_values[j] = 0;
		}
		delete[] _array;
		_array = p_new_values;
	}
	setValue(_next_index++, val);
}

void vectorOfInt::pushFront(int val) {
	if (_next_index + 1 == _length) {
		_length += 10;
		int *p_new_values = new int[_length];
		for (int i = 0; i <= _next_index; i++) {
			p_new_values[i] = _array[i];
		}
		for (int j = _next_index; j < _length; j++) {
			p_new_values[j] = 0;
		}
		delete[] _array;
		_array = p_new_values;
	}
	else {
		int *p_new_values = new int[_length];
		for (int i = 0; i < _length; i++) {
			p_new_values[i + 1] = _array[i];
		}
		delete[] _array;
		_array = p_new_values;
	}
	setValue(0, val);
	_next_index++;
}