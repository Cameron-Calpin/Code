#ifndef COMPARABLE_H
#define COMPARABLE_H

#include <vector>
#include <string>

class Comparable {
public:
	virtual ~Comparable() = default;
	virtual int compare(const Comparable& other) const = 0;
// protected:
// 	Comparable() = default;
// 	Comparable(const Comparable&) = default;
// 	Comparable& operator=(const Comparable&) = default;
};

class HighScoreElement : public Comparable {
public:
	HighScoreElement(std::string name, int score)
		: _name(name), _score(score) {}
	virtual int compare(const Comparable& other) const;
	std::string getName() const;
	int getScore() const;
private:
	std::string _name;
	int _score;
};

void sortComparableVector(std::vector<Comparable*>& v);

#endif //COMPARABLE_H