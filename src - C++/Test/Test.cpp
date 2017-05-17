/*
 * Test.cpp
 *
 *  Created on: May 7, 2017
 *      Author: Cameron
 */

#include <iostream>

using namespace std;

void getDigit(int x)
{
    if(x >= 10) {
       getDigit(x / 10);
    }
    int digit = x % 10;

    cout << digit << '\n';
}

int main() {
	int num = 123456;

	getDigit(num);
}


