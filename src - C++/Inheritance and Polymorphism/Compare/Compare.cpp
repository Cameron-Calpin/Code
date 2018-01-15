#include "Compare.h"
#include <iostream>
#include <vector>
#include <iterator>
#include <string>

std::string HighScoreElement::getName() const {
	return _name;
}

int HighScoreElement::getScore() const {
	return _score;
}

int HighScoreElement::compare(const Comparable& other) const {
	auto&& x = dynamic_cast<const HighScoreElement&>(other);
	if (this->getScore() < x.getScore())
		return -1;
	else if (this->getScore() > x.getScore())
		return 1;
	if (this->getName() < x.getName())
		return -1;
	else if (this->getName() > x.getName())
		return 1;
	return 0;
}

void sortComparableVector(std::vector<Comparable*>& v) {
	for (int i = 0, e = v.size() - 1; i < e; i++) {
		int sorted_i = i;
		for (int j = i + 1; j < e + 1; j++) {
			if (v[sorted_i]->compare(*v[j]) < 0) {
				sorted_i = j;
			}
		}
		if (sorted_i != i) {
			Comparable *replacement = v[sorted_i];
			v[sorted_i] = v[i];
			v[i] = replacement;
		}
	}
}