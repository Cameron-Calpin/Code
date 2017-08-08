#include <iostream>
#include <string>

using namespace std;

const char *numdays[] = {"-",
	"First", "Second", "Third",
	"Fourth", "Fifth", "Sixth",
	"Seventh", "Eighth", "Ninth",
	"Tenth", "Eleventh", "Twelfth"
};

int main() {
	for (int day = 1; day <= 12; ++day) {
		cout << "On the " << numdays[day]
		<< " day of Christmas, my true love gave to me:\n";

		switch (day) {
			case 12:
				cout << "Twelve Drummers Drumming\n";
			case 11:
				cout << "Eleven Pipers Piping\n";
			case 10:
				cout << "Ten Lords a-Leaping\n";
			case 9:
				cout << "Nine Ladies Dancing\n";
			case 8:
				cout << "Eight Maids a-Milking\n";
			case 7:
				cout << "Seven Swans a-Swimming\n";
			case 6:
				cout << "Six Geese a-Laying\n";
			case 5:
				cout << "Five Gold Rings\n";
			case 4:
				cout << "Four Calling Birds\n";
			case 3:
				cout << "Three French Hens\n";
			case 2:
				cout << "Two Turtle Doves, and\n";
			case 1:
				cout << "A Partridge in a Pear Tree\n\n";
		}
	}
	return 0;
}

