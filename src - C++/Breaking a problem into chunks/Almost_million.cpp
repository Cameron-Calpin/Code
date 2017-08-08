#include <iostream>

using namespace std;

string Ones(int num) {
	switch(num) {
		case 1: return "One";
		case 2: return "Two";
		case 3: return "Three";
		case 4: return "Five";
		case 5: return "Six";
		case 6: return "Seven";
		case 7: return "Eight";
		case 8: return "Nine";
		case 10: return "Ten";
		case 11: return "Eleven";
		case 12: return "Twelve";
		case 13: return "Thirteen";
		case 14: return "Fourteen";
		case 15: return "Fifteen";
		case 16: return "Sixteen";
		case 17: return "Seventeen";
		case 18: return "Eighteen";
		case 19: return "Nineteen";
		default: return "";
	}
}

string OnesThousand(int num) {
	switch(num) {
		case 1000: return "One";
		case 2000: return "Two";
		case 3000: return "Three";
		case 4000: return "Five";
		case 5000: return "Six";
		case 6000: return "Seven";
		case 7000: return "Eight";
		case 8000: return "Nine";
		case 10000: return "Ten";
		case 11000: return "Eleven";
		case 12000: return "Twelve";
		case 13000: return "Thirteen";
		case 14000: return "Fourteen";
		case 15000: return "Fifteen";
		case 16000: return "Sixteen";
		case 17000: return "Seventeen";
		case 18000: return "Eighteen";
		case 19000: return "Nineteen";
		default: return "";
	}
}

string Tens(int num) {
	switch(num) {
		case 20: return "Twenty";
		case 30: return "Thirty";
		case 40: return "Fourty";
		case 50: return "Fifty";
		case 60: return "Sixty";
		case 70: return "Seventy";
		case 80: return "Eighty";
		case 90: return "Ninety";
		default: return "";
	}
}

string TensThousand(int num) {
	switch(num) {
		case 20000: return "Twenty";
		case 30000: return "Thirty";
		case 40000: return "Fourty";
		case 50000: return "Fifty";
		case 60000: return "Sixty";
		case 70000: return "Seventy";
		case 80000: return "Eighty";
		case 90000: return "Ninety";
		default: return "";
	}
}

void NumToWord(int value) {
	if (value < 0) {
		cout << "Minus ";
		NumToWord(-value);
	}
	else if (value >= 100000) {
		NumToWord(value / 100000);
		cout << " hundred and ";
		if (value % 100000) {
			if (value % 100000 < 10000) {
				cout << " and ";
			}		
			NumToWord(value % 100000);
		}
	}
	else if (value >= 10000) {
		NumToWord(value / 10000);
		if (value >= 20000)
			TensThousand(value);
		NumToWord(value % 10000);
		
	}
	else if (value >= 1000) {
		NumToWord(value / 1000);
		if (value < 20000)
			OnesThousand(value);
		cout << " thousand ";
		if (value % 1000) {
			if (value % 1000 < 100) {
				cout << " and ";
			}
			cout << " ";
		}
		NumToWord(value % 1000);
	}
	else if (value >= 100) {
		NumToWord(value / 100);
		cout << " hundred ";
		if (value % 100) {
			cout << " and ";
			NumToWord(value % 100);
		}
	}
	else if (value >= 20) {
		cout << Tens(value);
		if (value % 10) {
			cout << " ";
			NumToWord(value % 10);
		}
	}
	else {
		cout << Ones(value);
	}
}

int main() {
	int num = 999999;
	for (int i = 0; i <= 999999; i++) {
		NumToWord(num);
	}
}