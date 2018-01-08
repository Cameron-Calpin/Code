#ifndef VECTOR_OF_INT_H
#define VECTOR_OF_INT_H

#include <string>

class vectorOfInt {
	private:
		int *_array;
		int _length;
		int _next_index;

	public:
		// Constructors
		vectorOfInt();
		vectorOfInt(int sz);

		// Destructors
		~vectorOfInt();

		// Getter Method
		int getValue(int index);

		// Setter Method
		void setValue(int index, int val);

		void pushBack(int val);
		void pushFront(int val);

		vectorOfInt& operator=(const vectorOfInt &other);
};

#endif	// VECTOR_OF_INT_H