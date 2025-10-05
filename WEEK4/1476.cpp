#include <iostream>
using namespace std;

void Input();
void CalculateYear(int earth, int sun, int moon);

int main() {
	Input();
	return 0;
}

void Input() {
	int earth, sun, moon;
	cin >> earth >> sun >> moon;
	CalculateYear(earth, sun, moon);
}

void CalculateYear(int earth, int sun, int moon) {
	int e = 1, s = 1, m = 1;
	for (int year = 1; ; year++) {
		if (e % 15 == earth % 15 &&
			s % 28 == sun % 28 &&
			m % 19 == moon % 19) {
			cout << year;
			break;
		}
		e++, s++, m++;
	}
}