#include <iostream>

namespace NS1 {
	const int x{ 1 };
}

namespace NS2 {
	const int x{ 2 };
}

int main() {
	std::cout << NS1::x << std::endl << NS2::x;
	return 0;
}
