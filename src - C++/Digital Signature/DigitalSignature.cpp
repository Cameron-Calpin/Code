#include <iostream>
#include <math.h>

using namespace std;

int func(float d) {
	int c = (int) d;
	if (d - c == 0.00)
		return -1;
	return 0;
}

int main() {
	int p, e, q, plain_text, hash_fun, n, phi, i, k, t;
	float d, msg_dig, digital_sign, hash;
	long v;

	cout << "Enter two prime nos: ";
	cin >> p >> q;

	phi = (p - 1)*(q - 1);
	n = p * q;
	for (i = 2; i < 30; i++) {
		if (phi % i != 0) {
			e = i;
			break;
		}
	}

	for (i = 1; i < 30; i++) {
		d = (1 + (i * phi)) / e;
		if (func(d) == 1) {
			t = e * d;
			if (phi % t == 1)
				break;
		}
	}

	cout << "Message to be encrypted: ";
	cin >> plain_text;
	cout << "Hash Function: ";
	cin >> hash_fun;

	msg_dig = plain_text^hash_fun;
	digital_sign = fmod(pow(msg_dig, d), n);
	hash = fmod(pow(digital_sign, e), n);

	if (digital_sign == hash)
		cout << "Digital Signature Accepted.";

}