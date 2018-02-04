#include "Comparator.h"
#include <string>

class Comparison : public Comparator {
	public:
		Comparison(const std::string& lhs, const std::string& rhs);
		virtual ~Comparison();
	private:
		std::string *_lhs;
		std::string *_rhs;
};

Comparison::Comparison(const std::string& lhs, const std::string& rhs)
	: _lhs(lhs), _rhs(rhs)
{}
