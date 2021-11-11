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
	int a, b, c;
	cin >> a >> b >> c;
	cout << swap(a, b, c) << " ";
	cout << a << " ";
	cout << b << " ";
	cout << c;
	cin.get();
	return 0;
}