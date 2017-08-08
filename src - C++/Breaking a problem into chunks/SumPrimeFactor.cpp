#include <iostream>
#include <math.h>

using namespace std;

int sum = 0;

int PrimeFactors(int num) {
	while (num % 2 == 0) {
		sum += 2;
		num /= 2;
	}
	for (int i = 3; i < sqrt(num); i += 2) {
		while (num % i == 0) {
			sum += i;
			num /= i;
		}
	}
	return sum;
}	

int main() {
	int value;
	cout << "Enter a number <0-1000>: \n";
	cin >> value;
	cout << "Sum of prime factors: " << PrimeFactors(value);
}