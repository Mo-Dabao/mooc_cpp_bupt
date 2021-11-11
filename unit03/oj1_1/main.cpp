#include <iostream>

using std::cout;
using std::cin;

int swap(int& x, int& y, int& z) {
	int t = x;
	x = z;
	z = y;
	y = t;
	if (x > y && x > z) {
		return x;
	}
	else if (y > z) {
		return y;
	}
	else {
		return z;
	}
}

int main() {
	int a{ 1 }, b{ 2 }, c{ 3 };
	cout << swap(a, b, c) << " ";
	cout << a << " ";
	cout << b << " ";
	cout << c;
	cin.get();
	return 0;
}