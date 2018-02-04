#include "Comparator.h"
#include <string>

class SortedComparator : public Comparator {
	public:
		SortedComparator(const std::string& lhs, const std::string& rhs);
		virtual ~SortedComparator();
		std::string getLHS();
		std::string getRHS(); 
		void sort();
		int compare(const std::string& lhs, const std::string& rhs)
	private:
		std::string *_lhs;
		std::string *_rhs;
};

SortedComparator::SortedComparator(const std::string& lhs, const std::string& rhs)
	: _lhs(lhs), _rhs(rhs)
{}

std::string SortedComparator::getLHS() {
	return _lhs;
}

std::string SortedComparator::getRHS() {
	return _rhs;
}

void SortedComparator::sort() {
	
}

int Comparator::compare(const std::string& lhs, const std::string& rhs) {
	if (lhs.compare(rhs) < 0) {
		return -1;
	}
	else if (lhs.compare(rhs) > 0) {
		return 1;
	}
	else {
		return 0;
	}
}