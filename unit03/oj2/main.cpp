#include <iostream>
#include <limits>

using std::cout;
using std::cin;

char min(char c1, char c2) {
	if (c1 < c2) {
		return c1;
	}
	else {
		return c2;
	}
}

char min(char c1, char c2, char c3) {
	return min(min(c1, c2), c3);
}

int min(int i1, int i2) {
	if (i1 < i2) {
		return i1;
	}
	else {
		return i2;
	}
}

int min(int i1, int i2, int i3) {
	return min(min(i1, i2), i3);
}

int main() {
	char c11{ '[' }, c12{ 'N' }, c21{ 'G' }, c22{ '9' }, c23{ '*' };
	int i31{ -42 }, i32{ 0 }, i41{ 42 }, i42{ 0 }, i43{ std::numeric_limits<int>::min() };
	cout << min(c11, c12) << " ";
	cout << min(c21, c22, c23) << " ";
	cout << min(i31, i32) << " ";
	cout << min(i41, i42, i43);
	cin.get();
	return 0;
}