#ifndef COMPARATOR_H
#define COMPARATOR_H
#include <iostream>
#include <string>

class Comparator {
	public:
		virtual ~Comparator();
		virtual int compare(const std::string& lhs, const std::string& rhs) = 0;
};

#endif COMPARATOR_H // COMPARATOR_H