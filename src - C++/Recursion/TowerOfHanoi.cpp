#include <iostream>

using namespace std;

void towers(int, char, char, char);

void towers(int num, char frompeg, char topeg, char auxpeg) {
    if (num == 1) {
        cout << "\n Move disk 1 from peg " << frompeg << " to peg " << topeg << endl;
        return;
    }
    towers(num - 1, frompeg, auxpeg, topeg);
    cout << "\n Move disk " << num << " from peg " << frompeg << " to peg " << topeg << endl;
    towers(num - 1, auxpeg, topeg, frompeg);
}

int main() {
    int num;
    cout << "Enter the number of disks : ";
    cin >> num;
    cout << "The sequence of moves involved in the Tower of Hanoi are :\n"<<endl;
    towers(num, 'A', 'C', 'B');
    return 0;
}